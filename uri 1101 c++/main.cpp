#include <iostream>


using namespace std;

int main()
{
    pair<int,int> n;
    int v[10],sum=0,i,x,y;
    while(1){
        cin>>n.first>>n.second;
        x=n.first;
        y=n.second;
        if(n.first<=0 or n.second<=0) break;
        for(i=y;i<=x;i++){
            cout<<v[i]<<" ";
        }
        //for(i=n.second;i<=n.first;i++){
           // sum+=v[i];
         //   cout<<"Sum="<<sum<<endl;

       // }


    }



    return 0;
}
