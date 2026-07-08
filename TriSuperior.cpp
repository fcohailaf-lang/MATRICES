//TriSuperior.cpp
#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Ingrese el tamaño de la matriz: ";
    cin >> n;

    int matriz[100][100];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j >= i)
                matriz[i][j] = 1;
            else
                matriz[i][j] = 0;
        }
    }

    cout << "\nMatriz triangular superior:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
