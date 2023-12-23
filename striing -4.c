
#include <stdio.h>

int main()
{
    char sen[100], ch;
    printf("sentence=");
    fgets(sen, sizeof(sen), stdin);

    int i = 0, vowel = 0, consonant = 0, word = 0;

    while ((ch = sen[i]) != '\0')
    {

        if (ch == ' ')
        {
            word++;
        }
        i++;
    }

    printf("word=%d\n", word);

    return 0;
}
