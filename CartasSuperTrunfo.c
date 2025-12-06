#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

  
int main(){

        int riodejaneiro, saopaulo ;
    float densidadepopulacional1,densidadepopulacional2 ;
    float pibpercapito1 , pibpercapito2;

    float resultado1;
    float resultado;

     riodejaneiro = 550.000;
     saopaulo = 450.000;

        /*Na segunda étapa do jogo, iremos criar os valores*/

            printf("CALCULANDO A DESIDADE POPULACIONAL1: \n");
	    scanf("%f", &densidadepopulacional1);
            printf("CALCULANDO A DESIDADE POPULACIONAL2: \n");
	    scanf("%f", &densidadepopulacional2);
            printf("CALCULANDO O PIB PER CAPITA1 \n");
	    scanf("%f",&pibpercapito1);
            printf("CALCULANDO O PIB PER CAPITA2 \n");
	    scanf("%f",&pibpercapito2);

            printf("escolha a sua cidade: \n");
        scanf("%d", &riodejaneiro, saopaulo );

    /*Na terceira étapa do jogo, iremos verificar*/
    
                if (riodejaneiro > saopaulo) {   
                printf(" Rio de janeiro tem mais população \n");}
                else{ printf("Sao paulo tem menas população \n");}


resultado = (densidadepopulacional1 * densidadepopulacional2);
resultado1 = (pibpercapito1 * pibpercapito2);

 printf(" A POPULACAO E :%f\n", resultado);
 printf(" O PIB PER CAPTO E :%f\n", resultado1);

printf("A cidade venceedora e :%d \n", riodejaneiro,saopaulo);  
    

return 0;


} 
