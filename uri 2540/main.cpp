#include <iostream>

using namespace std;

int main()
{
    int n,i,imp=0;
    float doist=0;
    while(cin>>n){
    int nota[n];
    doist= n * (2.0/3.0);

    for(i=0;i<n;i++){
        cin>>nota[i];
        if(nota[i]==1)imp++;
    }
    if(imp>=doist){
        cout<<"impeachment"<<endl;
    }
    else{
       cout<<"acusacao arquivada"<<endl;
    }
    imp=0;
    }

    return 0;
}
