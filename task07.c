#include <stdio.h>
#include <string.h>

int main() {
    FILE *input1 = fopen("input1.txt", "r");
    FILE *input2 = fopen("input2.txt", "r");
    FILE *output1 = fopen("output1.txt", "a");

    if (input1 == NULL)
    {
        perror("Fayl bo'sh");
        return 1;
    }

    char string1[100];

    while (!feof(input1))
    {
        fscanf(input1, "%s", string1);
        fprintf(output1, "%s\n", string1);
    }
    while (!feof(input2))
    {
        fscanf(input2, "%s", string1);
        fprintf(output1, "%s\n", string1);
    }

    fclose(input1);
    fclose(input2);
    fclose(output1);

    return 0;
}