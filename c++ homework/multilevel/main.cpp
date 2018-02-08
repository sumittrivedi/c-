#include <iostream>

using namespace std;

class student {
    int rollno;
public:
    void getnumber(int);
    void putnumber();
};

void student::getnumber(int a)
{    rollno=a;  }

void student::putnumber()
{  cout<<"roll no."<<rollno; }

class test:public student { public:
float sub1,sub2;
void getmarks(float x,float y)
{  sub1=x; sub2=y; }

void putmarks()
{  cout<<"\t m1-"<<sub1<<"\tm2-"<<sub2;  }  };

class result:public test {
float total;
public:
void display();        };

void result::display(){ total=sub1+sub2;
putnumber();    putmarks();
cout<<"\ntotal-"<<total;    }

int main() {
 result s1;
s1.getnumber(111);
s1.getmarks(75,95);
s1.display();
return 0;
   }
