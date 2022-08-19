




#include <iostream>

using namespace std;

int main()
{
    int n,i;
    float tam,tam2;
    string galo;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>galo;
        tam = galo.size();
        tam2 = tam*0.01;
        cout.precision(2);
        cout.setf(ios::fixed);
        cout<<tam2<<endl;
    }

    return 0;
}

