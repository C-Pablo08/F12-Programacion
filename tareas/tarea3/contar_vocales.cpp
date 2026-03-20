#include <iostream>
#include <string>
#include <cctype>


int contar_vocales(std::string oracion) {
    int contador = 0;
    
    // Se utiliza un ciclo for para contar las vocales. En cada iteración se verifica una letra.
    for(int i = 0; i < oracion.length(); i++){

        // Se toma un caracter de la oración.
        char letra = oracion[i];

        // El caracter se convierte en una minúscula para facilitar la comparación.
        char c = tolower(letra);

        // Si el caracter es una vocal, el contador aumenta.
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
            contador++;
        }

    }

    return contador; // Retorna la cantidad de vocales
}

int main(){
    std::string oracion;
    std::getline(std::cin, oracion);

    int resultado = contar_vocales(oracion);
    std::cout << resultado << std::endl;

    return 0;

}