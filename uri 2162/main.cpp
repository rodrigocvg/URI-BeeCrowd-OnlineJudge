#include <iostream>

using namespace std;

int main()
{
    int n,i;
    cin>>n;
    int x[n],res;
    for(i=0;i<n;i++){
        cin>>x[i];

    }
    for(i=0;i<n;i++){
    if(x[i]==x[i+1]or x[i-1]==x[i]){
        res=0;
    }

     else if(x[i]>x[i+1]){
            if(x[i+1]>=x[i+2])
            res=1;
            else res=0;
        }
     else if(x[i]<x[i+1]){
            if(x[i+1]<=x[i+2])
            res=1;
            else res=0;
        }
    }
    cout<<res<<endl;


    return 0;
}
