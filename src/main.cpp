#include <iostream>
#include "deposit.h"

using namespace std;

int main() {
	int deposit, days, profit;
	
	cout << "vvedite razmer vklada (min 10000) ";
	cin >> deposit;
	if(!verifyDeposit(deposit)) {		
		cout << "razmer vklada ne doljen <10000 " << endl;
		return 1;
	}
	
	cout << " vvedite srok vklada(max 365):";
	cin >> days;	
	
	switch(verifyDays(days)) {
	case 1:
		cout << "srok ne mojet biti <1" << endl; 
		return 1;
	case 2:
		cout << "srok ne bolee 365" << endl;
		return 1;
	}
	
	profit =  calculateProfit(deposit, days);
	cout << (profit < 0 ? "shtraf: " : "doxod: ") << profit << ". summa vklada: " << profit + deposit << endl;

	return 0;
}