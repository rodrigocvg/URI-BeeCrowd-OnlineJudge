#include <iostream>

using namespace std;
bool impar(int x){
    if(x%2!=0){
        return 1;
    }
    else{
        return 0;
    }
}



int main()
{   int i,tam,imp=0;
    string s;
    cin>>s;
    tam = s.size();
    for(i=0;i<tam;i++){
        if(s[i]=='1'){
            imp++;
        }
    }
    if(impar(imp)){
        cout<<s<<"1"<<endl;
    }
    else{
        cout<<s<<"0"<<endl;
    }

    return 0;
}
