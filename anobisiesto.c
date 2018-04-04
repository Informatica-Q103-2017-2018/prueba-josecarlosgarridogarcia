#include<stdio.h>

int main(){
	int ano;
	printf("introduzca un anho: ");
	scanf("%i", &ano);
	
	if ((ano%4==0) && (ano%100!=0)||(ano%400==0)){
		printf("el anho es bisiesto");
	}
	
    else {
	
		printf("el anho no es bisiesto");
	}
	
	
	return 0;
}
