#include <iostream>

using namespace std;

class line{
public :
    double length;
    void setlength(double);
    double getlength();
    line();
    ~line();

};

line::line(){
    cout<<"object created inside line constructor\n";

    cout<<"Enter length of line\n";
    double x;
    cin>>x;
    cout<<"Calling setlength() \n";
    setlength(x);

}

void line::setlength(double len){
    length = len;

}

double line::getlength(){
   return(length);

}

line::~line(){
    cout<<"Inside destructor\n";

    cout<<"Length of line : ";
    cout<<getlength();
    cout<<"\nDestroying object \n";
}

int main()
{
    cout << "Creating Object" << endl;
    line a;
    return 0;
}
