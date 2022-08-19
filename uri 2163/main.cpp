#include <iostream>

using namespace std;

int main()
{
    int l,c,i,j,posi,posj,a=0;
    cin>>l>>c;
    int vet[l][c];


    for(i=0;i<l;i++){
        for(j=0;j<c;j++){
            cin>>vet[i][j];
        }
    }
        posi=0;
        posj=0;
        for(i=0;i<l;i++){
        for(j=0;j<c;j++){
            if(vet[i][j]==42){
                if(vet[i-1][j]==7 && vet[i-1][j-1]==7 && vet[i-1][j+1]==7 && vet[i][j-1]==7 && vet[i-1][j+1]== 7 && vet[i+1][j]==7 && vet[i+1][j-1]==7 && vet[i+1][j+1]==7){
                posi=i;
                posj=j;
                    }

                }
            }
        }

        if(posi==0 and posj==0){
        cout<<posi<<" "<<posj<<endl;
        }
        else{
            cout<<posi+1<<" "<<posj+1<<endl;
        }




    return 0;
}
