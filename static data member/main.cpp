#include <iostream>

using namespace std;
class A
{
    static int count1;
    int number;
    public:
    void getdata(int a)
    {
        number = a;
        count1++;
    }
    void getcount()
    {
        cout<<count1<<"\n";
    }
};
int A :: count1;

int main()
{
    A a,b,c;
    a.getcount();
    b.getcount();
    c.getcount();
    a.getdata(100);
    b.getdata(200);
    c.getdata(300);
    a.getcount();
    b.getcount();
    c.getcount();
    return 0;
}
