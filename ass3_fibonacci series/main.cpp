#include <iostream>

using namespace std;

class Fibonacci
{
    public :
  void display(int,int);
};
void Fibonacci :: display(int a,int b)
{
    if(a<50){
    cout <<a<<"\n" ;
    int temp=a;
    a=b;
    b=a+temp;
    display(a,b);
    }

}
    int main()
{
    Fibonacci obj;
    obj.display(1,1);
    return 0;
}
