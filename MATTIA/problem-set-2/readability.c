#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
int get_letters(string strlet);
int get_words(string strwords);
int get_sentences(string strsent);
int main(void)
{
    string stringa = get_string("Inserisci frase: \n");
    int letters = get_letters(stringa);
    int words = get_words(stringa);
    int sentences = get_sentences(stringa);
    float L = letters * 100 / words;
    float S = sentences * 100 / words;
    float index = 0.0588 * L - 0.296 * S - 15.8;
    int grade = round(index);
    printf("Grade: %i\n", grade);
    printf ("numero lettere: %i\n", letters);
    printf ("numero parole: %i\n", words);
    printf ("numero frasi: %i\n", sentences);
}

int get_letters(string strlet)
{
    int n = strlen(strlet);
    int n_letters = 0;
    for (int i = 0; i < n; i++)
    {
        if (toupper(strlet[i]) >= 65 && toupper(strlet[i]) <= 90)
        {
            n_letters = n_letters +1;
        }
    }
    return n_letters;
}

int get_words(string strwords)
{
    int n = strlen(strwords);
    int n_words = 0;
    for (int i = 0; i < n; i++)
    {
        if (strwords[i] == 32)
        {
            n_words = n_words +1;
        }
    }
    return n_words +1;
}

int get_sentences(string strsent)
{
    int n = strlen(strsent);
    int n_sentences = 0;
    for (int i = 0; i < n; i++)
    {
        if (strsent[i] == 33 || strsent[i] == 46 || strsent[i] == 63)
        {
            n_sentences = n_sentences +1;
        }
    }
    return n_sentences;
}
