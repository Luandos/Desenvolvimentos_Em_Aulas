#include <stdio.h>
#include <stdlib.h>

int main()
{
  int opc;
  float c,f,k;
  printf("Escolha um numero de 1 a 6\n");
  scanf("%d", &opc);
  switch (opc){
    case 1:
        printf("Diga o valor do celcius: \n");
        scanf("%f", &c);
        f = (c*1.8f) + 32;
        printf("Valor em Farenalgumacoisa %f \n", f);
        break;
    case 2:
        printf("Valor em Kelvin para faren: \n");
        scanf("%f", &k);
        f = (k - 273.15f) * 1.8f + 32;
        printf("Valor em Farenalgumacoisa %f \n", f);
        break;
    case 3:
        printf("Celcius para Kelvin: \n");
        scanf("%f", &c);
        k= c + 273.15f;
        printf("Valor em Kelvin %f: \n", k);
        break;
    case 4:
        printf("Faren para Kelvin \n");
        scanf("%f", &f);
        k= 5 / (9 * (f - 32)) + 273.15f;
        printf("Valor em Kelvin: %f \n", c);
        break;
    case 5:
        printf("Faren para Celcius: \n");
        scanf("%f", &f);
        c = ((f - 32) * 5) / 9;
        printf("Valor em Celcius: %f \n", c);
    case 6:
       printf("Kelvin para Celcius:\n ");
       scanf("%f", &k);
       c = (k - 273.15f);
       printf("Valor em Celcius: %f \n", c);
    default:
        printf("Escolha direito \n");
  }

    return 0;
}
