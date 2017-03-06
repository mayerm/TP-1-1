//el Programa compara el tipo de conector e imprime el resultado teniendo como comparacion las 2 proposiciones

#include <iostream>
#include <ctype.h>
#include <cstring>
#include <conio.h>
#include <math.h>

using namespace std;
int a[4] = { 1, 1, 0, 0 };
int b[4] = { 1, 0, 1, 0 };
int i;
char c[1];

void comparaprep(char c){

	switch (c){
	case 'y':
		cout << " y = 1000  ";
		break;
	case 'o':
		cout << " o = 1110  ";
		break;
	case 'x':
		cout << " x = 0110  ";
		break;
	case 'e':
		cout << " e = 1011  ";
		break;
	case 's':
		cout << " s = 1001  ";
		break;
	}
}

int main(){
	cout << "1= V , 0 =F";
	cout << "\n";
	cout << "Prep P :";
	cout << "\n";
	for (i = 0; i<4; i++){
		cout << a[i];
	}
	cout << "\n";
	cout << "Prep Q :";
	cout << "\n";
	for (i = 0; i<4; i++){
		cout << b[i];
	}
	cout << "\n";
	cout << "inserte conector y(y) , o(o), exclusivo(x), entonces(e) y si solo si (s): ";
	cin >> c[1];
	cout << "\n";
	comparaprep(c[1]);
}
