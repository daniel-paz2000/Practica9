//Daniel Alejandro Paz Moya//


#include<stdio.h>
#include<stdlib.h>

int main(){
	int nv[3][3]; int escalar;
	for(int i=0; i<3;i++){
		for(int j=0; j<3;j++){
			printf("Ingrese un numero entero");
			scanf("%i",&nv[i][j]);
		}
	}
	printf("Ingrese un numero que hara multiplicar toda la matriz: ");
	scanf("%i",&escalar);
	for(int i=0; i<3;i++){
		for(int j=0; j<3;j++){
			nv[i][j]*=escalar;
			printf("\t%i",nv[i][j]);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}
