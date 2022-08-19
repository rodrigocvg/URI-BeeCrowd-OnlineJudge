#include <iostream>

using namespace std;

int main()
{
    int n,i,j;
    float grau;
    cin>>n;
    string nome;
    float nota;
    for(i=0;i<n;i++){
        cin>>nome;
        cin>>grau;
        float menor=100.00,maior= -10.00,soma=0.00;
        for(j=0;j<7;j++){
            cin>>nota;
            if(nota<menor){
                menor=nota;

            }
            if(nota>maior){
                maior=nota;

            }
            soma+=nota;
        }
        soma-=(menor+maior);
        soma*=grau;
        cout.precision(2);
        cout.setf(ios::fixed);
        cout<<nome<<" "<<soma<<endl;

    }
    return 0;
}
