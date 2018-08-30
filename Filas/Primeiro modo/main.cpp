#include <iostream>
#include "fila.hpp"

using namespace std;

int main(){
	Fila<int> f;
	f.enfileira(8);
	f.enfileira(6);
	f.enfileira(9);
	bool erro;
	int x = f.desenfileira(&erro);
	cout << "testando pra ver se chega aqui" << endl;
	return 0;
}
