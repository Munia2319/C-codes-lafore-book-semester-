#include <iostream>
using namespace std;
class Counter
{
protected:
    int count;
public:
    Counter() : count()
    { }

    Counter(int c) : count(c)
    { }

    int getCount() const
    {
        return count;
    }
    Counter operator ++ ()
    {
        return Counter(++count);
    }
    Counter operator ++ (int)
    {
        return Counter(count++);
    }
};

class CountDn : public Counter
{
public:
    CountDn() : Counter()
    { }

    CountDn(int c) : Counter(c)
    { }

    CountDn operator -- ()
    {
        return CountDn(--count);
    }

    CountDn operator -- (int)
    {
        return CountDn(count--);
    }
};

int main()
{
    CountDn c1;
    CountDn c2(100);
    cout<< "\n Initial Values of c1 and c2::"<<endl;
    cout << "\n c1=" << c1.getCount();
    cout << "\n c2= "<< c2.getCount();

    cout<< "\n After Three Times Prefix Increment ::"<<endl;
    ++c1;
    ++c1;
    ++c1;
    cout << "\n c1="<< c1.getCount();

    cout<< "\n After Three Times Prefix Decrement ::"<<endl;
    --c2;
    --c2;
    --c2;
    cout << "\n c2="<< c2.getCount();
    cout<< "\n After Three Times Postfix Increment ::"<<endl;


    c1++;
    c1++;
    c1++;
    cout << "\n c1="<< c1.getCount();
    cout<< "\n After Three Times Postfix Decrement ::"<<endl;
    c2--;
    c2--;
    c2--;

    cout << "\n c2="<< c2.getCount();

    return 0;
}
