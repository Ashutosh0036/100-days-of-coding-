//Q128: Read a text file and count how many vowels and consonants are in the file. Ignore digits and special characters.

#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *file;
    char ch;
    int vowels = 0, consonants = 0;

    file = fopen("text.txt", "r");
    if (file == NULL) {
        printf("Error: Cannot open file!\n");
        return 1;
    }

    while ((ch = fgetc(file)) != EOF) {
        ch = tolower(ch);
        if (isalpha(ch)) {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }
    }

    printf("Vowels: %d\nConsonants: %d\n", vowels, consonants);

    fclose(file);
    return 0;
}