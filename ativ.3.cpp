#include <iostream>

using namespace std;

main() {
	setlocale (LC_ALL, "Portuguese");
	int num;
	bool eh_primo = true;
	
	cout << "Digite um n�mero inteiro: ";
	cin >> num;
	
	if (num <= 1) {
		eh_primo = false;
	} else {
		for (int i = 2; i <= (num); i++) {
			if (num % i == 0) {
				eh_primo = false;
				break;
			}
		}
	}
	
	if (eh_primo) {
		cout << "O n�mero � primo" << endl;
	}else {
		cout << "O n�mero n�o � primo" << endl;
	}
	return 0;
}
