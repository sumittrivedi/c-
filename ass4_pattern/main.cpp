#include <iostream>

using namespace std;

class pattern
{
    int i,j;
    public:
   void pattern1()
    {
        int p=1;
        for(int r=1;r<=4;r++)
        {
            for(int i=1;i<=r;i++)
            cout<<p++<<" ";
             cout<<"\n";
        }
    }
   void pattern2()
    {
         for(int r=1;r<=4;r++)
        {
              for(int k=r;k<=4;k++)
                    cout<<" ";
            for(j=1;j<=r;j++)
                cout<<"* ";
                 cout<<"\n";
        }

    }
};
int main()
{
    int a;
      cout<<"Enter 1 for number pattern and 2 for star pattern\n";
    cin>>a;
    pattern obj;
    switch(a)
    {
    case 1:obj.pattern1();break;
    case 2:obj.pattern2();break;
    }
    return 0;
}
