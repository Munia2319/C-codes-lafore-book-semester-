#ifndef ITEAM_H
#define ITEAM_H
#include<vector>
#include<iostream>
#include<string>
enum max{MAX=20};
using namespace std;
class iteam /// base class
{
protected:
    int code[20];
    float price[80];
    char name[80];
    int sum;
    char clt[MAX];
    char cr[MAX];
    char dus[MAX];
    char mat[MAX],qu[MAX];
//   char dus[MAX];
    int sp;

public:
    iteam():sum(0),temp(0) /// zero arg constructor
    {
    }
    int temp; /// public data
    char catagory[MAX];/// public data
    void insert();
    void add();
    void display();
    void search();
    void search1();
    void remove();
    void remove1();
    void total_amount();
    void catago_amount();
    void error1();
    void initial_task();
    void initial_task1();
    friend int function1();
};

#endif // ITEAM_H
