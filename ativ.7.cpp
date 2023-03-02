#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	float SL, NS;
	string name;

	cout << "Informe seu nome:";
	cin >> name;
	getline(cin, name);

	cout << "informe o seu salário: ";
	cin >> SL;

	if(SL <= 1500 ){
		NS = SL * 1.10;
	} else if(SL > 1500){
		NS = SL * 1.5;
	}
	cout << NS;
}
