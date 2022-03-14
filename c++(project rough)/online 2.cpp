
#include<iostream>
#include<fstream>
#include <string>

using namespace std;


class Order
{
private:
string customer;
string country ;
string productList[];
int numProducts ;

public:
void createOrder(Customer);
void add(product);
void search(string);
void delete(string);
void display();
};


class Customer
{
private:
string name;
string address;

public:
void createCust(string, string);
void customer(string, string);
void getName();
};

class Product
{
private:
string name;
string model;
float price;

public:
void readRecord(ifstream&);
void createProduct(string, string, float);
void getPrice();
void displayDetails();
void getName();

};

void displayDetails(product p)
{
cout<<"Name:"<<p.name<<endl;
cout<<p.model<<endl;
cout<<"Price:"<<p.price<<endl;

}



class Web_shop
{
private:
string customer;
string products[];
int invoiceNumber;
string order;

public:
void Web_shop();
void readProducts();
void login();
void runShop();
void generateInvoice();
};




int main()
{
int count=0;
product prods[10];
ifstream infile;

infile.open("products.dat");

if(infile.fail()) cout<<"File not found";
else {
// File loopfile.peek()!=EOF) {
infile> 0.5 mark
while(in>prods[count].name>>prods[count].model>>prods[count].price;
count++;
}
}
infile.close();
for(int i=0;i<count;i++)
displayProductDetails(prods[i]);



system("pause");
return 0;
}
