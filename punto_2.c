#include <stdio.h>
#include <stdlib.h>
int main(){
	int nc[3][3]={0},j,i;
	printf("valores para la columna 2: \n");
	for(i=0;i<3;i++){
		scanf("%d",&nc[i][1]);
		printf("\n");
	}
	printf("valores para la columna 1 \n");
	for(i=0;i<3;i++){
		scanf("%d",&nc[i][0]);
		printf("\n ");
		
	}
	printf("valores para la columna 3: \n");
	for(i=0;i<3;i++){
		scanf("%d",&nc[i][2]);
		printf("\n");
	}
printf("matriz: \n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d",nc[i][j]);
		}
		printf("\n");
	}
} 
