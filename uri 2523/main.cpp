#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    string alfabeto;
    int l,j;
    int lp;
    while(cin>>alfabeto){
    cin>>l;
    for(j=0;j<l;j++){
        cin>>lp;
        cout<<alfabeto[lp-1];

        }
    cout<<endl;
    }
    return 0;
}
