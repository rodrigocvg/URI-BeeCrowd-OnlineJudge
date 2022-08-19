#include <iostream>

using namespace std;

int main()
{
    int i,n,s,b,a,s1,b1,a1;
    float totalS=0,totalB=0,totalA=0,totalS1=0,totalB1=0,totalA1=0;
    float porcs=0,porcb=0,porcA=0;
    string nome;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>nome;
        cin>>s>>b>>a;
        cin>>s1>>b1>>a1;
        totalS+=s;
        totalB+=b;
        totalA+=a;
        totalS1+=s1;
        totalB1+=b1;
        totalA1+=a1;
    }
    porcs+= (totalS1/totalS)*100;
    porcb+= (totalB1/totalB)*100;
    porcA+= (totalA1/totalA)*100;

    cout.precision(2);
    cout.setf(ios::fixed);
    cout<<"Pontos de Saque: "<<porcs<<" %."<<endl;
    cout<<"Pontos de Bloqueio: "<<porcb<<" %."<<endl;
    cout<<"Pontos de Ataque: "<<porcA<<" %."<<endl;

    return 0;
}
