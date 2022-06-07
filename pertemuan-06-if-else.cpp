#include <iostream>
using namespace std;

int main(){
	string cuaca;
	cout << "Bagaimana cuaca hari ini? ";
	cin >> cuaca;
	
	if(cuaca == "hujan"){
		cout << "Bawa payung";
	}
	else if(cuaca == "panas"){
		cout << "Bawa topi";
	}
	else if(cuaca == "mendung"){
		cout << "Bawa payung";
	}
	else{
		cout << "Bawa jaket";
	}	
}
