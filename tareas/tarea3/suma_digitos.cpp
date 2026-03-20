#include <iostream>
#include <vector>
#include <algorithm>

int suma_digitos(int n) {
    // Caso base: El número sólo tiene un dígito.
    if (n < 10) {
        return n;
    }

    // Llamada recursiva: Separa al último dígito y trabaja con el resto. Al retornar suma cada dígito.
    return suma_digitos(n/10) + n % 10;
}

int main() {
    int número;

    if (std::cin >> número) {
        int resultado = suma_digitos(número);
        std::cout << resultado << std::endl;
    }
}