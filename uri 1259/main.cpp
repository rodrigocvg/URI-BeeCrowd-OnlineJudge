#include <iostream>
#include <vector>

using namespace std;

void selection (int v[],int n){
    int i,j,menor,troca;
    for(i=0;i<n-1;i++){
        menor = i;
        for(j=i+1;j<n;j++){
         if(v[j]<v[menor])
                menor = j;
        }
        if(i!= menor){
                troca = v[i];
                v[i] = v[menor];
                v[menor] = troca;
        }


    }

}

int main()
{
    int i,n;
    cin>>n;
    int v[n];
    vector<int> x;
    for(i=0;i<n;i++){
        cin>>v[i];
        v.push_back(v[i]);
    }
    for(i=0;i<n;i++){
        if(v[i]%2==0){

        }
    }




    return 0;
}
