#include <iostream>
#include <cmath>
#include <string>


std::string numero_primo(int n) {
    // Caso especial: 2 es primo.
    if(n == 2){
        return "primo";
    }
    
    // Los números pares no son primos.
    if(n % 2 == 0) {
        return "no primo";
    }

    int raiz = sqrt(n);

    int i = 3;

    // Se divide a n con números menores o iguales a su raíz, ya que es el valor máximo que pueden alcanzar sus divisores.
    while(i <= raiz){
        if(n % i == 0){

            // Si un número divide a n exactamente y es menor que su raíz, entonces no es primo.
            return "no primo";
        }

        // Se saltan los números pares y sólo se prueban divisores impares.
        i = i + 2;
    }
    return "primo"; // Si ningún número lo divide exactamente, entonces es primo.
}

int main(){
    int n;
    std::cin >> n;

    std::string resultado = numero_primo(n);
    std::cout << resultado << std::endl;
    return 0;

}