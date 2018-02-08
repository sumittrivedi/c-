#include <iostream>

using namespace std;

template<typename T>
class Array
{
private:
    T *ptr;
    int size1;
    public:
        Array(T arr[],int s);
         void print();
};
template<class T>
 Array<T> :: Array(T arr[], int s)
{
    ptr= new T[s];
    size1=s;
    for(int i=0;i<size1;i++)
    ptr[i]=arr[i];
}
template<class T>
void Array<T>::print()
{
    for(int i=0;i<size1;i++)
    cout<<*(ptr+i)<< endl;
}
int main()
{
   int arr[5]={3,7,8,774,65};
   Array<int>a(arr,5);
   a.print();
    return 0;
}
