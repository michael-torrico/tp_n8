#include <stdio.h>
#include <stdlib.h>
int main( ) {
	int nc[5][5],i,j;
	printf("ingrese valor para la diagonal \n");
	for(j=0;j<5;j++){
		scanf("%d",&nc[j][j]);}
	printf("ingrese valor para el triangulo superior \n");
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			if(i<j){
				scanf("%d",&nc[i][j]);
			}
		}
	}
	printf("ingrese valor para el triangulo inferior \n");
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			if(i>j){
				scanf("%d",&nc[i][j]);
			}
		}
	}
	printf("matriz: \n");
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			printf("%d  ",nc[i][j]);
		}
		printf("\n");
	}
}
