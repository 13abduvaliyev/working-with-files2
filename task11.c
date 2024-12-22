#include <stdio.h>
#include <string.h>

int main() {
    FILE *input = fopen("input.txt", "r");
    FILE *output = fopen("output.txt", "w");

    if (input == NULL)
    {
        perror("Fayl bo'sh");
        
        return 1;
    }

    char word[100];
    int count = 0;

    while (!feof(input))
    {
        fscanf(input, "%s", word);
        if (word[0] >= 'a' && word[0] <= 'z')
        {
            word[0] = word[0] - 32;
            fprintf(output, "%s ", word);
        } else
        {
            fprintf(output, "%s ", word);
        }
    }

    fclose(input);
    fclose(output);

    return 0;

}