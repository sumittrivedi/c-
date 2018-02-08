#include <iostream>

using namespace std;

class Integer
{
    int m,n;
    public:
    Integer(int,int);
    void display()
    {
    cout<<m<<"\n"<<n;
    }
};
Integer :: Integer(int x,int y)
    {
        m=x;
        n=y;
    }

    int main()
{
   Integer int1=Integer(4,5);
   int1.display();
    return 0;
}
