#include <iostream>
#include <vector>

using namespace std;


/*bool cmp(aluno a, aluno b){
      if(a.media!=b.media)
        return a.media>b.media;
     else if(a.altura!=b.altura)
        return a.altura>b.altura;
     else
        return a.nome<b.nome;
}
*/

struct pais{
    string nome;
    int ouro;
    int prata;
    int bronze;
};

int main()
{
    int n,i;
    string maior;





    cin>>n;
    vector<pais>x(n);
    for(i=0;i<n;i++){
       cin>>x[i].nome;
       cin>>x[i].ouro;
       cin>>x[i].prata;
       cin>>x[i].bronze;
    }

    for(i=0;i<n;i++){
        if(x[i].ouro>maior){
            maior = x[i].ouro;


        }


    }
    return 0;
}
