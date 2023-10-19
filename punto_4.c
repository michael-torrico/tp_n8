#include <stdio.h>
#include <stdlib.h>
int main( ) {
	int nc[3][3],j,i,k,l,temp;
		for(i=0;i<3;i++){
			for(j=0;j<3;j++){
				scanf("%d",&nc[i][j]);
			}
		}
	for(i=0;i<3;i++){
			for(j=0;j<3;j++){
				for(k=0;k<3;k++){
					for(l=0;l<3;l++){
						if(nc[k][l]>nc[i][j]){
							temp=nc[k][l];
							nc[k][l]=nc[i][j];
							nc[i][j]=temp;
						}
						
					}
				}
			}
		}
	printf("matriz: \n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d",nc[i][j]);
		}
		printf("\n");
	}
}
