//takes characters as input and check the frequency or occurence of that character in a file.c
//Read a sentence (from the user or a file).
//
//Take one character as input that the user wants to check.
//
//Count how many times that character occurs in the sentence.
//
// Example:
//
//Sentence: "Hello World"
//
//Character: 'l'
//
//Output: The character 'l' appears 3 times.
#include <stdio.h>

int main() {
    FILE *fp;
    char ch, c;
    int count = 0;

    // Write sentence to file
    fp = fopen("drama.txt", "w");
    if (fp == NULL) {
        printf("File doesn't exist.\n");
        return 1;
    }

    printf("Enter sentence: ");
    while ((ch = getchar()) != '\n') // read from keyboard
        fputc(ch, fp);
    fclose(fp);

    // Take character to check
    printf("Enter character to check: ");
    scanf(" %c", &ch);

    // Read file and count frequency
    fp = fopen("drama.txt", "r");
    if (fp == NULL) {
        printf("File doesn't exist.\n");
        return 1;
    }

    while ((c = fgetc(fp)) != EOF)
        if (c == ch)
            count++;
    fclose(fp);

    printf("The character '%c' appears %d times.\n", ch, count);
    return 0;
}
