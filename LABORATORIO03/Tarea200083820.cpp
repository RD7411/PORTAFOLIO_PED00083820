#include <iostream>
#include <conio.h>

using namespace std;

struct Nodo{
    
    int carnet;
    int nivel ;
    int horas;
    string nombre;
    Nodo *siguiente;
};

int main(){

    Nodo *pila = NULL;

    int c;
    int ni ;
    int h;
    string n;
    char res;

    do{
        cout << "Digite el nombre del estudiante: ";
        cin >> n;
        agregarPila (pila, n);

        cout << "Digite el numero de carnet del estudiante: ";
        cin >> c;
        agregarPila (pila, c);

        cout << "Digite el nivel de la carrera del estudiante: ";
        cin >> ni;
        agregarPila (pila, ni);

        cout << "Digite el numero de horas sociales realizadas por el estudiante: ";
        cin >> n;
        agregarPila (pila, n);

        cout <<"\n¿Desea agregar otro estudiante a la pila? Digite S (si) o N (no): ";
        cin >> res;
    }while((res == 'S') || (res == 's'));

    cout <<"\nMostrando los elementos de la pila: ";
    while(pila != NULL){
        sacarPila(pila, n, n2);
        if (pila != NULL){
            cout << (n, n2)" , ";
        }
        else{
            cout << (n, n2) << ".";
        }
        
    }

    getch ();
    return 0;

}

void agregarPila(Nodo *&, int, string);

void agregarPila(Nodo *&pila, int n, string n2){

    Nodo *nuevo_nodo = new Nodo();
    nuevo_nodo ->carnet = n;
    nuevo_nodo ->nivel = n;
    nuevo_nodo ->horas = n;
    nuevo_nodo ->nombre = n2;
    nuevo_nodo ->siguiente = pila;
    pila = nuevo_nodo;

    cout << "\tEl elemento" << (n, n2) << "ha sido agregado a pila correctamente";

}

void sacarPila(Nodo *&pila, int &n, string &n2){
    Nodo *aux = pila;
    n = aux ->carnet;
    n = aux ->nivel;
    n = aux ->horas;
    n = aux ->nombre;
    pila = aux -> siguiente;
    delete aux;
}
