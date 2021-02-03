#include <iostream>

using namespace std;

struct nodo{
    int dato;
    nodo *ant;
    nodo *sig;

};

class ListaDoble{
    private:

        nodo *pInicio;
        nodo *t;
    
    public:

        ListaDoble();
        ~ListaDoble();
        void insertarEnLista(void);
        void mostrarLista(void);
        int tamano();
        void eliminar (int posicion);
};

ListaDoble::ListaDoble(void)
{
    pInicio = NULL;
}

ListaDoble::~ListaDoble(void)
{
    nodo *p;

    while(pInicio){
        p = pInicio;
        pInicio = pInicio->sig;
        delete p;
    }
}

void ListaDoble::insertarEnLista(void)
{
    int dato;

    cout << "Digite un entero o Ctrl-Z para terminar: ";
    cin >> dato;
}

void ListaDoble::mostrarLista(void)
{
    nodo *p;
    cout << "Los elementos de la lista son:" << endl;
    p = pInicio;
    while(p->sig){
        cout << p->dato << endl;
        p = p->sig;
    }
    while(p->ant){
        cout << p->dato << endl;
        p = p->ant;
    }
    cout << "Fin de mostrar lista" << endl;
}

void ListaDoble::eliminar(int posicion)
{
    nodo *aux;

    if(posicion == 1)
    {
        aux = pInicio;
        pInicio = pInicio ->sig;
        delete(aux);

    }

    else if (posicion == tamano())
    {
        aux = t;
         t = t ->ant;
         delete (aux);
    }

    else if (posicion > 1 || posicion < tamano())
    {
        aux = pInicio;
        for (int i = 1; 1 < posicion; i++)
        {
            aux = aux ->sig;
        }

        aux -> ant -> sig = aux -> sig;
        t -> ant = aux -> ant;
        delete (aux);
    }
}

int main(void)
{
    ListaDoble objListaDoble;

    cout << endl;
    cout << "Tarea #3: eliminar nodo buscandolo" << endl << endl;

    cout << "Insercion de datos en la lista:" << endl;
    objListaDoble.insertarEnLista();

    objListaDoble.mostrarLista();

    cout << "Digite el dato de referencia para eliminar el nodo anterior a este: " << endl;
    objListaDoble.eliminar();

    cin.clear();
    
    cout << endl;
    return 0;
    
}
