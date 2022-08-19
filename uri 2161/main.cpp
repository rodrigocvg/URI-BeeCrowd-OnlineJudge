#include <iostream>
#include <iomanip>

double raiz(int n) {

    if (n == 0) return 0;
    return 1 / (6 + raiz(n - 1));

}

int main() {

    int n;

    std::cin>>n;
    std::cout<<std::fixed<<std::setprecision(10)<<3+raiz(n)<<std::endl;

    return 0;
}
