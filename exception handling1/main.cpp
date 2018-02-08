#include <iostream>

using namespace std;

int main()
{
    int x=-1;
    cout<<"before execution";
    try
    {
        cout<<"\n"<"after execution";
        if(x<0)
            cout<<x;
    }
    catch(int x)
        {
            cout<<"\n"<<"Exception";
        }
    cout<<"\n"<<"Default Exception";
    return 0;
}
