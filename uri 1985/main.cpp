#include <iostream>

using namespace std;

int main()
{
    int nump,qnt,n,i;
    float total=0,x;
    cin>>n;
    for(i=0;i<n;i++){
    cin>>nump;
    cin>>qnt;
    if(nump==1001){
       x=1.5;
    }
    if(nump==1002){
       x=2.5;
    }
    if(nump==1003){
       x=3.5;
    }
    if(nump==1004){
       x=4.5;
    }
    if(nump==1005){
       x=5.5;
    }
    total+=qnt*x;


}
    cout.precision(2);
    cout.setf(ios::fixed);
    cout<<total<<endl;


    return 0;

}
