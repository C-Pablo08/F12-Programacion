#include <iostream>
#include <cmath>
#include <string>



std::string numero_primo(int n) {
    if(n == 2){
        return "primo";
    }
    
    if(n % 2 == 0) {
        return "no primo";
    }

    int raiz = sqrt(n);

    int i = 3;

    while(i <= raiz){
        if(n % i == 0){
            return "no primo";
        }
        
        i = i + 2;
    }

    return "primo";
}

int main(){
    int n;
    std::cin >> n;

    std::string resultado = numero_primo(n);
    std::cout << resultado << std::endl;
    return 0;

}