#include <iostream>
#include <queue>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    queue<int> cartas;
    int n;
    while(1){

    cin>>n;
    if(n==0)break;
    for(int i=1;i<=n;i++){
            cartas.push(i);
    }
    cout<<"Discarded cards: ";
    while(cartas.size()>1){
          if(cartas.size() != 2){
            cout<<cartas.front()<<", ";
          }
                  else {
                        cout<<cartas.front();
                  }

                  cartas.pop();
                  cartas.push(cartas.front());
                  cartas.pop();

    }
    cout<<endl;
    cout<<"Remaining card: "<<cartas.front()<<endl;

    while(cartas.empty() == false){
        cartas.pop();
        }
    }


    return 0;
}
