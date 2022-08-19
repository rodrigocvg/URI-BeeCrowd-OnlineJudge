#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> V;
    int V2[10];
    int i;
    int x;
    cin>>x;
    for(i=0;i<10;i++){
        V2[i]=x;
        V.push_back(V2[i]);
        x = x*2;

    }
    for(i=0;i<10;i++){
           cout<<"N["<<i<<"] = "<<V[i]<<endl;
    }

    return 0;
}
