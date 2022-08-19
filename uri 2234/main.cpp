#include <iostream>

using namespace std;
float divide(float x,float y){
    cout.precision(2);
    cout.setf(ios::fixed);
    cout<<x/y<<endl;

}
int main()
{
    float x, y;
    cin>>x>>y;
    divide(x,y);
    return 0;
}
