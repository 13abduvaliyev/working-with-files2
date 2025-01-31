#include<stdio.h>

int main() {

    FILE* input = fopen("input.txt", "r");
    FILE* output = fopen("output.txt", "w");

    if (input == NULL)
    {
        perror("Fayl topilmadi!");
        
        return 1;
    }
    int number1, number2, s;
    char n;

    while (!feof(input))
    {
        fscanf(input, "%d %c %d",&number1, &n, &number2);
        switch (n)
        {
        case '+':
            fprintf(output, "%d %c %d = %d\n", number1, n, number2, number1 + number2);
            break;
        case '*':
            fprintf(output, "%d %c %d = %d\n", number1, n, number2, number1 * number2);
            break;
        case '/':
            fprintf(output, "%d %c %d = %.2f\n", number1, n, number2, (float)number1 / number2);
            break;
        case '-':
            fprintf(output, "%d %c %d = %d\n", number1, n, number2, number1 - number2);
            break;
        default:
            break;
        }
    }
    
    fclose(input);
    fclose(output);

    return 0;
}