#include <iostream>
#include <queue>


using namespace std;

int main()
{
    queue<char>di;
    string mnt;
    int n;
    int i,j;
    cin>>n;
    int a=0;
    int b=0;
    for(i=0;i<n;i++){
        cin>>mnt;
        int tam = mnt.size();
        for(j=0;j<tam;j++){
            if(mnt[j]=='<'){
                di.push(mnt[j]);
                a++;
            }
            if(mnt[j]=='>' and a>0){
                    di.push(mnt[j]);
                    a--;
                    b++;


            }

        }

        cout<<b<<endl;

        b=0;

    }

    return 0;

}
