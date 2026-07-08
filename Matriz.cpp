//Matriz.cpp
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese la dimensión de la matriz: ";
    cin >> n;

    int matriz[100][100];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << "matriz[" << i << "][" << j << "] = ";
            cin >> matriz[i][j];
        }
    }

    cout << "\nMatriz:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
