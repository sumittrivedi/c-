#include <iostream>

using namespace std;

class space{

public:
     int x,y,z;
     void setcode(int,int,int);
     void showcode();
     void operator-();


};

void space::setcode(int a,int b,int c){

    x = a;
    y = b;
    z = c;

}

void space::showcode(){

    cout<<x<<"\t";
    cout<<y<<"\t";
    cout<<z;

}

void space::operator-(){

    x = -x;
    y = -y;
    z = -z;

}

int main()
{
    space s;
    s.setcode(10,-20,30);
    s.showcode();
    -s;
    cout<<"\n";
    s.showcode();
    return 0;
}
