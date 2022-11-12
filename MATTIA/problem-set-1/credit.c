#include <cs50.h>
#include <stdio.h>

int main(void)
{
   long number = get_long("Number: ");
   long numbermod = number / 10;
   int lastdigit = number % 10;
   int i = 0;
   int somma = 0;
   while (numbermod != 0)
   {
        if (i % 2 == 0)
        {
            int prod = (numbermod % 10) * 2;
            if (prod >= 10)
            {
               somma = somma + (prod / 10 + prod % 10);
            }
            else
            {
               somma = somma + prod;
            }
        }
        else
        {
            somma = somma + numbermod % 10;
        }
        i++;
        numbermod = numbermod / 10;
   }
   somma = somma + lastdigit;
   printf("somma: %i\n", somma);
   if (somma % 10 == 0)
   {
        printf("Carta Valida\n");
   }
   else
   {
        printf("Carta non valida\n");
   }
}
