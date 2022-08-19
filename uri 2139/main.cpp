#include <iostream>

using namespace std;

int main()
{
    int mes,dia,i,v[12]={31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 25};
    int diasr;

    while(cin>>mes>>dia){
        if(mes==12 && dia==24){
            cout<<"E vespera de natal!"<<endl;
        }
        else if(mes==12 && dia==25){
            cout<<"E natal!"<<endl;
        }
        else if(mes==12 && dia>25){
            cout<<"Ja passou!"<<endl;
        }
        else{
            diasr=v[mes-1]-dia;
            for(i=mes;i<12;i++){
                diasr+=v[i];

            }
            cout<<"Faltam "<<diasr<<" dias para o natal!"<<endl;
        }
    }
    return 0;
}
