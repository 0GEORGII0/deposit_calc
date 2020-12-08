#include "deposit.h"


int main()
{
	int d, x, s;


	cout << "Na skolko dnei vklad (nelza bolshe 1 goda)" << endl;
	cin >> d;
	while (d > 365) {
		cout << "incorrect" << endl;
		cin >> d;

	}

	cout << "Summa (nelza menshe 1000)" << endl;
	cin >> x;
	while (x < 1000)
	{
		cout << "incorrect" << endl;
		cin >> x;
	}

	if (d >= 0 || d <= 30) {

		s = x * 0.9;

	}
	else
	{
		
		if (d >= 31 || d <= 120) {
				
			s = x * 1.02;

		}
		else
		{

			if (d >= 121 || d <= 240) {
					
				s = x * 1.06;

			}
			else
			{
				if (d >= 241 || d <= 365) {
						
					s = x * 1.12;

				}
			}
		}



	}
	cout << "doxod\n" << s << endl;

	return 0;
}

