#include <iostream>

using namespace std;

int main()
{
    int s,t,f,soma=0;

    cin>>s>>t>>f;
    soma=s+t+f;
    if(soma<0)
     soma=soma+24;
    if(soma>=24)
        soma=soma-24;



   cout<<soma<<endl;



    return 0;
}
