#include<stdio.h>
#include<string.h>
int main() {
    char line[150];
    int vowels, consonant;
    printf("Enter a line of string: ");
    gets(line);

    for (int i = 0; line[i] != '\0'; ++i) {
        if (line[i] == 'a' || line[i] == 'e' || line[i] == 'i' ||
            line[i] == 'o' || line[i] == 'u' || line[i] == 'A' ||
            line[i] == 'E' || line[i] == 'I' || line[i] == 'O' ||
            line[i] == 'U') {
            ++vowels;
        } else if ((line[i] >= 'a' && line[i] <= 'z') || (line[i] >= 'A' && line[i] <= 'Z')) {
            ++consonant;
        }
    }    
    printf("Vowels: %d", vowels);
    printf("\nConsonants: %d", consonant);
    return 0;
}
