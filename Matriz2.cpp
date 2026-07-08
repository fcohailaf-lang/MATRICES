//Matriz2.cpp
#include <iostream>
using namespace std;

int main(){
    int m, n;

    cout << "Ingrese el número de filas: ";
    cin >> m;
    cout << "Ingrese el número de columnas: ";
    cin >> n;

    int matriz[100][100];
    int suma = 0;

    cout << "Ingrese los elementos de la matriz:\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
        	cout << "matriz[" << i << "][" << j << "] = ";
            cin >> matriz[i][j];
        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            suma = suma + matriz[i][j];
        }
    }

    cout << "La suma de los elementos es: " << suma << endl;

    return 0;
}
