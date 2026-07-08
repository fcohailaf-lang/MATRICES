//Matriz3.cpp
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
    
    int mayor = matriz[0][0];
    int fila = 0, columna = 0;
    
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++){
        	if (matriz[i][j] > mayor){
        		mayor = matriz[i][j];
        		fila = i;
        		columna = j;
			}
		}
	}
	
	cout << "\nEl mayor elemento es: " << mayor << endl;
    cout << "Se encuentra en la posición: (" << fila << ", " << columna << ")" << endl;

    return 0;
}
