#include <stdio.h>
#include <math.h>
#include <stdbool.h>

char menu(){
    printf("\n===== CALCULADORA =====\n");
    printf(" 1  - Soma\n");
    printf(" 2  - Subtracao\n");
    printf(" 3  - Multiplicacao\n");
    printf(" 4  - Divisao\n");
    printf(" 5  - Resto da divisao\n");
    printf(" 6  - Potencia\n");
    printf(" 7  - Raiz quadrada\n");
    printf(" 8  - Raiz cubica\n");
    printf(" 9  - Logaritmo natural\n");
    printf("10  - Logaritmo base 10\n");
    printf("11  - Exponencial\n");
    printf("12  - Valor absoluto\n");
    printf("13  - Arredondar para cima\n");
    printf("14  - Arredondar para baixo\n");
    printf("15  - Hipotenusa\n");
    printf("16  - Trigonometria (submenu)\n");
    printf(" 0  - Sair\n");
    printf("Escolha uma opcao: ");
}


float trigonometria(){
    float n1, n2, resultado;
    int resp;
    printf("Qual função trigonometrica? [SENO(1)/COSSENO(2)/TANGENTE(3)/GRAUS(4)/RADIANOS(5)]");
    scanf("%d", &resp);
    switch(resp){
        case 1:
            printf("Digite numero: \n");
            scanf("%f", &n1);
            resultado=sin(n1);
            printf("O Seno é:  %.2f", resultado);
            break;
        case 2:
            printf("Digite numero: \n");
            scanf("%f", &n1);
            resultado=cos(n1);
            printf("O Cosseno é:  %.2f", resultado);
            break;
        case 3:
            printf("Digite numero: \n");
            scanf("%f", &n1);
            resultado=tan(n1);
            printf("O Tangente é:  %.2f", resultado);
            break;
        case 4:
            #define pi 3.14159265358979323846
            printf("Digite numero para conversão em graus: \n");
            scanf("%f", &n1);
            resultado=n1*(pi/180);
            printf("O numero em grau é:  %.2f", resultado);
            break;
        case 5:
            #define pi 3.14159265358979323846
            printf("Digite numero para conversão em radiano: \n");
            scanf("%f", &n1);
            resultado=n1*(180/pi);
            printf("O numero em radiano é:  %.2f", resultado);
            break;
    }
}

float exponencial(){
    float n1, n2, resultado;
    printf("Digite numero: \n");
     scanf("%f", &n1);
     resultado=exp(n1);
     printf("O exponencial é:  %.2f", resultado);
}

float valor_absoluto(){
    float n1, n2, resultado;
    printf("Digite numero: \n");
     scanf("%f", &n1);
     resultado=fabs(n1);
     printf("O valor absoluto é:  %.2f", resultado);
}

float hipotenusa (){
    float n1, n2, resultado;
    printf("Digite numero: \n");
     scanf("%f", &n1);
     printf("Digite numero: \n");
     scanf("%f", &n2);
     resultado=hypot(n1,n2);
     printf("A Hipotenusa é:  %.2f", resultado);
}

float arrendondar_baixo(){
    float n1, n2, resultado;
    printf("Digite numero: \n");
     scanf("%f", &n1);
     resultado=floor(n1);
     printf("O arrendodamento pra baixo é:  %.2f", resultado);
}

float arrendondar_cima(){
    float n1, n2, resultado;
    printf("Digite numero: \n");
     scanf("%f", &n1);
     resultado=ceil(n1);
     printf("O arrendamento pra cima é:  %.2f", resultado);
}

float raiz_cubica(){
    float n1, n2, resultado;
    printf("Digite numero: \n");
     scanf("%f", &n1);
     resultado=cbrt(n1);
     printf("A raiz cubica é:  %.2f", resultado);
}

float logaritmo10(){
    float n1, n2, resultado;
    printf("Digite numero: \n");
     scanf("%f", &n1);
     resultado=log10(n1);
     printf("O log de 10 é:  %.2f", resultado);
}

