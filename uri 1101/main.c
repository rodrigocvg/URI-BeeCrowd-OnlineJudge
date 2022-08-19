#include <iostream>


using namespace std;

int main()
{
    pair<int,int> n;
    int v[10],sum=0,i;
    while(1){
        cin>>n.first>>n.second;
        if(n.first<=0 or n.second<=0) break;
        for(i=n.second;i<=n.first,i++){
            cout<<v[i]<<" ";
            sum+=v[i];
            cout<<"Sum="<<sum<<endl;
        }


    }



    return 0;
}


/*#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,i;
    int soma;
    while(1){
    soma=0;
    scanf("%d %d",&x,&y);
    if(x<=0||y<=0)break;

    if(x>y){
    for(i=y;i<=x;i++){
     printf("%d ",i);
     soma=soma+i;

     }
    }
    if(y>x){
    for(i=x;i<=y;i++){
     soma=soma+i;
     printf("%d ",i);
    }
    }
    printf("Sum=%d\n",soma);

}
    return 0;
}
*/
