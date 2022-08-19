#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> V;
    int tam = V.size();
    int i;
    for(i=0;i<10;i++){
        cin>>V[i];
        if(V[i]<=0)
            V[i]=1;

    }
    for(i=0;i<10;i++){
        cout<<"X["<<i<<"] = "<<V[i]<<endl;
    }

    return 0;
}