float logaritmo(){
    float n1, n2, resultado;
    printf("Digite numero: \n");
     scanf("%f", &n1);
     resultado=log(n1);
     printf("O log é:  %.2f", resultado);
}

float potencia(){
    float n1, n2, resultado;
    printf("Digite numero: \n");
     scanf("%f", &n1);
     printf("Digite numero: \n");
     scanf("%f", &n2);
     resultado=pow(n1,n2);
     printf("A potencia é:  %.2f", resultado);
     
}
    
float raiz(){
    float n1, n2, resultado;
    printf("Digite numero: \n");
     scanf("%f", &n1);
     resultado=sqrt(n1);
     printf("A raiz é:  %.2f", resultado);
}

float resto_divisao(){
    int n1, n2, resultado;
    printf("Digite numero: \n");
     scanf("%d", &n1);
      printf("Digite numero: \n");
     scanf("%d", &n2);
     resultado=n1%n2;
     printf("A Divisão dos numeros %.2f", resultado);
}

float divisao(){
    float n1, n2, resultado;
    int n, i;
     printf("Digite quantos numeros quer inserir: ");
     scanf("%d", &n);
     float numeros[n];
     for (i=0; i<n; i++) {
        printf("Digite o numero %d: ", i + 1);
        scanf("%f", &numeros[i]);
        if (i == 0){
            resultado=numeros[i];
        }
        else{
            resultado=resultado/numeros[i];}}
     printf("A Divisão dos numeros %.2f", resultado);
}

float multiplicacao(){
    float n1, n2, resultado;
    int n, i;
     printf("Digite quantos numeros quer inserir: ");
     scanf("%d", &n);
     float numeros[n];
     for (i=0; i<n; i++){
        printf("Digite o numero %d: ", i + 1);
        scanf("%f", &numeros[i]);
        if (i == 0){
            resultado=numeros[i];
        }
        else{
            resultado=resultado*numeros[i];}
         
     }
     printf("A multipliação dos numeros %.2f", resultado);
}

float subtracao(){
    float n1, n2, resultado;
    int n, i;
     printf("Digite quantos numeros quer inserir: ");
     scanf("%d", &n);
     float numeros[n];
     for (i=0; i<n; i++){
        printf("Digite o numero %d: ", i + 1);
        scanf("%f", &numeros[i]);
        if (i == 0){
            resultado=numeros[i];
        }
        else{
            resultado=resultado-numeros[i];}
     }
     printf("A subtração dos numeros %.2f", resultado);
}

float soma(){
    float n1, n2, soma;
    int n, i;
     printf("Digite quantos numeros quer inserir: ");
     scanf("%d", &n);
     float numeros[n];
     for (i=0; i<n; i++){
        printf("Digite o numero %d: ", i + 1);
        scanf("%f", &numeros[i]);
        soma=soma+numeros[i];}
     printf("A soma dos numeros %.2f", soma);
}

int main()
{
    int opcao;
    do {
        menu();
        scanf("%d", &opcao);
 
        switch(opcao){
            case 1:  soma(); break;
            case 2:  subtracao(); break;
            case 3:  multiplicacao(); break;
            case 4:  divisao(); break;
            case 5:  resto_divisao(); break;
            case 6:  potencia(); break;
            case 7:  raiz(); break;
            case 8:  raiz_cubica(); break;
            case 9:  logaritmo(); break;
            case 10: logaritmo10(); break;
            case 11: exponencial(); break;
            case 12: valor_absoluto(); break;
            case 13: arrendondar_cima(); break;
            case 14: arrendondar_baixo(); break;
            case 15: hipotenusa(); break;
            case 16: trigonometria(); break;
            case 0:  printf("Encerrando...\n"); break;
            default: printf("Opcao invalida\n");
        }
 
    } while(opcao != 0);
    return 0;
}