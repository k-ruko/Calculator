#include <iostream>
using namespace std;

int main ()
{

char oprator;
float number1; 
float number2;
char  again;
char input;

do{
cout << "input number 1" << endl;
cin >> number1;

cout << "input number 2" << endl;
cin >> number2;

cout << "operator" << endl;
cout << "-" << endl;
cout << "/" << endl;	
cout << "*" << endl;
cin >> oprator;

switch(op)	{
	case'+':
		cout << number1 << "+" << number2 << "=" << number1 + number2 << endl;
		break;
	case'-':
		cout << number1 << "-" << number2 << "=" << number1 - number2 << endl;
		break;
	case'/':
		cout << number1 << "/" << number2 << "=" << number1 / number2 << endl;
		break;
	case'*':
		cout << number1 << "*" << number2 << "=" << number1 * number2 << endl;
		break;

	default:
		cout << "operator not found" << endl;
	break;		
	}
	
		
		cout << "can i help you again? (y/n) " << endl;
		cin >> again;
	

	}while (again == 'Y' || again == 'y');
	cout << "thanks!!" << endl;
	

		
	
		
	
return 0;
}

