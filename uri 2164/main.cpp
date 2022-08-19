#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float fib;
    int n;
    cin>>n;
    fib=((pow(((1+sqrt(5))/2),n)) - (pow(((1-sqrt(5))/2),n)))/sqrt(5);
    cout.precision(1);
    cout.setf(ios::fixed);
    cout<<fib<<endl;

    return 0;
}
