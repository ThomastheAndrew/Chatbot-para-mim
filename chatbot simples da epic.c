#include <stdio.h>
#include <conio.h>

#define width 50
#define height 10

int main(){
	
  system("color 9E");	
	
	int i,k;
	
	 int mapa[height][width]={
	 
	 {1,1,1,1,1,1,0,2,2,2,2,2,0,3,3,3,0,0,4,4,4,4,0,0,0,0,0,0,0,0,0},
	 {1,0,0,0,0,0,0,2,0,0,0,2,0,3,3,3,0,4,0,0,0,0,0,0,0,0,0,0,0,0,0},
	 {1,0,0,0,0,0,0,2,0,0,0,2,0,0,3,0,0,4,0,0,0,0,0,0,0,0,0,0,0,0,0},
	 {1,0,0,0,0,0,0,2,2,2,2,2,0,0,3,0,0,4,0,0,0,0,0,0,0,0,0,0,0,0,0},
	 {1,1,1,1,1,1,0,2,0,0,0,0,0,0,3,0,0,4,0,0,0,0,0,0,0,0,0,0,0,0,0},
	 {1,0,0,0,0,0,0,2,0,0,0,0,0,0,3,0,0,4,0,0,0,0,0,0,0,0,0,0,0,0,0},
	 {1,0,0,0,0,0,0,2,0,0,0,0,0,0,3,0,0,4,0,0,0,0,0,0,0,0,0,0,0,0,0},
	 {1,0,0,0,0,0,0,2,0,0,0,0,0,0,3,0,0,4,0,0,0,0,0,0,0,0,0,0,0,0,0},
	 {1,1,1,1,1,1,0,2,0,0,0,0,0,0,3,0,0,0,4,4,4,4,0,0,0,0,0,0,0,0,0},
	 {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	 {0,5,5,5,5,5,0,0,6,6,6,0,0,7,7,7,7,7,0,1,1,1,1,1,0,8,8,8,8,8,8},
	 {5,0,0,0,0,0,0,6,0,0,0,6,0,7,0,7,0,7,0,1,0,0,0,0,0,8,0,0,0,0,0},
	 {5,0,0,0,0,0,0,6,0,0,0,6,0,7,0,7,0,7,0,1,0,0,0,0,0,8,0,0,0,0,0},
         {5,0,0,0,0,0,0,6,0,0,0,6,0,7,0,7,0,7,0,1,0,0,0,0,0,8,0,0,0,0,0},
         {5,0,0,0,0,0,0,6,6,6,6,6,0,7,0,7,0,7,0,1,1,1,1,1,0,8,8,8,8,8,8},
         {5,0,0,5,5,5,0,6,0,0,0,6,0,7,0,7,0,7,0,1,0,0,0,0,0,0,0,0,0,0,8},
	 {5,0,0,0,0,5,0,6,0,0,0,6,0,7,0,7,0,7,0,1,0,0,0,0,0,0,0,0,0,0,8},
         {5,0,0,0,0,5,0,6,0,0,0,6,0,7,0,7,0,7,0,1,0,0,0,0,0,0,0,0,0,0,8},
	 {5,5,5,5,5,5,0,6,0,0,0,6,0,7,0,7,0,7,0,1,1,1,1,1,0,8,8,8,8,8,8}
   
};
	
	for(i=0; i< height; i++){
	 for(k=0; k < width; k++){
	
	  if(mapa[i][k]==1){
	  	printf("e");
	  }	
	  else if(mapa[i][k]==2){
	  	printf("p");
	  }	
	  else if(mapa[i][k]==3){
	  	printf("i");
	  }	
	  else if(mapa[i][k]==4){
	  	printf("c");
	  }	
	  else if(mapa[i][k]==5){
	  	printf("g");
	  }
	  else if(mapa[i][k]==6){
	  	printf("a");
	  }
	  else if(mapa[i][k]==7){
	  	printf("m");
	  }
	  else if(mapa[i][k]==8){
	  	printf("s");
	  }
	  else{
	  	printf(" ");
	  }
	  
	}
        printf("\n");	
	}
	
	printf("\t\t\tDigite qualquer coisa para comecar\n\n\n\n\n");
	
	getch();
	
	system("color 7C");
	int pergunta=0;
  char perg1,perg2,perg3,perg4,perg5;
 
  printf("\t\t\t\tola bem vindo\n\n");
  

  printf("pergunta %d:\n\n",pergunta + 1);
  printf("quais jogos feito pela nossa empresa voce joga? \n a) Fortnite \n b) Gears of wars \n c) Infinity blade \n d) unreal \n e) Nao gosto de nenhum jogo da Epic \n");
  scanf(" %c",&perg1);
  switch(perg1){

    case 'a':
     printf("Resposta: Fortnite\n\n");
    break;
    
    case 'b':
     printf("Resposta: Gears of war\n\n");
     break;

    case 'c':
     printf("Resposta: Infinity blade\n\n");
     break;

    case'd':
     printf("Resposta: unreal\n\n");
     break;

    case 'e' :
     printf("Eu não gosto de nenhum jogo da epic.\n\n"); 
     break; 
  }
  
  
 printf("===============================================================\n");

    printf("pergunta %d:\n\n",pergunta+ 2);
    printf("qual console que voce prefere usar para jogar os jogos feito pela nossa empresa ?\n a) playstation 4\n b) xbox one\n c) computador\n d) nintendo switch:\n\n ");
    scanf(" %c",&perg2);
    
    switch(perg2){

    case 'a':
       printf("Resposta: playstation 4\n\n"); 
    break;
 
    case 'b':
       printf("Resposta: xbox one\n\n");
    break;   
 
    case 'c':
       printf("Resposta: computador\n\n");
     break;

    case 'd':
      printf("Resposta: nintendo switch\n\n");
    break;
    
    }
    
printf("===============================================================\n");
    printf("pergunta %d\n\n",pergunta + 3); 
    printf("voce ja comprou algum desses jogos no epic store ?:\n a) World War Z\n b) Darksiders 3\n c) Super Meat Boy\n d) Ashen\n e) Eu nunca comprei nenhum jogo no epic store\n");
    scanf(" %c",&perg3);

    switch(perg3){
       
    case 'a':
      printf("Resposta: World War Z\n\n");
    break;  
    
    case 'b':
      printf("Resposta: Darksiders 3\n\n");
     break;  
       
    case 'c':
      printf("Resposta: Super Meat Boy\n\n");
     break; 

    case 'd':
      printf("Resposta: Ashen\n\n");
     break;
    case 'e':
      printf("Resposta: Eu nunca comprei nenhum jogo no epic store\n\n");
     break; 
    }

printf("===============================================================\n");

 printf("pergunta %d\n\n",pergunta + 4);
 printf("voce ja participou de algum torneio de fortnite ?:\n a) torneio winter royale\n b) Fortnite World Cup\n c) Torneio no E3\n d) Eu nunca participei de nenhum torneio de Fortnite\n");
 scanf(" %c",&perg4);
  switch(perg4){

    case 'a':
      printf("Resposta: Torneio Winter Royale\n\n");
     break;

    case 'b':
      printf("Resposta: Fortnite World cup\n\n");
     break;

    case 'c':
      printf("Resposta: Torneio no E3\n\n");
     break;

    case 'd':
      printf("Resposta: Eu nunca participei de nunhum torneio de Fortnite\n\n");
     break;       
  }    

printf("===============================================================\n");
  printf("pergunta %d\n\n",pergunta + 5);
  printf("Voce participaria no torneio de Gears of War na BGS ?:\n a) Sim\n b) Nao\n");
  scanf(" %c",&perg5); 

  switch(perg5){

    case 'a':
      printf("Sim\n");
     break; 
  
    case 'b':
      printf("Nao\n");
     break; 
  }
	
	
	
	
	
	
	
	
 getch();	
 return 0;	
}
