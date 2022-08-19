#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int l1,l2,l3;
    cin>>l1>>l2>>l3;
     if((l1+l2)<=l3 or (l1+l3)<=l2 or (l3+l2)<=l1){
        cout<<"Invalido"<<endl;
    }
    else{
            cout<<"Valido-";
            if(l1!=l2 and l2!=l3 and l1!=l3){
                cout<<"Escaleno"<<endl;
                cout<<"Retangulo: ";
                if(pow(l1,2) == pow(l2,2) + pow(l3,2) or pow(l2,2) == pow(l1,2) + pow(l3,2) or pow(l3,2) == pow(l1,2) + pow(l2,2)){
                    cout<<"S"<<endl;
                }
                else{
                    cout<<"N"<<endl;
                }
            }
            //Isósceles
             if((l1==l2 and l1!=l3) or (l1==l3 and l1!=l2) or (l3==l2 and l2!=l1)){
                cout<<"Isoceles"<<endl;
                cout<<"Retangulo: ";
                if((l1^2)==(l2^2)+(l3^2) or (l2^2)==(l1^2)+(l3^2) or (l3^2)==(l1^2)+(l2^2)){
                    cout<<"S"<<endl;
                }
                else{
                    cout<<"N"<<endl;
                }
            }
            //Equilatero
            if(l1==l2 and l2==l3){
                cout<<"Equilatero"<<endl;
                cout<<"Retangulo: ";
                cout<<"N"<<endl;

            }
    }

    return 0;
}
