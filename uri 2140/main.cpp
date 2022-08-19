#include <iostream>

using namespace std;

int main()
{   int compra, pag;
    int troco,i,a=0;
    int nota[20]={4,7,10,12,15,20,22,25,30,40,50,52,55,60,100,102,105,110,120,150};
    while(1){
        cin>>compra>>pag;

        if(compra==0&&pag==0)break;
        troco=pag-compra;
        for(i=0;i<20;i++){
        if(troco==nota[i]){
            a=1;
        }
        }
        if(troco>=4 && troco<=200 && a==1){
            cout<<"possible"<<endl;
        }
        else{
            cout<<"impossible"<<endl;
                }

    }

    return 0;
}
