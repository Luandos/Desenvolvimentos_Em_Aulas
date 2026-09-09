#include <stdio.h>
float celcius_faren(){
    float c,f;
    printf("Valor em Celcius para Fahrenheit \n");
    scanf("%f", &c);
    f = (c*1.8f) + 32;
    printf("Valor em Fahrenheit %.2f \n", f);
    return f;
}

float kelvin_faren(){
    float f,k;
    printf("Valor em Kelvin para Fahrenheit: \n");
    scanf("%f", &k);
    f = (k - 273.15f) * 1.8f + 32;
    printf("Valor em Fahrenheit %.2f \n", f);
    return f;
}

float celcius_kelvin(){
    float c,k;
    printf("Valor em Celcius para Kelvin \n");
    scanf("%f", &c);
    k= c + 273.15f;
    printf("Valor em Kelvin %.2f: \n", k);
    return k;
}

float fahrenheit_kelvin(){
    float f,k;
    printf("Valor em Fahrenheit para Kelvin:  \n");
    scanf("%f", &f);
    k = (f - 32) * 5/9 + 273.15f;
    printf("Valor em Kelvin: %.2f \n", k);
    return k;
}

float fahrenheit_celcius(){
    float c,f;
    printf("Valor em Fahrenheit para Celcius \n");
    scanf("%f", &f);
    c = ((f - 32) * 5) / 9;
    printf("Valor em Celcius: %.2f \n", c);
    return c;
}
float kelvin_celcius(){
    float c,k;
    printf("Valor em Kelvin para Celcius\n ");
    scanf("%f", &k);
    c = (k - 273.15f);
    printf("Valor em Celcius: %.2f \n", c);
    return c;
}

void menu(){
    int opc;
 
    do{
        printf("\n===== Conversor de Temperatura =====\n");
        printf("1 - Celsius para Fahrenheit\n");
        printf("2 - Kelvin para Fahrenheit\n");
        printf("3 - Celsius para Kelvin\n");
        printf("4 - Fahrenheit para Kelvin\n");
        printf("5 - Fahrenheit para Celsius\n");
        printf("6 - Kelvin para Celsius\n");
        printf("7 - Sair\n");
        printf("Escolha uma opcao: \n");
        scanf("%d", &opc);
 
        switch (opc){
            case 1:
                celcius_faren();
                break;
            case 2:
                kelvin_faren();
                break;
            case 3:
                celcius_kelvin();
                break;
            case 4:
                fahrenheit_kelvin();
                break;
            case 5:
                fahrenheit_celcius();
                break;
            case 6:
                kelvin_celcius();
                break;
            case 7:
                printf("Encerrando...\n");
                break;
            default:
                printf("Escolha direito \n");
        }
    } while (opc != 7);
}
 
int main()
{
    menu();
    return 0;
}
