#include <iostream>

using namespace std;

int main()
{
    pair <float,float> p;

    while(cin>>p.first>>p.second){
        float r = p.second/2;
        float h = p.first/(r*r*3.14);
        float a = 3.14*r*r;
        cout.precision(2);
        cout.setf(ios::fixed);
        cout<<"ALTURA = "<<h<<endl;
        cout.precision(2);
        cout.setf(ios::fixed);
        cout<<"AREA = "<<a<<endl;

    }


    return 0;
}
