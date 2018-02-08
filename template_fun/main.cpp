#include <iostream>

using namespace std;

template<typename T>
T mymax(T x,T y)
{
    return (x>y?x:y);
}
int main()
{
    cout <<mymax<int>(3,8)<< endl;
    cout <<mymax<char>('f','u')<< endl;
    cout <<mymax<float>(3.25,10.8)<< endl;
    return 0;
}
