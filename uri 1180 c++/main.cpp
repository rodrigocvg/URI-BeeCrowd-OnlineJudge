#include <iostream>
#include <vector>


using namespace std;

int main()
{
    vector<int> v;
    int x,i,menor=0,v2[100],pos;

    cin>>x;
    for(i=0;i<x;i++){
        cin>>v2[i];
        v.push_back(v2[i]);
    }
    for(i=0;i<x;i++){
        if(v[i]<menor){
            menor=v[i];
            pos=i;
        }
    }
    cout<<"Menor valor: "<<menor<<endl;
    cout<<"Posicao: "<<pos<<endl;



    return 0;
}
