#include <iostream>

using namespace std;
int volume(int a)
{
    return(a*a*a);
}
float volume(int a,int b)
{
    return(3.14*a*a*b);
}
int volume(int a,int b,int c)
{
    return(a*b*c);
}

int main()
{
    cout <<volume(7)<<"\n";
     cout <<volume(4.5,6)<<"\n";
     cout <<volume(5,6,8);
    return 0;
}
