#include <stdio.h>

int main()
{
    
   float limite,temp,soma,media,maior=0,menor=0;    //Declaracao de var
   int contli,contador,consecutiva;
   printf("Iniciando...");                          //Começo de interação
   printf("Digite o limite de temperatura");
   scanf("%f".&limite);
   do{                                              //Estrutura Principal de analise de temperatura
       printf("Monioramento..");
       printf("Digite a temperatura da maquina em ºC: ");
       scanf("%f". &temp);
       soma=soma+temp;
       if (temp >= limite){
        contli++;
       }
       if (temp > maior);{
        maior=temp;
       }
       if (temp < menor){
           menor=temp;
       }
       
       contador=contador++;
   } while (contli<3);
   media=soma/contador;
   printf("Resultados");
   printf("menor temperatura: %fC".menor);
   printf("Maior temperatura: %fC".maior);
   printf("Media: %f", media);
   printf("Quantidade de limites atigidos: %f",contli);
    return 0;
}
