#include <iostream>

using namespace std;
int m=10;
int main()
{
    int m=20;

    {
        int k=m;
        int m=30;
         cout <<k<<"\n";
     cout <<m<<"\n";
      cout <<::m<<"\n";
    }
     cout <<m<<"\n";
      cout <<::m<<"\n";
    return 0;
}
