#include <iostream>

using namespace std;

void selectiond(int a[], int N) {
	int i, j, min, t;
	int qtd=0;
	for (i = 1; i < N; i++) {
		min = i;
		for (j = i+1; j <= N; j++)
			if (a[j] > a[min]) min = j;
		t = a[min];
		a[min] = a[i];
		a[i] = t;
		qtd++;
	}
	cout<<qtd<<endl;
}

int main()
{
    int n,i;
    cin>>n;
    for(i=0;i<n;i++){
       int qtda;
       cin>>qtda;
       int nota[qtda];

        for(int j=0;j<qtda;j++){
            int nota[qtda];
            cin>>nota[j];
        }
        selectiond(nota,qtda);




    }


    return 0;
}
