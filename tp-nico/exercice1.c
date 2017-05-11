#include "exercice1.h"
#include "iostream"
#include <math.h>

using namespace std;

int verifyParameter(int argc)
{
	if(argc != 2) {
		cout << "Erreur, Le nombre d'argument est incorrect !" << endl;
		return -1;
	}
	else {
		cout << "Succès, le nombre d'argument est correct !" << endl;
		return 0;
	}
}

int isPrime(int number)
{

	int racine = sqrt(number);
	int i;
	
	if (number == 1 || number ==0) {
		cout << "Ce nombre n'est pas premier" << endl;
		return -1;
	}
    	if (number == 2) {
    		cout << "Ce nombre est premier" << endl;
    		return -1;
    	}
    	
    	for(i = 2; i <= racine; i++) {
    		if(number % i == 0) {
    			cout << "Ce nombre n'est pas premier" << endl;
    			return -1;
    		}
    	}
    	
    	cout << "Ce nombre est premier" << endl;
    	return 0;
}
