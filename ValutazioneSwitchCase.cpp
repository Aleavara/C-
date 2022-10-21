#include <iostream>
using namespace std;
// PROGRAMMA PER IL CALCOLO DEL COSTO DI UN ABBONAMENTO DATI DUE PARAMETRI
int main(){
	//Dichiarazione
	char tipoAbbonamento;
	int tipoZona;
	//Richiesta del tipo di abbonamento necessario
	cout<<"Tipo di abbonamento: Digita S per un abbonamento settimanale, M per mensile, A per annuale\n";
	cin>> tipoAbbonamento;
	//Esecuzione con ulteriore richiesta della zona
	switch (tipoAbbonamento){
		case 'A':
			cout<< "Specifica la zona: 1,2 o 3:\n";
			cin>>tipoZona;
			switch (tipoZona){
				case 1: cout<< "Il costo è di 250 EUR";
					    break;
				case 2: cout<< "Il costo è di 150 EUR";
						break;
				case 3: cout<< "Il costo è di 300 EUR";	
						break;
				default: cout<< "errore";
				}	break;
		case 'M':
			cout<< "Specifica la zona: 1,2 o 3:\n";
			cin>>tipoZona;
			switch (tipoZona){
				case 1: cout<< "Il costo è di 30 EUR";
						break;
				case 2: cout<< "Il costo è di 20 EUR";
						break;
				case 3: cout<< "Il costo è di 40 EUR";
						break;	
				default: cout<< "errore";
				} 	break;	
		case 'S':
			cout<< "Specifica la zona: 1,2 o 3:\n";
			cin>>tipoZona;
			switch (tipoZona){
				case 1: cout<< "Il costo è di 10 EUR";
						break;
				case 2: cout<< "Il costo è di 5 EUR";
						break;
				case 3: cout<< "Il costo è di 15 EUR";
						break;	
				default: cout<< "errore";
				} 	break;	
		default:
			cout<< "ERRORE";}
	
	return 0;
	
	
}
