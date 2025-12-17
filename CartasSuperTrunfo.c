#include <stdio.h>

int main(){

    /*VARIAVEL DECLARADAS*/

    
    int riodejaneiro, saopaulo ;
    float densidadepopulacional1,densidadepopulacional2 ;
    float pibpercapito1 , pibpercapito2;

    float resultado1;
    float resultado;

     riodejaneiro = 550.000;
     saopaulo = 450.000;

    char produtoA[30] = "Produto A ";
    char produtoB[30] = "Produto B ";

    unsigned int estoqueA = 1000;
    unsigned int estoqueB = 2000;

    float valorA = 40.50;
    float valorB = 20.40;

    unsigned int estoqueMinimoA = 5000;
    unsigned int estoqueMinimoB = 1500;

    double valortotalA;
    double valortatalB;

    int resultadoA , resultadoB;

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

             
// COMPARAR O VALOR MINIMO DE ESTOQUE

    resultadoA = estoqueA > estoqueMinimoA;
    resultadoB = estoqueB > estoqueMinimoB;

    resultado = (densidadepopulacional1 * densidadepopulacional2);
    resultado1 = (pibpercapito1 * pibpercapito2);

    /*Na terceira étapa do jogo, iremos verificar*/
    
if (riodejaneiro > saopaulo) {   
    printf(" Rio de janeiro tem mais população \n");}
else{ printf("Sao paulo tem menas população \n");}


printf(" A POPULACAO E :%f\n", resultado);
printf(" O PIB PER CAPTO E :%f\n", resultado1);

printf("A cidade venceedora e :%d \n", riodejaneiro,saopaulo);

// EXIBIR  OS VALORES DOS PRODUTOS

printf("produto %s tem estoque %u e o valor unitario e R$ :%.2f \n", produtoA, estoqueA, valorA);
printf("produto %s tem estoque %u e o valor unitario e R$ :%.2f \n", produtoB, estoqueB, valorB);

printf(" O produto %s tem estoque minimo %d \n", produtoA, resultadoA);
printf(" O produto %s tem estoque minimo %d \n", produtoB, resultadoB);

printf(" O valor total de A (R$ %.2f) e maior que  o valor total de B (R$ %.2f)? : %d\n", 
                            estoqueA * valorA,
                            estoqueB * valorB,
                            (estoqueA * valorA) > (estoqueB * valorB));
                            printf(" O valor e VERDADEIRO");


return 0;

}