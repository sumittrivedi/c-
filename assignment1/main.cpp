#include <iostream>
using namespace std;
int balance=0;
char type;
class Account
{
    public:
    string name;
    void createacc()
    {
    cout<<"Your Name please :  ";
    cin>>name;
    cout<<"Enter 's' for saving account or 'c' for current account : ";
    cin>>type;
    cout<<"\n"<<"Account created";
    }
    void showacc();
};

void Account:: showacc()
{

   int accno=1000645001;
   cout<<"\n"<<"\n"<<"Account holder name : "<<name;

   cout<<"\n"<<"Account number : "<<accno;
   cout<<"\n"<<"Balance : "<<"\n";

};
class current :public Account
{
    public:
    void deposit()
    {
        int temp1;
        cout<<"\n"<<"Enter amount";
        cin>>temp1;
        balance+=temp1;
    }
    void display()
    {
         cout<<"\n"<<"Balance : "<<balance;
    }
    void totalbalance()
    {
        cout<<"\n"<<"Intrest calculated is Rs 0";
         cout<<"\n"<<"Balance : "<<balance;
    }
    void withdraw()
    {
        int temp2;
        cout<<"\n"<<"Enter amount";
        cin>>temp2;
        balance-=temp2;
        if(balance<1000)
            {
                 balance-=50;
            cout<<"\n"<<"Service charge of Rs 50 is deducted";
            }
    }
};

class saving :public Account
{
    public:
    void deposit()
    {
        int temp1;
        cout<<"\n"<<"Enter amount";
        cin>>temp1;
        balance+=temp1;
    }
    void display()
    {
        cout<<"\n"<<"Balance : "<<balance;
    }
    void totalbalance()
    {
        int intrest;
        intrest=balance/10;
        cout<<"\n"<<"Intrest calculated is Rs"<<intrest;
        balance+=intrest;
         cout<<"\n"<<"Balance : "<<balance;
    }
    void withdraw()
    {
        int temp2;
        cout<<"\n"<<"Enter amount";
        cin>>temp2;
        balance-=temp2;
    }
};
int main()
{
    Account obj;
    obj.createacc();
    obj.showacc();
    current obj1;
    saving obj2;
    while(type=='s')
    {

        int temp;
        cout <<"\n"<<"Enter 1 to deposit"<<"\n"<<"2 for check balance"<<"\n"
        <<"3 for get your balance(Deposit + Intrest)"<<"\n"<<"4 for withdraw";
        cin>>temp;
        switch(temp)
        {

            case 1:obj2.deposit();break;
            case 2:obj2.display();break;
            case 3:obj2.totalbalance();break;
            case 4:obj2.withdraw();break;
            default : cout<<"wrong selection, try again";
        }
    }
        while(type=='c')
    {

        int temp;
        cout <<"\n"<<"\n"<<"Enter 1 to deposit"<<"\n"<<"2 for check balance"<<"\n"
        <<"3 for get your balance(Deposit + Intrest)"<<"\n"<<"4 for withdraw"<<"\n";
        cin>>temp;
        switch(temp)
        {

            case 1:obj1.deposit();break;
            case 2:obj1.display();break;
            case 3:obj1.totalbalance();break;
            case 4:obj1.withdraw();break;
            default : cout<<"wrong selection, try again";
        }
    }

    return 0;
}
