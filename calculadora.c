#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale (LC_ALL, "Portuguese");
    
    int num1, num2, soma, subtracao, produto, quociente;

    printf("------------\nCalculadora\n------------\n");
    printf("> Digite 2 números: ");
    scanf("%i%i", &num1, &num2);

    soma             = num1 + num2;
    subtracao        = num1 - num2;
    produto          = num1 * num2;
    quociente        = num1 / num2;
    
    printf(" -------- RESULTADO: --------");
    printf( "\nSoma: %i, Subtração: %i, Produto: %i, Divisão: %i\n", soma, subtracao, produto, quociente);
    
    return 0;
}
 