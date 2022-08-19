#include <iostream>
#include <queue>
#include <vector>
#include <string.h>

using namespace std;

int main()
{
    queue<char>fila;
    string x;
    int i;
    while(cin>>x){
        int tam = x.size();
        for(i=0;i<tam;i++){
            if(x[i]=='('){
                fila.push(x[i]);
               }
            if(x[i]==')'){
                    if(!fila.empty()){
                        fila.pop();
                    }
                    else{
                    fila.push(x[i]);
                    }
            }

        }
            if(fila.empty()){
            cout<<"correct"<<endl;
           }
           else{
            cout<<"incorrect"<<endl;
           }
           while(fila.empty() == false){
        fila.pop();
        }



    }




    return 0;
}



