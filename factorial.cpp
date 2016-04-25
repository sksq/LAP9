#include "functions.h"

int factorial(int n){
    if(n<0){
    	cout << "Undefined";
    	return 0;
    }
    else if(n!=1){
	return(n * factorial(n-1));
    }
    else return 1;
}
