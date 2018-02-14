/*

Pequeno programa em C++ que recebe quantidade de camisetas vendidas
e informa valor a pagar e parcelas.

*/

#include<iostream>

using namespace std;

int tp, tm, tg;
float tot;

int main(){

	cout<<"\nNumero de camisas pequenas: ";
	cin>>tp;
	cout<<"\nNumero de camisas medias: ";
	cin>>tm;
	cout<<"\nNumero de camisas grandes: ";
	cin>>tg;

	tot=tp*25.30+tm*30.53+tg*42.7;

	cout<<"\nValor da compra R$: "<<tot;

	if(tot<100)
		cout<<"\nNao podemos parcelar. ";
	else
		if(tot<150)
			cout<<"\nDividimos em 2x de R$ "<<tot/2;
		else
			if(tot<200)
				cout<<"\nDividimos em 3x de R$ "<<tot/3;
			else
				cout<<"\nDividimos em 4x de R$ "<<tot/4;
	cout<<"\n\n";
	return 0;
}
