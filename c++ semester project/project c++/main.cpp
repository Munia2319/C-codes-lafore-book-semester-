#include<iostream>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<string>
#include<vector>
#include<fstream>
#include "iteam.h"
#include"cloth.cpp"
#include"dusing.cpp"
#include"material.cpp"
#include"access.cpp"
using namespace std;
/// Start function1()
int function1()
{
    int a1;
    cout<<"choose a option to enter from the following sites"<<'\n';
    cout<<"1.press 1 for cloths."<<'\n'<<"2.press 2 for daily using thing."<<'\n'
        <<"3.press 3 for raw materials."<<'\n'<<"4.press 0 for exit."<<'\n';
    cin>>a1;
    return a1;
}
/// end function1()
/// main() func start
int main()
{
    access();
    fstream file;
    file.open("shoping.dat",ios::app|ios::out|ios::in|ios::binary);

    cloth t[MAX],f1,ob;

    dusing du[MAX],f2,ob1;
    material ma[MAX],f3,ob2;
    int i, x = 0, n,a, j, k,l,s,m,b,c,q,g=0,a1,y=0,z=0;
    char inp[MAX];

    for(i=0; ; i++)
    {
        a1=function1();
        switch(a1)
        {
        case 1:
            for(i=0; ; i++)
            {
                ob.initial_task();
                cin>>a; /// get int value for choice
                switch(a)
                {
                case 1:
                    if(x>0)
                    {
                        cout<<"YOU CAN NOT INSERT ITEAM MORE THAN ONE TIMES"<<'\n'<<'\n';
                        break;
                    }
                    else
                    {
                        cout<<"how many catagory do u want to insert=";
                        cin>>n;
                        file.write(reinterpret_cast<char*>(t),MAX*sizeof(t));
                        for(i=0; i<n; i++)
                        {
                            t[x].insert(); /// insert cloths, cloth t[20]
                            t[x].insert_cl(); /// choice cloth types (cotton,polyester,......)
                            x++;
                        }
                    }
                    break;
                case 2:
                    if(x<=0)
                    {
                        ob.error1(); /// show error message
                        break;
                    }
                    else
                    {
                        cout<<"how many catagory do u want to add=";
                        cin>>n;
                        file.write(reinterpret_cast<char*>(t),MAX*sizeof(t));
                        for(j=0; j<n; j++)
                        {
                            t[x].add(); /// cloth t[20]
                            t[x].insert_cl(); ///cloth t[20]
                            x++;
                        }
                        break;
                    }
                case 3:
                    if(x<=0)
                    {
                        ob.error1();
                        break;
                    }
                    else
                    {
                        file.read(reinterpret_cast<char*>(t),MAX*sizeof(t));
                        for(s=0; s<x; s++)
                        {
                            t[s].display(); ///cloth t[20]
                            t[s].display_cl(); ///cloth t[20]
                        }
                        break;
                    }
                case 4:
                    if(x<=0)
                    {
                        ob.error1();
                        break;
                    }
                    if(x>0)
                    {
                        cout<<"enter ur desired catagory=";
                        cin>>inp; ///char inp[20];
                        for(c=0; c<x; c++)
                        {
                            b=strcmp(inp,t[c].catagory);
                            if(b==0)
                                break;
                        }
                        if(b==0)
                        {
                            file.read(reinterpret_cast<char*>(t),MAX*sizeof(t));
                            t[c].search();
                            t[c].display_cl();
                        }
                        break;
                    }
                case 6:
                    if(x<=0)
                    {
                        ob.error1();
                        break;
                    }
                    else
                    {
                        cout<<"enter ur desired catagory=";
                        cin>>inp;
                        for(c=0; c<x; c++)
                        {
                            b=strcmp(t[c].catagory,inp);
                            if(b==0)
                                break;
                        }
                        if(b==0)
                            file.write(reinterpret_cast<char*>(t),MAX*sizeof(t));
                        t[c].remove();
                        break;
                    }
                case 5:
                    if(x<=0)
                    {
                        ob.error1();
                        break;
                    }
                    else
                    {
                        for(z=g; z<x; z++)
                        {
                            f1=f1+t[z];
                            g++;
                        }
                        file.read(reinterpret_cast<char*>(t),MAX*sizeof(t));
                        for(i=0; i<x; i++)
                            t[i].catago_amount();
                        f1.total_amount();
                        break;
                    }
                }
                if(a==0)
                    break;
            }
            break;
        case 2:
            for(i=0;; i++)
            {
                ob1.initial_task1();
                cin>>a;
                switch(a)
                {
                case 1:
                    if(y>0)
                    {
                        cout<<"YOU CAN NOT INSERT ITEAM MORE THAN ONE TIMES"<<'\n'<<'\n';
                        break;
                    }
                    else
                    {
                        cout<<"how many catagory do u want to insert=";
                        cin>>n;
                        file.write(reinterpret_cast<char*>(du),MAX*sizeof(du));
                        for(i=0; i<n; i++)
                        {
                            du[y].insert();
                            du[y].insert_du();
                            y++;
                        }
                    }
                    break;
                case 2:
                    if(y<=0)
                    {
                        ob1.error1();
                        break;
                    }
                    else
                    {
                        cout<<"how many catagory do u want to add=";
                        cin>>n;
                        file.write(reinterpret_cast<char*>(du),MAX*sizeof(du));
                        for(j=0; j<n; j++)
                        {
                            du[y].add();
                            du[y].insert_du();
                            y++;
                        }
                        break;
                    }
                case 3:
                    if(y<=0)
                    {
                        ob1.error1();
                        break;
                    }
                    else
                    {
                        file.read(reinterpret_cast<char*>(du),MAX*sizeof(du));
                        for(s=0; s<y; s++)
                        {
                            du[s].display();
                            du[s].display_du();
                        }
                        break;
                    }
                case 4:
                    if(y<=0)
                    {
                        ob.error1();
                        break;
                    }
                    if(y>0)
                    {
                        cout<<"enter ur desired catagory=";
                        cin>>inp;
                        for(c=0; c<y; c++)
                        {
                            b=strcmp(inp,du[c].catagory);
                            if(b==0)
                                break;
                        }
                        if(b==0)
                        {
                            file.read(reinterpret_cast<char*>(du),MAX*sizeof(du));
                            du[c].search();
                            du[c].display_du();
                        }
                        break;
                    }
                case 5:
                    if(y<=0)
                    {
                        ob1.error1();
                        break;
                    }
                    else
                    {
                        cout<<"enter ur desired catagory=";
                        cin>>inp;
                        for(c=0; c<y; c++)
                        {
                            b=strcmp(du[c].catagory,inp);
                            if(b==0)
                                break;
                        }
                        if(b==0)
                            file.write(reinterpret_cast<char*>(du),MAX*sizeof(du));
                        du[c].remove();
                        du[s].display();
                        du[c].display_du();
                        break;
                    }

                }
               if(a==0)
                    break;
            }
           // break;
        case 3:
            for(i=0;; i++)
            {
                ob2.initial_task();
                cin>>a;
                switch(a)
                {
                case 1:
                    if(z>0)
                    {
                        cout<<"YOU CAN NOT INSERT ITEAM MORE THAN ONE TIMES"<<'\n'<<'\n';
                        break;
                    }
                    else
                    {
                        cout<<"how many catagory do u want to insert=";
                        cin>>n;
                        file.write(reinterpret_cast<char*>(ma),MAX*sizeof(ma));
                        for(i=0; i<n; i++)
                        {
                            ma[z].insert();
                            ma[z].insert_ma();
                            z++;
                        }
                    }
                    break;
                case 2:
                    if(z<=0)
                    {
                        ob2.error1();
                        break;
                    }
                    else
                    {
                        cout<<"how many catagory do u want to add=";
                        cin>>n;
                        file.write(reinterpret_cast<char*>(ma),MAX*sizeof(ma));
                        for(j=0; j<n; j++)
                        {
                            ma[z].add();
                            ma[z].insert_ma();
                            z++;
                        }
                        break;
                    }
                case 3:
                    if(z<=0)
                    {
                        ob2.error1();
                        break;
                    }
                    else
                    {
                        file.read(reinterpret_cast<char*>(ma),MAX*sizeof(ma));
                        for(s=0; s<z; s++)
                        {
                            ma[s].display();
                            ma[s].display_ma();
                        }
                        break;
                    }
                case 4:
                    if(z<=0)
                    {
                        ob2.error1();
                        break;
                    }
                    if(z>0)
                    {
                        cout<<"enter ur desired catagory=";
                        cin>>inp;
                        for(c=0; c<z; c++)
                        {
                            b=strcmp(inp,ma[c].catagory);
                            if(b==0)
                                break;
                        }
                        if(b==0)
                        {
                            file.read(reinterpret_cast<char*>(ma),MAX*sizeof(ma));
                            ma[c].search1();
                            //ma[s].display_ma();
                        }
                        break;
                    }
                case 6:
                    if(z<=0)
                    {
                        ob2.error1();
                        break;
                    }
                    else
                    {
                        cout<<"enter ur desired catagory=";
                        cin>>inp;
                        for(c=0; c<z; c++)
                        {
                            b=strcmp(ma[c].catagory,inp);
                            if(b==0)
                                break;
                        }
                        if(b==0)
                            file.write(reinterpret_cast<char*>(ma),MAX*sizeof(ma));
                        ma[c].remove1();
                        //ma[c].display_ma();
                        break;
                    }
                case 5:
                    if(z<=0)
                    {
                        ob2.error1();
                        break;
                    }
                    else
                    {
                        for(q=g; q<z; q++)
                        {
                            f3=f3+ma[q];
                            g++;
                        }
                        file.read(reinterpret_cast<char*>(ma),MAX*sizeof(ma));
                        for(i=0; i<z; i++)
                            ma[i].catago_amount();
                        //f3.total_amount();
                        break;
                    }
                }
                if(a==0)
                    break;
            }
            break;
        }
        if(a1==0)
            break;
    }
    return 0;
}

