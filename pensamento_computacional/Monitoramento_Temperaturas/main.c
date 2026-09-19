#include <stdio.h>

int main()
{
    
   float limite,temp,soma=0,media,maior=0,menor=0;    //Declaracao de var
   int contli=0,contador=0;
   
    printf("Iniciando...\n");                          //Começo de interação
    printf("Digite o limite de temperatura: ");
    while (scanf("%f", &limite) != 1) {
        printf("Valor invalido! Digite um numero: ");
    while (getchar() != '\n');
}
   
   while (contli != 3){
      printf("Digite a temperatura atual: ");
      while (scanf("%f", &temp) != 1){
          printf("Valor invalido, tente novamente: ");
      while (getchar() != '\n');
   }
       soma=soma+temp;
       if (contador == 0){
           menor = temp;
       }
       if (temp > maior){
           maior = temp;
       }
       if (temp < menor){
           menor = temp;
       }
       if (temp > limite){
           contli++;
           if (contli == 3){
               printf("Limite exedido, programa irá se encerrar ...\n");
           }
       }
       else{
           contli=0;
       }
       contador++;
   }

   media=soma/contador;
  
   printf("Resultados\n"); //Saidas 
   printf("Menor temperatura: %.2f°C\n",menor);
   printf("Maior temperatura: %.2f°C\n",maior);
   printf("Media: %.2f\n", media);
   printf("Quantidade de vezes monitorado: %d\n",contador);
    return 0;
}
