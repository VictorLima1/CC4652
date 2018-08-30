#include <iostream>
#include "fila.hpp"

using namespace std;

int main(){
	Fila<int> f;
	f.enfileira(8);
	f.enfileira(6);
	f.enfileira(9);
	f.enfileira(3);
	f.enfileira(7);
	f.desenfileira();
	f.desenfileira();
	
	int temp;
	while(f.desenfileira(&temp)){
		cout << temp << endl;
	}
	return 0;
}
