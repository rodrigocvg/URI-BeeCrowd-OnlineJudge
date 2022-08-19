#include <iostream>
#include <string.h>


using namespace std;

int main()
{
    int abas;
    int qtdop,i;
    char op[10];


    cin>>abas>>qtdop;
    for(i=0;i<qtdop;i++){
        cin>>op;
        if(strcmp(op,"fechou")==0){
            abas++;
        }
        else if(strcmp(op,"clicou")==0){
            abas--;
        }
    }
    cout<<abas<<endl;

    return 0;
}
