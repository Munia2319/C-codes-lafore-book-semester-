#include<iostream>
#include<iomanip>
#include<cstring>
using namespace std;

class PairStack
{
protected:
    enum {MAX = 80};
    int st[MAX];
    int top;
public:
    PairStack():top(-1)
    {

    }
    void push(int y)
    {
        st[++top]=y;
    }
    void pop(int y)
    {
        cout<< st[top--]<<")"<<" ";
    }

};
class Stack2:public PairStack
{
private:

public:
    Stack2():PairStack()
    {
    }
    void push(int x,int y)
    {
        st[++top]=x;
        PairStack::push(y);
    }
    void pop(int x,int y)
    {
        cout<<"("<<st[top--]<<",";
        PairStack::pop(y);

    }

};

int main()
{
    Stack2 p1,p2;
    cout<< "\n push on stack ::(2,3) ,(3,4) ,(4,5) \n";
    p1.push(2,3);
    p1.push(3,4);
    p1.push(4,5);
    cout<< "\n pop out (4,5) ,(3,4) ,(2,3)::";
    p1.pop(4,5);
     p1.pop(3,4);
     p1.pop(2,3);
cout<<endl;
    return 0;
}
