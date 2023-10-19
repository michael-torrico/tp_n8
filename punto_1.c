#include <stdio.h>
#include <stdlib.h>
int main(){
	int nc[6][5]={0},j,i;
	while(i!=0){
	printf("ingrese la fila: ");
	scanf("%d",&i);
	if(i!=0){
	printf("ingrese la columna: ");
	scanf("%d",&j);
	printf("ingrese valor entero a cargar: ");
	scanf("%d",&nc[i-1][j-1]);}
}
	printf("matris por columnas: \n");
	for(i=0;i<6;i++){
		for(j=0;j<5;j++){
	printf("%d ",nc[i][j]);
	}printf("\n");
	}
	printf("matris por filardas:   \n");
	for(j=0;j<5;j++){
		for(i=0;i<6;i++){
			printf("%d ",nc[i][j]);
		}printf("\n");
	}
}