/// Start initial_task() function
void iteam::initial_task()
{
    cout<<"What do u want to do ?"<<'\n';
    cout<<"1.if u want to insert press 1"<<'\n';
    cout<<"2.if u want to add press 2"<<'\n';
    cout<<"3.if u want to display press 3"<<'\n';
    cout<<"4.if u want to search press 4"<<'\n';
     cout<<"5.if u want to see the total price press 6"<<'\n';
    cout<<"6.if u want to remove press 5"<<'\n';
    cout<<"7.if u want to exit press 0"<<'\n';
}
/// End initial_task() function


/// Start insert() function
void iteam::insert()
{
    int i, n,k;
    cout<<"enter catagory name(local,foreigner,kashmir.......)=";
    cin>>catagory;
    cout<<"how many item do u want to insert =";
    cin>>n;
    for(i=temp; i<n; i++) /// temp public data in base ,class item
    {
        cout<<"enter name of the iteam=";
        cin>>name[temp];
        cout<<"enter code=";
        cin>>code[temp];
        cout<<"enter price=";
        cin>>price[temp];
        temp++;
        sum=sum+price[i];
    }
}
/// End insert() function

/// Start error1() function
void iteam::error1()
{
    cout<<"FIRST U NEED TO INSERT ITEAM";
    cout<<'\n'<<'\n';
}
/// End error1() function

