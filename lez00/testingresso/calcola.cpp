/* trova l'ultimo numero primo minore di un miliardo, ma vanno trovati tutti
*/

//funziona ma e' troppo lento (piu' di due minuti)

#include <iostream>

using namespace std;

#define M 1000000

int main(){

	int ultimo, numero, divisore, resto, flag;

	for(numero=0; numero < M; numero++){

		flag = 0;
		
		if(numero > 2){
		
			for(divisore = 2; divisore < numero; divisore++){
	
				resto = numero%divisore;
	
				if(resto == 0){
		
					flag = 1;
					break;
				};
			};
		
		};
	
		if(flag == 0){
			ultimo = numero;
			//cout << ultimo << endl;
		};
	};

	cout << "L'ultimo numero primo minore di un milione e': " << ultimo << endl;

} 
