#include <stdio.h>
#include <stdlib.h>
int main(){
	float nc[100][6]={0},monto,max=0;
	int i,j,n,com;
	printf("ingrese el nro de cliente: ");
	scanf("%d",&n);
	while(n!=0){
		printf("ingrese el monto: ");
		scanf("%f",&monto);
		printf("ingrese el 1Depósito 2Extraccion 3Comisiones deducidas 4Intereses acreditados: ");
		scanf("%d",&com);
		if(com==1){nc[n-1][1]+=monto; nc[n-1][5]=nc[n-1][5]+monto;	}
		if(com==2){nc[n-1][2]+=monto; nc[n-1][5]=nc[n-1][5]-monto;	}
		if(com==3){nc[n-1][3]+=monto; nc[n-1][5]=nc[n-1][5]-monto;	}
		if(com==4){nc[n-1][4]+=monto; nc[n-1][5]=nc[n-1][5]+monto;	}
		printf("ingrese el nro de cliente: ");
		scanf("%d",&n);
	}
	for(i=0;i<100;i++){
		nc[i][0]=i+1;	
	}
	for(i=0;i<100;i++){
		if(nc[i][1]>max){
			max=nc[i][1];
		}
	}
	printf("\n %.2f \n",max);
	printf("clientes con mayor deposito: \n");
	for(i=0;i<100;i++){
			if(nc[i][1]==max){
				printf("nro de cliente: %.2f deposito: %.2f \n",nc[i][0],nc[i][1]);
			}
	}
	
	for(i=0;i<100;i++){
		for(j=0;j<6;j++){
			printf("%.2f\t",nc[i][j]);
		}
		printf("\n");
	}
}
	
	
	
