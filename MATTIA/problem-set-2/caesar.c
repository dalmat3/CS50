#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, string argv[])
{
    string stringa = get_string("Inserisci stringa: ");
    int k = atoi(argv[1]);
    int n = strlen(stringa);
    for (int i = 0; i < n; i ++)
    {
        if (stringa[i] + k > 122)
        {
            int s = (stringa[i] + k) - 122;
            stringa[i] = 97 + s -1;
        }
        else
        {
            stringa[i] = stringa[i] + k;
        }
    }
    printf("Stringa cifrata: %s\n", stringa);
}