/// Start add() function
void iteam::add()
{
    int i,n;
    cout<<"enter catagory name=";
    cin>>catagory;
    cout<<"how many item do u want to add =";
    cin>>n;
    for(i=temp; i<n; i++) /// temp public data in
    {
        cout<<"enter name of the iteam=";
        cin>>name[temp];
        cout<<"enter code=";
        cin>>code[temp];
        cout<<"enter price=";
        cin>>price[temp];
        temp++;
        sum=sum+price[i];
    }
}
/// End add() function

/// Start display() function
void iteam::display()
{
    int i;
    cout<<"under the "<<catagory<<" catagory the items are:"<<'\n'<<'\n';
    cout<<"item name"<<'\t';
    cout<<"code"<<'\t';
    cout<<"price"<<'\t'<<'\n';
    for(i=0; i<temp; i++)
    {

        cout<<name[i]<<'\t'<<'\t';
        cout<<code[i]<<'\t';
        cout<<price[i]<<'\n'<<'\n';
    }
    cout<<'\n'<<'\n';
}
/// End display() function

/// Start search() function
void iteam::search()
{
    int i,m;
    cout<<"enter code:";
    cin>>m;
    for(i=0; i<temp; i++)
    {
        if(code[i]==m)
        {
            cout<<"item name is ="  <<name[i]<<'\n';
            cout<<"price is="<<price[i]<<'\n'<<'\n';
        }
        else
            cout<<"u have entered wrong code"<<'\n'<<'\n';
    }
    cout<<'\n'<<'\n';
}
/// End search() function

