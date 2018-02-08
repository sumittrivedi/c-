#include <iostream>

using namespace std;

enum shape
{
    circle,rectangle,triangle
};
int main()
{
    cout<<"Enter shape code\n";
    int code;
    cin>>code;
    while(code>=circle && code<=triangle)
    {
    switch(code)
    {
     case 0:cout<<"\nEnter radius :";
     int r;
     cin>>r;
     cout<<"Area of circle is "<<3.14*r*r;break;

     case 1:cout<<"\nEnter length and breath :";
     int a,b;
     cin>>a>>b;
     cout<<"Area of rectangle is "<<a*b;break;

      case 2:cout<<"\nEnter base and heigth :";
     int base,h;
     cin>>base>>h;
     cout<<"Area of triangle is "<<0.5*base*h;break;


    }
    cout<<"\n";
    cin>>code;
    }
    return 0;
}
