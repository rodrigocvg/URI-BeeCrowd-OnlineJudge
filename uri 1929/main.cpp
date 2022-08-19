#include <iostream>

using namespace std;

int main()
{
    int v1,v2,v3,v4;
    cin>>v1>>v2>>v3>>v4;
    if(v2>v1+20 or v2>v3+20){
        cout<<"N"<<endl;
    }
    else if(v3>v2+20 or v3>v4+20)
        cout<<"N"<<endl;
    else
        cout<<"S"<<endl;
    return 0;
}
