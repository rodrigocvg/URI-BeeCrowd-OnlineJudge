#include <iostream>

using namespace std;

int main()
{
    pair <int,pair<int,float>> p;
    cin>>p.first>>p.second.first>>p.second.second;
    cout<<"NUMBER = "<<p.first<<endl;
    cout.precision(2);
    cout.setf(ios::fixed);
    cout<<"SALARY = U$ "<<p.second.second*p.second.first<<endl;

    return 0;
}
