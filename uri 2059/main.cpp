#include <iostream>

using namespace std;

int main()
{
    int p, j1, j2, r, a;
    int soma=0;

    cin>>p>>j1>>j2>>r>>a;
    soma=j1+j2;
    if(p==1){
        if(soma%2==0){
            if(r==0 && a==0){
                cout<<"Jogador 1 ganha!"<<endl;
            }
            else if(r==1 && a==1){
                cout<<"Jogador 2 ganha!"<<endl;
            }
            else if(r==1 && a==0){
                cout<<"Jogador 1 ganha!"<<endl;
            }
            else if(r==0 && a ==1){
                cout<<"Jogador 1 ganha!"<<endl;
            }
        }

        else if(soma%2!=0){
            if(r==0 && a==0){
                cout<<"Jogador 2 ganha!"<<endl;
            }
            else if(r==1 && a==1){
                cout<<"Jogador 2 ganha!"<<endl;
            }
            else if(r==1 && a==0){
                cout<<"Jogador 1 ganha!"<<endl;
            }
            else if(r==0 && a ==1){
                cout<<"Jogador 1 ganha!"<<endl;
            }
        }
    }

    else if(p==0){
        if(soma%2!=0){
            if(r==0 && a==0){
                cout<<"Jogador 1 ganha!"<<endl;
            }
            else if(r==1 && a==1){
                cout<<"Jogador 2 ganha!"<<endl;
            }
            else if(r==1 && a==0){
                cout<<"Jogador 1 ganha!"<<endl;
            }
            else if(r==0 && a ==1){
                cout<<"Jogador 1 ganha!"<<endl;
            }
        }
        else if(soma%2==0){
            if(r==0 && a==0){
                cout<<"Jogador 2 ganha!"<<endl;
            }
            else if(r==1 && a==1){
                cout<<"Jogador 2 ganha!"<<endl;
            }
            else if(r==1 && a==0){
                cout<<"Jogador 1 ganha!"<<endl;
            }
            else if(r==0 && a ==1){
                cout<<"Jogador 1 ganha!"<<endl;
            }
        }

    }



    return 0;
}
