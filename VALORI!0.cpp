#include <iostream>
using namespace std;
// programma per la lettura e somma di numeri in input !=0
main (){
	// DICHIARAZIONE E INIZIALIZZAZIONE DELLE VARIABILI NECESSARIE
	int num,nValori=0,somma=0;
	// RICHIESTA ALL'ESECUTORE DEL PROGRAMMA
	cout<<"digita un valore alla volta, quando digiterai 0 il programma terminerà restituendo il numero dei valori letti e la somma di essi \n";
	// ESECUZIONE
	do{
		cin>> num;
		nValori=nValori+1;
		somma=somma+num;
	}while(num!=0);
	cout<<"Numeri Digitati:\n"<< nValori<< endl;
	cout<<"la somma dei Numeri Digitati è pari a:\n"<< somma<< endl;
	return 0;
	}
