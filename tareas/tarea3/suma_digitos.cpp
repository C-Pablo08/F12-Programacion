#include <iostream>
#include <vector>
#include <algorithm>

int suma_digitos(int n) {
    if (n < 10) {
        return n;
    }

    return suma_digitos(n/10) + n % 10;
}

int main() {
    int número;

    if (std::cin >> número) {
        int resultado = suma_digitos(número);
        std::cout << resultado << std::endl;
    }
}