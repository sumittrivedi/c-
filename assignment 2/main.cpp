#include <iostream>

using namespace std;
class A
{
public :
    double power (double a,int b)
    {
        int result=1;
        for(int i=1;i<=b;i++)
            result=result*a;
        return(result);
    }
    double power (double a)
    {
        return(a*a);
    }
};
int main()
{
    double n;
    int p;
    cin>>n>>p;
    A obj;
    cout<<obj.power(n,p);
    return 0;
}
