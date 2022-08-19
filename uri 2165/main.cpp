#include <iostream>

using namespace std;

int tamanho(string a){
        int tam;
        tam = a.size();
        return tam;

}

int main()
{
    string tt;
    getline(cin,tt);
    int tama = tamanho(tt);
    if(tama>140){
        cout<<"MUTE"<<endl;
    }
    else if(tama<=140){
        cout<<"TWEET"<<endl;
    }

    return 0;
}
