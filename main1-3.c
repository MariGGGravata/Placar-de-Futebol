#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

typedef struct Fut{
	
	char nome[50];
	int gol;
	
} TFut;

int main() {
	
	int i, j, a, b, goleada1, goleada2;
	
	TFut time[2];
	
	
	
	for (i = 0; i < 2; i ++){
		
		printf("Time num %d\n", i+1);
		fflush(stdin);
		printf("\nQual o nome do Time?\n");
		gets(&time[i].nome);
		fflush(stdin);
		printf("\nQuantos gols fez?\n");
		scanf("%d", &time[i].gol); 
				
	}
	
		goleada1 = time[0].gol - time[1].gol;
		goleada2 = time[1].gol - time[0].gol;
		
	
	for (i = 0; i < 2; i ++){
		
		printf("\nTime num %d: \nNome: %s \nGol: %d \n", i+1, time[i].nome, time[i].gol);
				
	}
	
	if(time[0].gol > time[1]. gol){
		
		printf("\nO Time %s ganhou.\n", time[0].nome);
		
		if(goleada1 >= 3){
			
			printf("\nO time %s ganhou de goleada.\n", time[0].nome);
			
		} else{
			
		}
		
	} else if (time[1].gol > time[0].gol){
		
		printf("\nO Time %s ganhou.\n", time[1].nome);
		
		if(goleada2 >= 3){
			
			printf("\nO time %s ganhou de goleada.\n", time[1].nome);
			
		} else{
			
		}
		
	} else{
		
		printf("\nDeu empate.\n");
	}
	
	return 0;
}
