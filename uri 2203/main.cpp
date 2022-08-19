#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int xf, yf, xi, yi, vi, r1,r2,X,Y;
    float d,r;
    while(cin>>xf>>yf>>xi>>yi>>vi>>r1>>r2){
        X = (xf-xi)*(xf-xi);
        Y = (yf-yi)*(yf-yi);
        d = sqrt(X+Y);
        d += vi*1.50;
        r = r1+r2;
        if(d> r) cout<<"N"<<endl;
        else cout<<"Y"<<endl;
    }
    return 0;
}
