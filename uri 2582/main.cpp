#include <iostream>

using namespace std;

int main()
{
    int n,i,x,y,soma=0;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>x>>y;
        if(x!=0 and y!=0){
            soma=x+y;
            if(soma==0){
                cout<<"PROXYCITY"<<endl;
            }
            if(soma==1){
                cout<<"P.Y.N.G."<<endl;
            }
            if(soma==2){
                cout<<"DNSUEY!"<<endl;
            }
            if(soma==3){
                cout<<"SERVERS"<<endl;
            }
            if(soma==4){
                cout<<"HOST!"<<endl;
            }
            if(soma==5){
                cout<<"CRIPTONIZE"<<endl;
            }
            if(soma==6){
                cout<<"OFFLINE DAY"<<endl;
            }
            if(soma==7){
                cout<<"SALT"<<endl;
            }
            if(soma==8){
                cout<<"ANSWER!"<<endl;
            }
            if(soma==9){
                cout<<"RAR?"<<endl;
            }
            if(soma==10){
                cout<<" WIFI ANTENNAS"<<endl;
            }
        }
        else if(x==0 && y==0){
            cout<<"PROXYCITY"<<endl;
        }
        else if(x!=0 and y==0){
            if(x==1){
                cout<<"P.Y.N.G."<<endl;
            }
            if(x==2){
                cout<<"DNSUEY!"<<endl;
            }
            if(x==3){
                cout<<"SERVERS"<<endl;
            }
            if(x==4){
                cout<<"HOST!"<<endl;
            }
            if(x==5){
                cout<<"CRIPTONIZE"<<endl;
            }
            if(x==6){
                cout<<"OFFLINE DAY"<<endl;
            }
            if(x==7){
                cout<<"SALT"<<endl;
            }
            if(x==8){
                cout<<"ANSWER!"<<endl;
            }
            if(x==9){
                cout<<"RAR?"<<endl;
            }
            if(x==10){
                cout<<" WIFI ANTENNAS"<<endl;
            }
        }

        else if(x==0 and y!=0){
            if(y==1){
                cout<<"P.Y.N.G."<<endl;
            }
            if(y==2){
                cout<<"DNSUEY!"<<endl;
            }
            if(y==3){
                cout<<"SERVERS"<<endl;
            }
            if(y==4){
                cout<<"HOST!"<<endl;
            }
            if(y==5){
                cout<<"CRIPTONIZE"<<endl;
            }
            if(y==6){
                cout<<"OFFLINE DAY"<<endl;
            }
            if(y==7){
                cout<<"SALT"<<endl;
            }
            if(y==8){
                cout<<"ANSWER!"<<endl;
            }
            if(y==9){
                cout<<"RAR?"<<endl;
            }
            if(y==10){
                cout<<" WIFI ANTENNAS"<<endl;
            }
        }
    }
    return 0;
}
