#include<stdio.h>

int main() {
    FILE *input = fopen("input.txt", "r");
    FILE *output = fopen("output.txt", "w");

    if (input == NULL)
    {
        perror("Fayl bo'sh");
        
        return 1;
    }

    int number; 
    int s = 0;
    char number1[20];
    while (!feof(input))
    {
        fscanf(input, "%d", &number);
        for (int i = 1; i <= number; i++)
        {
            s += i;
            if (i == 1)
            {
                fprintf(output, "%d", i);
            } else
            {
                fprintf(output, "+ %d", i);
            }
        }
        fprintf(output, "= %d\n", s);
        
    }
    
    
    

}