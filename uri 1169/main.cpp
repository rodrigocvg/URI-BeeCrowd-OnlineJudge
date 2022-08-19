#include <iostream>
#include <math.h>

using namespace std;

long long int res (int x){
    long long int total=pow(2,x);
    long long int grama=total/12;
    long long int kg = grama/1000;
     if(x==63){
        return  768614336404564;
        }
      if(x == 64){
   return 1537228672809129;
        }
    return kg;

}
int main()
{
    int n,i;
    int grao;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>grao;

        res(grao);
        cout<<res(grao)<<" kg"<<endl;
    }

    return 0;
}
