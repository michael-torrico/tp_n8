#include <stdio.h>
#include <stdlib.h>
int main()
{
	int nz[10][2]={0},i=0,j=0,n,temp;
	printf("ingrese numero de socio: "); scanf("%d",&n);
	while((n!=0)&&(i<10)){
		printf("ingrese su edad: "); scanf("%d",&nz[i][1]);
		nz[i][0]=n;
		i++;
		printf("ingrese numero de socio: "); scanf("%d",&n);    
	}
	for(i=0;i<10;i++){
		for(j=i;j<10;j++){
			if(nz[j][1]>nz[i][1]){
				temp=nz[j][1];
				nz[j][1]=nz[i][1];
				nz[i][1]=temp;
				temp=nz[j][0];
				nz[j][0]=nz[i][0];
				nz[i][0]=temp;
			}
		}
	}
	
	
	
	
	for(i=0;i<10;i++){
		for(j=0;j<2;j++){
			printf("%d\t",nz[i][j]);
		}
		printf("\n");
	}
	return 0;
}


