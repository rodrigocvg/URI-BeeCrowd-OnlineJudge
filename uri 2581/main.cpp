#include <iostream>


using namespace std;

int main()
{
    string imtorg = "I am Toorg!";
    string x;
    int n,i;
    cin>>n;
    for(i=0;i<=n;i++){
        getline(cin,x);
        if(i!=0){
        cout<<imtorg<<endl;
        }
    }
    return 0;
}
