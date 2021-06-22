#include <iostream>
#include <cstdlib>
#include <string.h>

using namespace std;

#define MAX 5

#include "Lista.cpp"

int main() {

    Lista minhaLista;
    int y;

    minhaLista.inserir(0, 4);
    cout << minhaLista.listar() << endl;

    minhaLista.inserir(1, 2);
    cout << minhaLista.listar() << endl;

    minhaLista.inserir(2, 5);
    cout << minhaLista.listar() << endl;

    minhaLista.inserir(3, 14);
    cout << minhaLista.listar() << endl;

    minhaLista.inserir(4, 1);
    cout << minhaLista.listar() << endl;

    minhaLista.inserir(5, 0);
    cout << minhaLista.listar() << endl;

    minhaLista.inserir(6, 9);
    cout << minhaLista.listar() << endl;

    minhaLista.substituir(1, 7);
    cout << minhaLista.listar() << endl;

    minhaLista.retornar(3, y);
    cout << minhaLista.listar() << endl;

    minhaLista.remover(0, y);
    cout << minhaLista.listar() << endl;

    minhaLista.remover(1, y);
    cout << minhaLista.listar() << endl;

    minhaLista.remover(2, y);
    cout << minhaLista.listar() << endl;

    minhaLista.inserir(2, 4);
    cout << minhaLista.listar() << endl;

    


    
    /*if (minhaLista.inserir(2, 3))        
        minhaLista.listar();
    else
        cout << "Não inseriu!\n";

    if (minhaLista.inserir(-1, 3))        
        minhaLista.listar();
    else
        cout << "Não inseriu!\n";

    if (minhaLista.inserir(1, 3))        
        minhaLista.listar();
    else
        cout << "Não inseriu!\n";

    if (minhaLista.inserir(0, 3))        
        minhaLista.listar();
    else
        cout << "Não inseriu!\n";

    cout << "\n";*/
}