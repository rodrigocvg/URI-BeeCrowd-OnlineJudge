#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<float> V;
    float V2[100];
    int i;


    for(i=0;i<100;i++){
        cin>>V2[i];
        V.push_back(V2[i]);
        if(V2[i]<=10){
        cout.precision(1);
        cout<<fixed;
        cout<<"A["<<i<<"] = "<<V[i]<<endl;
        }


    }


    return 0;
}
