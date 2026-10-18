
#include <iostream>
using namespace std;

int somarAteN(int n) {
    int soma = 0;

    for (int i = 1; i <= n; i++) {
        soma = soma + i;
    }

    return soma;
}

int main() {
    int resultado = somarAteN(4);

    cout << resultado << endl;

    return 0;
}
