#include <iostream>

using namespace std;


void bubbled(int a[], int N) {
	int i, j, t;
	for (i = N; i >= 1; i--)
		for (j = 2; j <= i; j++)
			if (a[j-1] < a[j]) {
				t = a[j-1];
				a[j-1] = a[j];
				a[j] = t;
		}
}
int main()
{
     int n,q,i,j,x;
     while(cin>>n>>q){
        int nota[n];
        int pos[q];
        for(i=1;i<=n;i++){
            cin>>nota[i];
        }
        bubbled(nota,n);
        for(j=1;j<=q;j++){
            cin>>pos[j];
            cout<<nota[pos[j]]<<endl;
        }
     }

    return 0;
}
