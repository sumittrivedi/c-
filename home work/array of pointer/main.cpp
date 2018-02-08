#include <iostream>
#include<string.h>

using namespace std;

int main()
{

    int i;
    char *ch[10]= {"abc","def","ghi","jkl"};
    cout << "enter string" << endl;
    char st[4];
    cin>>st;
    for(i =0;i<4;i++){

        if(strcmpi(*ch[i],st)){
            cout<<"present";
            break;
        }

    }
    return 0;
}
