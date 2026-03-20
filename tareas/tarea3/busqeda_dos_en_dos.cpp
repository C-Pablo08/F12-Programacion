#include <iostream>
#include <vector>
#include <algorithm>

int busqueda_dos_en_dos(const std::vector<int>& lista, int n, int objetivo) {

    if (n == 0) return -1;

    int i = 0;

    while(i < n && lista[i] < objetivo){
        i = i + 2;
    }

    i = i - 1;

    int inicio = std::max(0, i);
    int fin = std::min(n - 1, i + 1);

    for (int j = inicio; j <= fin; j++)
    {
        if (lista[j] == objetivo)
        {
            return j;
        }
    }
    return -1;
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

