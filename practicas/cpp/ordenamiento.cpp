#include <iostream>
#include <string>
#include <vector>
using namespace std;

void burbuja(vector<int>& arr){
    for (int i = 0; i < arr.size(); i++){
        bool intercambio = false;
        for (int j = 0; j < arr.size() - 1; j++){
            if (arr[j] > arr[j + 1]){
                swap(arr[j], arr[j + 1]);
                intercambio = true;
            }
        }
        if (!intercambio){ 
            break;
        }
    }
}

void seleccion(vector<int>& arr){
    for (int i = 0; i < arr.size(); i++){
        int min_idx = i;
        for (int j = i + 1; j < arr.size(); j++){
            if (arr[j] < arr[min_idx]){
                min_idx = j;
            }
        }
        if (min_idx != i){ 
            swap(arr[i], arr[min_idx]);
        }
    }
}

vector<int> mezclar(const vector<int>& izq, const vector<int>& der){
    vector<int> resultado;
    int i = 0, j = 0;
    while (i < izq.size() && j < der.size()){
        if (izq[i] < der[j]){
            resultado.push_back(izq[i]);
            i++;
        } else {
            resultado.push_back(der[j]);
            j++;
        }
    }
    while (i < izq.size()){
        resultado.push_back(izq[i]);
        i++;
    }
    while (j < der.size()){
        resultado.push_back(der[j]);
        j++;
    }
    return resultado;
}

vector<int> mergesort(const vector<int>& arr){
    if (arr.size() <= 1) {
        return arr;
    }
    int mid = arr.size() / 2;
    vector<int> izq(arr.begin(), arr.begin() + mid);
    vector<int> der(arr.begin() + mid, arr.end());
    izq = mergesort(izq);
    der = mergesort(der);
    return mezclar(izq, der);
}

int main(){
    std::string algoritmo;
    int n;
    cin >> algoritmo >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    if (algoritmo == "burbuja"){
        burbuja(arr);
    } else if (algoritmo == "seleccion"){
        seleccion(arr);
    } else if (algoritmo == "mergesort"){
        arr = mergesort(arr);
    }
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}