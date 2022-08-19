#include <iostream>

using namespace std;

int main()
{
    int psapo,numcano,i,dif;

    cin>>psapo>>numcano;
    int hcano[numcano];

    for(i=0;i<numcano;i++){
        cin>>hcano[i];
        dif = hcano[i]-hcano[i-1];
    }
    for(i=0;i<numcano;i++){
     if(dif>psapo){
           cout<<"GAME OVER"<<endl;
        }
    else{
        cout<<"YOU WIN"<<endl;
    }
    }
    return 0;
}
