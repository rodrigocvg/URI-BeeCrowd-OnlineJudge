#include <iostream>

using namespace std;


int fbeto(int a,int b){
    int z = (2*(a*a)) + ((5*b)*(5*b));
    return z;

}
int fcarlos(int c,int d){
    int y = -100*c + (d*d*d);
    return y;
}
int frafael(int e,int f){
     int r=((3*e)*(3*e)) + (f*f);
     return r;
}

int main()
{
    int n,x,y,i;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>x>>y;

        frafael(x,y);
        fcarlos(x,y);
        fbeto(x,y);



        if(frafael(x,y)>=fbeto(x,y) and frafael(x,y)>=fcarlos(x,y)){
            cout<<"Rafael ganhou"<<endl;
        }
        else if(fbeto(x,y)>=frafael(x,y) and fbeto(x,y)>=fcarlos(x,y)){
            cout<<"Beto ganhou"<<endl;
        }
        else{
            cout<<"Carlos ganhou"<<endl;
        }

    }

    return 0;
}
