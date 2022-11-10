#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height = get_int("inserisci altezza: ");

    for (int i = 0; i < height; i++)
    {
        int n = height -1;
        for (int j = 0; j < height; j++)
        {
            if (i > n)
            {
                printf("X");
            }
            else
            {
                printf(" ");
            }
            n = n-1;
        }
        printf("\n");
    }

}
