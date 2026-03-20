#include <iostream>
#include <vector>
#include <algorithm>

int busqueda_dos_en_dos(const std::vector<int>& lista, int n, int objetivo) {
    // Si la lista está vacía, retorna -1.
    if (n == 0) return -1;

    int i = 0;

    // Recorre la lista de dos en dos hasta que el número de la lista sea mayor o igual que el objetivo, o hasta terminar la lista.
    while(i < n && lista[i] < objetivo){
        i = i + 2;
    }

    // Retrocede un paso.
    i = i - 1;

    // Delimita al rango entre i o i+1. 0 y n - 1 para que en casos especiales siga funcionando.
    int inicio = std::max(0, i);
    int fin = std::min(i + 1, n - 1);

    // Revisa si el objetivo está en el rango
    for (int j = inicio; j <= fin; j++)
    {
        if (lista[j] == objetivo)
        {
            return j; // El objetivo está dentro del rango
        }
    }
    return -1;   // El objetivo no está dentro del rango
}

int main() {
    int n, objetivo;

    if(!(std::cin >> n)) return 0;

 
    std::vector<int> lista(n);
    for (int i = 0; i < n; i++) {
        std::cin >> lista[i];
    }

    if(!(std::cin >> objetivo)) return 0;

    int resultado = busqueda_dos_en_dos(lista, n, objetivo);
    std::cout <<resultado << std::endl;
    return 0;
}

