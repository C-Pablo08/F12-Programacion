#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>


int contar_vocales(std::string oracion) {
    int contador = 0;
    
    for(int i = 0; i < oracion.length(); i++){
        char letra = oracion[i];

        char c = tolower(letra);

        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
            contador++;
        }

    }

    return contador;
}

int main(){
    std::string oracion;
    std::getline(std::cin, oracion);

    int resultado = contar_vocales(oracion);
    std::cout << resultado << std::endl;

    return 0;

}