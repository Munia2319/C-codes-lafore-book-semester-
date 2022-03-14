#include <iostream>
#include <conio.h>
using namespace std;
const int LEN = 80;

class employee
{
private:
 char name[LEN];
 unsigned long number;
public:
 void getdata()
 {
  cout << "\n Enter last name : ";
  cin >> name;
  cout << " Enter number :";
cin >> number;
 }
 void putdata() const
 {
  cout << "\n Name : " << name;
  cout << "\n Number : " << number;
 }
};

class employee2 :public employee
{
private:
 double compen;
 enum paytype{ hourly, weakly, monthly };
 paytype period;
public:
 void getdata()
 {
  char a;
  employee::getdata();
  cout << "Enter compensation: ";
  cin >> compen;
  cout << "Enter payment period (h,w,m): ";
  cin >> a;
  switch (a)
  {
  case 'h':
   period = hourly;
   break;
  case 'w':
   period = weakly;
   break;
  case 'm':
   period = monthly;
   break;
  }
 }
 void putdata() const
 {
  employee::putdata();
  cout << "Employee compensation: " << compen << endl;
  switch (period)
  {
  case hourly:
   cout << "hourly" << endl;
   break;
  case weakly:
   cout << "weakly" << endl;
   break;
  case monthly:
   cout << "monthly" << endl;
   break;
  }
 }
};

class manager : public employee2
{
private:
 char title[LEN];
 double dues;
public:
 void getdata()
 {
  employee2::getdata();
  cout << " Enter title : ";
   cin >> title;
  cout << " Enter golf club dues : ";
   cin >> dues;
 }
 void putdata() const
 {
  employee2::putdata();
  cout << "\n Title : " << title;
  cout << "\n Golf club dues : " << dues;
 }
};

class scientist : public employee2
{
private:
 int pubs;
public:
 void getdata()
 {
  employee2::getdata();
  cout << " Enter number of pubs : ";
   cin >> pubs;
 }
 void putdata() const
 {
  employee2::putdata();
  cout << "\n Number of publications : " << pubs;
 }
};

class laborer : public employee2
{};

int main()
{
 manager m1, m2;
 scientist s1;
 laborer l1;
 cout << endl;
 cout << "\nEnter data for manager 1"<<endl;
 cout<< "----------------------------\n";
 m1.getdata();
 cout << "\nEnter data for manager 2"<<endl;
 cout<< "----------------------------\n";
 m2.getdata();
 cout << "\nEnter data for scientist 1"<<endl;
 cout<< "----------------------------\n";
 s1.getdata();
 cout << "\nEnter data for laborer 1"<<endl;
 cout<< "----------------------------\n";
 l1.getdata();

 cout << "\nData on manager 1"<<endl;
 cout<< "----------------------------\n";
 m1.putdata();
 cout << "\nData on manager 2"<<endl;
 cout<< "----------------------------\n";
 m2.putdata();
 cout << "\nData on scientist 1"<<endl;
 cout<< "----------------------------\n";
 s1.putdata();
 cout << "\nData on laborer 1"<<endl;
 cout<< "----------------------------\n";
 l1.putdata();
 cout << endl;
return 0;
}
