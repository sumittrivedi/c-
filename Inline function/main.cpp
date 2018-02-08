#include <iostream>

using namespace std;
inline float multiply(float a,float b)
{

    return(a*b);
}
inline double divide(double a,double b)
{

    return(a/b);
}

int main()
{
    cout <<multiply(12.6,5.1) <<"\n" ;
    cout <<divide(12.6,5.1) ;
    return 0;
}
