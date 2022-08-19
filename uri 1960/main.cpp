#include <iostream>

using namespace std;

int main()
{
    int n,x,i;
    while(1){
    cin>>n;
    if(n==0)break;
    for(i=0;i<n;i++){
        cin>>x;
        if(x==0)break;
        else{

            if(x%2!=0)cout<<(x*2)-1<<endl;
            else cout<<(x*2)-2<<endl;
                }
        }

    }

    return 0;
}
