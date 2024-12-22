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

    int number[100], count = 0;

    while (!feof(input))
    {
        fscanf(input, "%d", &number[count]);
        count++;
    }
    fprintf(output, "%d  %d", number[0], number[count - 1]);

    fclose(input);
    fclose(output);
    
    return 0;
}