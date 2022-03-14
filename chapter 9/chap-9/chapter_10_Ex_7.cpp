#include<iostream>
#include<iomanip>
#include<string>
#define MAX 80
using namespace std;

class person
{
private:
    string name;
    float salary;
public:
    void setData()
    {
        cout<< "\n Enter The Name::";
        cin>>name;

cout<< "\n Enter The Salary::";
        cin>>salary;

    }

    float getSalary()
    {
        return salary;
    }

    void printData()
    {
        cout<< "\n Name::"<<name<<endl;
        cout<< "\n Salary::"<<salary<<endl;
    }
};

void bsort(person**, int);
void order(person**,person**);
int main()
{
    person* arr[MAX];
    char ch;
    int i =0;
    do
    {
        arr[i]= new person;

       arr[i]->setData();
        i++;
        cout<< "\n Enter More Data(y/n)::";
        cin>>ch;
    }

    while(ch!='n');



    bsort(arr,i);
    cout<< "\ After Sorting The Salary::";

for(int j =0; j<i; j++)
{
    arr[j]->printData();
    cout<<endl;
}

    return 0;
}

void bsort(person**s,int n)
{
    for(int i =0 ; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            order(s+i,s+j);
        }
    }
}
void order(person** s1,person** s2)
{
    person** temp;
    if((*s1)->getSalary() > (*s2)->getSalary())
    {
        *temp = *s1 ;
        *s1 = *s2;
        *s2 = *temp;

    }
}
