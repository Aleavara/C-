#include<iostream>
using namespace std;
// Definire un numero pari o dispari senza l'uso del modulo
int main() {
	// DICHIARAZIONE 
	int n; 
	// RICHIESTA IN INPUT DEL NUMERO DA ESAMINARE
	cout<<"Inserisci numero: \n ";
	cin>>n;
	// ESECUZIONE
	while(n>1)
	{
		n = n-2;
	}
	// STAMPA A VIDEO DEL RISULTATO ESAMINATO
	if(n==0)
		cout<<"Pari"<<endl;
	else
		cout<<"Dispari"<<endl;

	return 0;
}
