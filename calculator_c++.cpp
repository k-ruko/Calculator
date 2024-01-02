#include <iostream>
using namespace std;

int main ()
{

char op;
float angka1; 
float angka2;
char  lagi;
char input;

do{
cout << "masukkan angka 1" << endl;
cin >> angka1;

cout << "masukkan angka 2" << endl;
cin >> angka2;

cout << "pilih operator" << endl;
cout << "-" << endl;
cout << "/" << endl;	
cout << "*" << endl;
cin >> op;

switch(op)	{
	case'+':
		cout << angka1 << "+" << angka2 << "=" << angka1 + angka2 << endl;
		break;
	case'-':
		cout << angka1 << "-" << angka2 << "=" << angka1 - angka2 << endl;
		break;
	case'/':
		cout << angka1 << "/" << angka2 << "=" << angka1 / angka2 << endl;
		break;
	case'*':
		cout << angka1 << "*" << angka2 << "=" << angka1 * angka2 << endl;
		break;

	default:
		cout << "gada kek gini anjeng" << endl;
	break;		
	}
	
		
		cout << "apakah ada lagi yang mau di hitung? (y/n) " << endl;
		cin >> lagi;
	

	}while (lagi == 'Y' || lagi == 'y');
	cout << "terimakasih" << endl;
	

		
	
		
	
return 0;
}

