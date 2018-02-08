#include <iostream>

using namespace std;

class A
{
    public:
   int n=5;
   public:
       void pattern1(int n)
       {
           for(int i=1;i<=n;i++)
           {
               for(int j=1;j<i;j++)
               cout<<" ";
               for(int k=i;k<=n;k++)
               cout<<"* ";
                cout<<"\n";
           }

       }
        void pattern2(int n)
       {
           for(int i=1;i<=n;i++)
           {
               for(int k=1;k<=i;k++)
               cout<<"* ";
                cout<<"\n";
           }
       }
       friend void fpattern1(A a);
       friend void fpattern2(A a);
};
 void fpattern1(A a)
 {
     A b;
     b.pattern1(a.n);
 }
 void fpattern2(A a)
 {
     A b;
      b.pattern2(a.n);
 }

int main()
{
    A x;
    int c;
    cin>>c;
    while(1)
    {
      switch (c)
    {
        case 1:fpattern1(x);break;
        case 2:fpattern2(x);break;

    }
    cin>>c;
    }

    return 0;
}
