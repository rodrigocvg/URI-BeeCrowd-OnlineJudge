#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x,n,i;
    char T[50];
    cin>>x;

    for(i=0;i<x;i++){
        cin>>T;
        cin>>n;
        if(strcmp(T,"Thor")==0){
            cout<<"Y"<<endl;
        }
        else{
            cout<<"N"<<endl;
        }
    }


    return 0;
}
