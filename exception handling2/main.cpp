#include <iostream>

using namespace std;

int main()
{
    int x=-1;
    cout<<"before execution";
    try
    {
        try
    {
        throw 20;
    }
    catch(int x)
        {
            cout<<"\n"<<"Handle Partially";
        }
    }
    catch(int x)
    {
        cout<<"Handle Remaining";
    }
    return 0;
}
