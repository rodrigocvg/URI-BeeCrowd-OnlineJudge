#include <iostream>

using namespace std;

int main()
{
    int n,c1,c2,c3,c4,c5;
    int c;
    cin>>n;
    cin>>c1>>c2>>c3>>c4>>c5;
    if(c1==n)c++;
    if(c2==n)c++;
    if(c3==n)c++;
    if(c4==n)c++;
    if(c5==n)c++;

    cout<<c<<endl;

    return 0;
}
