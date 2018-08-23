#include <iostream>
#include "LDE.hpp"

int main() {

    LDE<int> l;
    for(int i=100;i>=0;i--)
        l.insere(i);

    //cout << l.busca(101)-> getValor() << endl;
    l.deleta(50);
    l.imprime();


    return 0;
}