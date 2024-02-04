//calculator 
#include <iostream>
using namespace std;
int main()
{
	int num1, num2, num3;
	char op;
	
	
		cout << "  " << endl;
		cin >> num1;
		
		cout << "   " << endl; 
		cin >> num2;
		
		cout << "  " << endl;
		cin >> num3;
	
	
	cout << "chosse operator : " << endl;
	cin >> op;
	switch(op)
	{ 
		case('+'):
		cout << num1+num2+num3 << endl;
	break;
	
		case('-'):
			cout << num1-num2-num3 << endl;
	break;
	
		case('/'):
			cout << num1/num2/num3 << endl;
	break;
		case('*'):
			cout << num1*num2*num3 << endl; 
	break;
	
	default:
		cout<<"tidak ada operator seperti itu "<< endl;
		 
	} 
	
	return 0;
}
