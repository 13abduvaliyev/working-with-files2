#include <stdio.h>
#include <string.h>

int main() {
    FILE *input = fopen("input.txt", "r");
    FILE *output1 = fopen("output1.txt", "w");
    FILE *output2 = fopen("output2.txt", "w");

    if (input == NULL)
    {
        perror("File bo'sh");
        return 1;
    }

    int number;
    
    while(!feof(input))
    {
        fscanf(input, "%d", &number);
        if (number % 2 == 1)
        {
            fprintf(output1, "%d  ", number);
        } else
        {
            fprintf(output2, "%d  ", number);
        }   
    }

    fclose(input);
    fclose(output1);
    fclose(output2);

    return 0;

}