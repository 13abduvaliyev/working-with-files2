#include <stdio.h>
#include <string.h>

int main() {
    FILE *input1 = fopen("input1.txt", "r");
    FILE *input2 = fopen("input2.txt", "r");
    FILE *output = fopen("output.txt", "w");
    if (input1 == NULL)
    {
        perror("Fayl bo'sh");
        return 1;
    }

    char string1[100], string2[100];

    while (!feof(input1))
    {
        fscanf(input1, "%s", string1);
        fscanf(input2, "%s", string2);
        fprintf(output, "%s - %s\n", string1, string2);
    }

    fclose(input1);
    fclose(input2);
    fclose(output);

    return 0;
}