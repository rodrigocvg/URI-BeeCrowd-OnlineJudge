#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    pair<double,double> x;
    pair<double,double> y;
    cin>>x.first>>y.first;
    cin>>x.second>>y.second;
    double d = sqrt(pow((x.second - x.first),2)+ pow((y.second-y.first),2));
    cout.precision(4);
    cout.setf(ios::fixed);
    cout<<d<<endl;

    return 0;
}
