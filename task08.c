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

    int number;

    while (!feof(input))
    {
        fscanf(input, "%d", &number);
        fprintf(output, "%c", number);
    }
    
    fclose(input);
    fclose(output);

    return 0;
}