#include <iostream>

using namespace std;

int main()
{
    int aid,did,lid,aig,dig,lig,b,golped,golpeg,res;
    int n,i;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>b;
        cin>>aid>>did>>lid;
        cin>>aig>>dig>>lig;
        if(lid%2==0){
            golped=((aid+did)/2)+b;
        }
        else{
            golped=((aid+did)/2);
        }
         if(lig%2==0){
            golpeg=((aig+dig)/2)+b;
        }
        else{
            golpeg=((aig+dig)/2);
        }
         res=golped-golpeg;
    if(res==0){
        cout<<"Empate"<<endl;
        }
    else if(res>0){
        cout<<"Dabriel"<<endl;
        }
    else if(res<0){
        cout<<"Guarte"<<endl;
        }
    }

    return 0;
}
