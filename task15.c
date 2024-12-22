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
    char n;
    int sum = 0, minus = 0, division = 0, sqr = 0, skob_1 = 0, skob_0 = 0;
    while (!feof(input))
    { 
        fscanf(input, "%c", &n);
        switch (n)
        {
        case '+':
            sum++;
            break;
        case '*':
            sqr++;
            break;
        case '-':
            minus++;
            break;
        case '/':
            division++;
            break;
        case '(':
            skob_0++;
            break;
        case ')':
            skob_1++;
            break;
        default:
            break;
        }
    }
    if (skob_0 == skob_1)
    {
        fprintf(output, "+ %d marta\n - %d marta\n / %d marta\n * %d marta\n ()) %d marta\n ", sum, minus, division, sqr, skob_1);
    }
    else if (skob_0 > skob_1)
    {
        fprintf(output, "+ %d marta\n - %d marta\n / %d marta\n * %d marta\n () %d marta va ( %d ta ortiqcha\n ", sum, minus, division, sqr, skob_0, skob_0 - skob_1);
    }
    else
    {
        fprintf(output, "+ %d marta\n - %d marta\n / %d marta\n * %d marta\n () %d marta va ) %d ta ortiqcha\n ", sum, minus, division, sqr, skob_0, skob_1 - skob_0);
    }
}