/// Start remove() function
void iteam::remove()
{
    int i,m;
    cout<<"enter code:";
    cin>>m;
    for(i=0; i<temp; i++)
    {
        if(code[i]==m)
        {
            price[i]=0;
            name[i]=0;
            code[i]=0;
            clt[i]=0;
            cr[i]=0;
            dus[i]=0;
        }
        else
            cout<<"u have entered wrong code"<<'\n'<<'\n';
    }
    cout<<'\n'<<'\n';
}
/// End remove() function

/// Start catago_amount() function
void iteam :: catago_amount()
{
    cout<<"under the "<<catagory<<" catagory the total price of the items are="<<sum<<'\n'<<'\n';
}
/// End catago_amount() function

/// Start total_amount() function
void iteam::total_amount()
{
    cout<<"the total price of all the items of all catagories is="<<sum<<'\n'<<'\n';
}
/// End total_amount() function


void iteam::search1()
{
    int i,m;
    cout<<"enter code:";
    cin>>m;
    for(i=0; i<temp; i++)
    {
        if(code[i]==m)
        {
            cout<<"item name is ="  <<name[i]<<'\n';
            cout<<"price is="<<price[i]<<'\n'<<'\n';
            cout<<"type :" <<mat[i]<<'\n';
            cout<<"quality :" <<qu[i]<<'\n';
            cout<<"the time after it will spoil:" <<sp<<'\n'<<'\n'<<'\n';
        }
        else
            cout<<"u have entered wrong code"<<'\n'<<'\n';
    }
    cout<<'\n'<<'\n';
}


void iteam::remove1()
{
    int i,m;
    cout<<"enter code:";
    cin>>m;
    for(i=0; i<temp; i++)
    {
        if(code[i]==m)
        {
            price[i]=0;
            name[i]=0;
            code[i]=0;
            mat[i]=0;
            qu[i]=0;
    sp=0;
        }
        else
            cout<<"u have entered wrong code"<<'\n'<<'\n';
    }
    cout<<'\n'<<'\n';
}
/// End remove() function

void iteam::initial_task1()
{
    cout<<"What do u want to do ?"<<'\n';
    cout<<"1.if u want to insert press 1"<<'\n';
    cout<<"2.if u want to add press 2"<<'\n';
    cout<<"3.if u want to display press 3"<<'\n';
    cout<<"4.if u want to search press 4"<<'\n';
    cout<<"5.if u want to remove press 5"<<'\n';
    //cout<<"6.if u want to see the total price press 6"<<'\n';
    cout<<"6.if u want to exit press 0"<<'\n';
}
