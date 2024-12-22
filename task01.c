#include <stdio.h>

int main() {

    FILE *input;

    input = fopen("input.txt", "r");
    int number;
    int count = 0;
    int numbersCount = 0;
    float result;

    if (input != NULL) {

        while (fscanf(input, "%d", &number) == 1) {
            numbersCount++;
            count += number;
        }

        result = (float) count / numbersCount;
    

        printf("O'rtacha arifmetik qiymati: %.2f \n", result);

    }

    fclose(input); 

    return 0;
}