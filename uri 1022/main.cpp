#include <iostream>

using namespace std;

int mdc(int x, int y) {
    if (x < y) {
        int troca = y;
        y = x;
        x = troca;
    }
    if (x % y == 0)
        return y;
    return mdc(y, x % y);
}

int main()
{
    int n,i,oper1,oper2;
    char op,barra1,barra2;
    int n1,d1,n2,d2;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>n1>>barra1>>d1>>op>>n2>>barra2>>d2;
        if(op=='+'){
            oper1 = ((n1*d2) + (n2*d1));
            oper2 = (d1*d2);
        }
        else if(op == '-'){
            oper1 = ((n1*d2) - (n2*d1));
            oper2 = (d1*d2);
        }
        else if(op == '*'){
            oper1 = (n1*n2);
            oper2 = (d1*d2);
        }
        else if(op == '/'){
            oper1 =  (n1*d2);
            oper2 = (n2*d1);
        }
        cout<<oper1<<"/"<<oper2<<" = ";
        int menor = mdc(oper1,oper2);
        if(oper1<0){
                cout<<"-"<<oper1/menor<<"/"<<abs(oper2/menor)<<endl;

        }
        else{

        cout<<oper1/menor<<"/"<<abs(oper2/menor)<<endl;
        }





    }
    return 0;
}
