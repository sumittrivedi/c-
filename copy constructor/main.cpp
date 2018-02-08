#include <iostream>

using namespace std;

class code
{
    int id;
    public:
    code()
    {

    }
    code(int a)
    {
        id=a;
    }
    code(code &x)
    {

        id=x.id;
    }
    void display()
    {
        cout<<id<<"\n";
    }
};
    int main()
{
    code a1(20);
    code b(a1);
    code d;
    d =a1;
    a1.display();
    b.display();
    d.display();
    return 0;
}
