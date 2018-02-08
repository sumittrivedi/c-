#include <iostream>

using namespace std;

class A{

    //const int m = 20;
public:
    int a1[20],itemcodea[20],itempricea[20];
    void itemcode();
    void itemprice();
    void display();

};

void A::itemcode(){

    cout<<"Enter code\n";
    for(int i = 0;i<20;i++){
        cin>>itemcodea[i];
    }

}

void A::itemprice(){

    cout<<"Enter price\n";
    for(int i = 0;i<20;i++){
        cin>>itempricea[i];
    }

}

void A::display(){

    int sum = 0;
    for(int i = 0;i<20;i++){
        sum = sum + itempricea[i];
    }

    cout<<"sum is"<<sum;

}

int main()
{
    A a;
    a.itemcode();
    a.itemprice();
    a.display();
    return 0;
}
