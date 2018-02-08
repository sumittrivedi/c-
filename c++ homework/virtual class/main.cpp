#include <iostream>

using namespace std;

class Base          //Abstract base class
{
 public:
 virtual void show(){

 cout<<"\nbase age\n";

 }
     virtual void display(){

 cout<<"base name\n";

 }
};

class Derived:public Base
{
 public:
 void show()
 { cout << " \nderived address\n"; }
  virtual void display(){

 cout<<"derived address\n";

 }
};

int main()
{
 //Base obj;       //Compile Time Error
 Base *ptr,b;
 Derived d;
 ptr = &b;
 ptr->display();
 ptr->show();
 ptr = &d;
 ptr->display();
 ptr->show();
}
