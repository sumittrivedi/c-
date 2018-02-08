#include <iostream>

using namespace std;

class A
{
  //const int n = 5;
  public:
      int itemcode[5],itemprice[5];
      void code();
      void price();
      void display();
};
void A :: code()
{
    for(int i=0;i<5;i++)
        cin>>itemcode[i];
}
void A ::price()
{
     for(int i=0;i<5;i++)
        cin>>itemprice[i];
}
void A :: display()
{
    int sum=0;
    for(int i=0;i<5;i++)
    {
        cout<<itemcode[i];
        cout<<"\t"<<itemprice[i]<<"\n";
    }

    for(int i=0;i<5;i++)
        sum+=itemprice[i];
        cout<<"Total price is "<<sum;
}
int main()
{
    A a;
    a.code();
    a.price();
    a.display();
    return 0;
}
