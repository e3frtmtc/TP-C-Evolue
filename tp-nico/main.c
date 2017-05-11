#include "exercice1.h"
#include "iostream"
#include <string.h>
#include <stdlib.h>



using namespace std;


int main(int argc, char **argv) 
{
 	int sz_arg; 
 	int sz; 
 	char *fin;
 	
 	//TODO
 	int *tableau = (int*)malloc(1024 * sizeof(int));

	if(verifyParameter(argc)) return -1;
	sz_arg = strlen( argv[1] );
	
	// converti le paramètre donné en un int.
	sz = strtol( argv[1], & fin, 0 );
	if ( (fin == argv[1]) || (argv[1] + sz_arg > fin ) ) { // test si l'argument est un nbr. valide
	cout << "Le nombre entré en paramètre n'est pas correct !" << endl;
	return -1;
	}
	if(isPrime(sz)) return -1;
	
	
	
	return 0;
}
