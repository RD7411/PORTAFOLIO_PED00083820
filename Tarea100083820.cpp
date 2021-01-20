#include <iostream>

using namespace std;

int MCD (int a, int b){
    if (a == 0){
        return b;
    }
    return MCD (b% a, a);
}

int main (){

    int a;
    int b;

    cout << endl;
    cout << "Algoritmo de Euclides de forma recursiva" << endl << endl;
    cout << "Digite los numeros de los cuales desea obtener el MCD: "<< endl << endl;
    cout << "Digite el primer numero: "; 
    cin >> a;
    cout << "Digite el segundo numero: "; 
    cin >> b;
    cout << endl;
    cout << "El MCD es: " <<MCD(a,b);
    cout << endl;
    return 0;
}

// La diferencia entre el algoritmo de Euclides, en su forma iterativa y recursiva es que en la forma
// recursiva la función mcd se llama a sí misma una y otra vez hasta obtener el resultado, mientras que
// en la forma iterativa permite obtener el resultado utilizando la función de una sola vez sin tener que
// realizar la funcion en repetidas ocaciones.