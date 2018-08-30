#ifndef FILA_HPP
#define FILA_HPP

#define MAX 5

template <typename T>
class Fila{
	private:
		T v[MAX+1];
		int i;
		int f;
		int n;
	public:
		Fila(): i(0), f(0), n(MAX+1){
		
		}
		
		bool enfileira(T valor){
			if(((f+1)%n) == i)
				return false;
				
			v[f] = valor;
			f = (f+1)%n;
			return true;
		}
		
		bool desenfileira(T *desenfileirado=NULL){
			if (i==f)
				return false;
				
			//T temp = v[i]; // Da pra deixar assim mas aí precisa trocar no if ali por "... = temp;"
			if(desenfileirado)
				*desenfileirado = v[i];
			i = (i+1)%n;
			return true;
		}
		
};

#endif
			
		
