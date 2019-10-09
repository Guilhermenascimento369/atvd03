#include <stdlib.h>
#include <stdio.h>

int primo (void)
{
    int i= 0;
    int resto = 1;
    int div= 2;

    printf ("digite um valor para ser decomposto em fatores primos: ");
    scanf ("%d", &i);

    while( (i!= div) || !(resto) )
    {
        if ( !(i% div) )
        {
            printf("divisor: %d\n", div);
            i/= div;
        }
        else
            div++;
    }

    printf("Divisor: %d\n", div);

    return div;
}
int main (){
primo();
}

