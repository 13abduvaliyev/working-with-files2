#include <stdio.h>
#include <string.h>

int main() {
    FILE *input = fopen("input.txt", "r");
    FILE *output1 = fopen("output1.txt", "w");
    FILE *output2 = fopen("output2.txt", "w");

if (input == NULL)
    {
        perror("Fayl bo'sh");
        
        return 1;
    }

    char word[50];
    int count;

    while (fscanf(input, "%s %d", word, &count) != EOF)
    {
        
        if (count >= 60)
        {
            fprintf(output1, "%s  %d\n", word, count);
        } else
        {
            fprintf(output2, "%s  %d\n", word, count);
        }
    }
    fclose(input);
    fclose(output1);
    fclose(output2);

    return 0;
}