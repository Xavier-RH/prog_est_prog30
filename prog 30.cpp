/* Autor: Xavier Romero Hernández, Realizado: 03/03/2022
	Programa pide la cantidad de numeros enteros positivos a leer y despues que introducen todos los numeros
		se calcula lo siguiente:
			Cuantos numeros pares introdujo
			el numero mayor
			el numero menor
	Validar que los numeros sean positivos
	*/
	
	#include <stdio.h>
	
	int main(){
		int numeros, dato, pares=0, mayor, menor;
		
		printf("Introduce la cantidad de numeros a leer: ");
		scanf("%d",&numeros);
		for(int i=1;i<=numeros;i++){
			do{
				printf("Introduce el valor numero %d: ", i);
				scanf("%d",&dato);
				if (dato<=0){
					printf("Numero negativo, intenta nuevamente\n");
				}
			}while(dato<=0);
			
			if (dato%2==0){
				pares++;
			}
			if(i==1){
				mayor=dato;
				menor=dato;
			}
			else{
				if(dato>mayor){
					mayor=dato;
				}
				if(dato<menor){
					menor=dato;	
				}
			}
		}
		printf("\nEl numero mayor es: %d\n",mayor);
		printf("El numero menor es: %d\n",menor);
		printf("Hay un total de %d numeros pares",pares);
		
		return 0;
	}
