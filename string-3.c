#include <stdio.h>

int main() {
    char sen[100], ch;
    printf("sentence=");
    fgets(sen, sizeof(sen), stdin);

    int i = 0, vowel = 0, consonant = 0, word = 0;

    while ((ch = sen[i]) != '\0') {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            vowel++;
        } else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            consonant++;
        }
        i++;
    }

    printf("vowel=%d\n", vowel);
    printf("consonant=%d\n", consonant);


    return 0;
}
