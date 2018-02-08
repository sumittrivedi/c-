#include <iostream>
using namespace std;
int balance=0;
char type;
class Account
{
    public :
    string name;
    int accno;
    Account()
    {
    cout<<"Your Name please :  ";
    cin>>name;
    cout<<"\n"<<"Enter Account no :";
    cin>>accno;
    cout<<"\n"<<"Account created";
    }
};

class current :public Account
{
     public:
        int balance=0;
    current()
    {
        int ch1,temp1;
        cout<<"\n"<<"Enter"<<"\n"<<"1. To Deposit"<<"\n"<<"2. To check Balance"<<"\n"<<"3. To Calculate Intrest"<<"\n"<<"4. To Withdraw";
        while(1)
        {
            cout<<"\n";
            cin>>ch1;
            switch(ch1)
            {
        case 1:cout<<"\n"<<"Enter amount : ";
        cin>>temp1;
        balance+=temp1;break;
        case 2:cout<<"\n"<<"Balance : "<<balance;break;
        case 3:
        cout<<"\n"<<"Intrest calculated is Rs 0";break;
        case 4:int temp3;
        cin>>temp3;
        balance-=temp3;
        if(balance<1000)
            {
                 balance-=50;
            cout<<"\n"<<"Service charge of Rs 50 is deducted";
            };break;
        default:cout<<"wrong choice";break;
            }
      }
    }
};

class saving :public Account
{
    public:
       int balance;
   saving()
    {
        int ch1;
        cout<<"\n"<<"Enter"<<"\n"<<"1. To Deposit"<<"\n"<<"2. To check Balance"<<"\n"<<"3. To Calculate Intrest"<<"\n"<<"4. To Withdraw";
        while(1)
        {
           cout<<"\n";
            cin>>ch1;
            switch(ch1)
            {
        case 1:cout<<"\n"<<"Enter amount : ";
        int temp1;
        cin>>temp1;
        balance+=temp1;break;
        case 2:cout<<"\n"<<"Balance : "<<balance;break;
        case 3:int intrest;
        intrest=balance/10;break;
        cout<<"\n"<<"Intrest calculated is Rs"<<intrest;
        balance+=intrest;break;
        case 4:int temp2;
        cin>>temp2;
        balance-=temp2;
        if(balance<1000)
            {
                 balance-=50;
            cout<<"\n"<<"Service charge of Rs 50 is deducted";
            };break;
        default:cout<<"wrong choice";break;
            }
      }
    }
};
int main()
{
    char type;
    cout<<"Enter's' or 'c' for saving and current account respectively"<<"\n";
    cin>>type;
    if(type=='s')
        saving obj1;
    else
        if(type=='c')
        current obj2;
    return 0;
}
