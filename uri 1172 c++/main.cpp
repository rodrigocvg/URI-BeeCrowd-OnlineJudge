#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> V;
    int i;
    int x;
    for(i=0;i<10;i++){
        cin>>x;
        if(x<=0){
            V.push_back(1);
        }
        else{
        V.push_back(x);
        }
    }
    for( i=0;i<10;i++){
        cout<<"X["<<i<<"] = "<<V[i]<<endl;
    }
    return 0;
}
