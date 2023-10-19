#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int nc[3][6],i,j,n,k,l,c,nro[2][43]={0},temp=0,max;
	
	for(i=0;i<3;i++){
		for(j=0;j<6;j++){
			c=0;
			nc[i][j]=rand()%43;
			for(k=0;k<j+1;k++){
				if(nc[i][j]==nc[i][k]){
					c++;
				}
				if(c==2){
					nc[i][j]=rand()%43;
					c=0;
					k=-1;
				}
			}
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<6;j++){
			nro[0][nc[i][j]]++;
		}
	}
	for(i=0;i<43;i++){
		nro[1][i]=i;
	}
	printf("ingrese el nro N: ");
	scanf("%d",&n);
	printf("cantidad que se repite n: %d \n",nro[0][n]);
	for(i=0;i<43;i++){
		for(j=0;j<43;j++){
			if(nro[0][j]<nro[0][i]){
				temp=nro[0][j];
				nro[0][j]=nro[0][i];
				nro[0][i]=temp;
				temp=nro[1][j];
				nro[1][j]=nro[1][i];
				nro[1][i]=temp;
			}
		}
	}
	max=nro[0][0];
	printf("el numero que mas veces se repite: \n");
	for(i=0;i<20;i++){
		if(nro[0][i]==max){
			printf("%d \n",nro[1][i]);
		}
	}
	
	for(i=0;i<3;i++){
		for(j=0;j<6;j++){
				for(l=0;l<6;l++){
					if(nc[i][l]>nc[i][j]){
						temp=nc[i][l];
						nc[i][l]=nc[i][j];
						nc[i][j]=temp;}
			}
		}
	}
	printf("la matriz ordenada es: \n");
	for(i=0;i<3;i++){
		for(j=0;j<6;j++){
			printf("%d  ",nc[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}


