#include <iostream>

using namespace std;

int main()
{
    int x;
    cin>>x;
    if(x==0){
        cout<<"E"<<endl;
    }
    if(x>=1&&x<=35){
        cout<<"D"<<endl;
    }
     if(x>=36&&x<=60){
        cout<<"C"<<endl;
    }
     if(x>=61&&x<=85){
        cout<<"B"<<endl;
    }
     if(x>=86&&x<=100){
        cout<<"A"<<endl;
    }

    return 0;
}
