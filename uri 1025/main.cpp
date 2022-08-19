#include <iostream>

using namespace std;

int main()
{
    int i,j;
    int n,q;
    int cont=0;

    while(1){
        cont++;
        cin>>n>>q;
        int v[n];
        int x[q];
        if(n==0 && q==0)break;
        for(i=0;i<n;i++){
            cin>>v[i];
        }
        for(j=0;j<q;j++){
            cin>>x[i];
        }
        for(i=0;i<n;i++){
            if(x[i]==v[i])
        }
        cout<<"CASE# "<<cont<<":"<<endl;

    }
    return 0;
}
