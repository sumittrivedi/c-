#include <iostream>

using namespace std;
class A
{
    public :
void prime(int x,int y)
{
    for (int i=x+1;i<y;i++)
    {
        int count=0;
        for(int j=i;j>=1;j--)
        {
            if(i%j==0)
                count++;
        }
        if(count==2)
            cout<<i<<"\n";
    }
}
};
int main()
{
    int n1,n2;
    cin>>n1>>n2;
    cout<<"prime nos. betweenw "<<n1<< " and "<<n2<< " are as follows:"<<"\n";
    A obj;
    obj.prime(n1,n2);
    return 0;
}
