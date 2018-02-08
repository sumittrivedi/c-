#include <iostream>

using namespace std;

class Test
{
   public:
       int count1;
       void operator++()
       {

           count1=count1 +1;
       }
       void display()
       {
           cout<<count1;
       }
};int main()
{
    Test t;
    ++t;
    t.display();
    return 0;
}
