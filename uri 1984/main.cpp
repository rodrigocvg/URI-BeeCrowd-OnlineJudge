#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char vet[10];

    int aux,i,j;
    cin>>vet;
    int tam = strlen(vet);
    int tam2 = tam/2;
    for(i=0,j=tam-1;i<tam2;i++,j--){
            aux=vet[i];
            vet[i]=vet[j];
            vet[j]=aux;

    }
    cout<<vet<<endl;
    return 0;
}
