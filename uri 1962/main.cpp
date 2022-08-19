#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n,t,i,A;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>t;
        A=abs(2015-t);
        if(t>=2015){
            printf("%d A.C.\n",A+1);
        }
        else{
            printf("%d D.C.\n",A);
        }
    }
    return 0;
}
