#include <iostream>

using namespace std;

class A
{
public:
   int code;
   static int count1;
   public:
   void setcode();
   void showcode();
   void showcount();
};
int A:: count1;
    void A ::setcode()
    {
      code=++count1;
    }
   void A ::showcode()
   {
       cout<<code<<"\n";
   }
   void A ::showcount()
   {
       cout<<count1<<"\n";
   }

int main()
{
    A a,b,c;
    a.setcode();
    a.showcode();
    b.setcode();
    b.showcode();
    c.setcode();
    c.showcode();

    a.showcount();
    b.showcount();
    c.showcount();

    return 0;
}
