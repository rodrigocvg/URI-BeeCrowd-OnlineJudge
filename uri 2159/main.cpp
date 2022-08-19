#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n;
    float mini,maxi;
    cin>>n;
    mini= n/log(n);
    maxi = (1.25506*n)/log(n);
    cout.precision(1);
    cout.setf(ios::fixed);
    cout<<mini<<" "<<maxi<<endl;
    return 0;
}
