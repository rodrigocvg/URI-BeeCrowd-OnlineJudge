#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    string uni;
    int n,i,jogo,qtdcs=0;
    string uni2;

    while(cin>>n>>uni){
        for(i=0;i<n;i++){
            cin>>uni2;
            cin>>jogo;
            int compare = strcmp(uni,uni2);
            if(compare==0) && jogo==0){
                qtdcs++;
            }
        }
        cout<<qtdcs<<endl;
    }

    return 0;
}
