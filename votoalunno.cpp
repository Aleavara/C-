#include <iostream>
using namespace std;
// Calcolo di un voto dato un criterio di valutazione e il punteggio ottenuto in input
main (){
	//dichiarazione
	int voto;
	// richiesta in input della valutazione ottenuta
	cout<<"Digita il voto preso dall'alunno: \n"  ;
	cin>> voto;
	// esecuzione
	switch (voto){
		case 0 ... 40:
		cout<<"la valutazione corretta: E";
		break;
		case 41 ... 60:
		cout<<"la valutazione corretta: D";
		break;
		case 61 ... 70:
		cout<<"la valutazione corretta: C";
		break;
		case 71 ... 85:
		cout<<"la valutazione corretta: B";
		break;
		case 86 ... 100:
		cout<<"la valutazione corretta: A";
		break;
		default: cout<<"errore!";}
	}
