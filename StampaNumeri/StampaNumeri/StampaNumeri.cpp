// StampaNumeri.cpp: definisce il punto di ingresso dell'applicazione console.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
    return 0;

	for(int i = 0; i < 10; i++){
		cout << i << endl;
	}

<<<<<<< HEAD
	cout << "Io sono un cout che generera' un conflitto" << endl;
	cout << "Andro' a collidere con il branch master" << endl;
=======
	cout << "Ciao! Sono un commento" << endl;
	cout << "Sono ignaro del conflitto che generero'" << endl;

>>>>>>> FIX_BUG
}

