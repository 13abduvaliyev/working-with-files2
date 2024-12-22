#include <stdio.h>
#include <string.h> 

int main() {
    
    char word[200];
    FILE *input = fopen("input.txt", "r");
    FILE *output = fopen("output.txt", "w");
    if (input == NULL)
    {
        perror("Faylda bo'sh");
    }
    
    int count = 0, next;
    
    printf("Qatorni kiriting:\n");
    scanf("%d", &next);
    
    while (fgets(word, sizeof(word), input))
    {
        count++;
        if (count != next)
        {
            fprintf(output, "%s\n", word);
            printf("%s\n", word);
        }
    }
    
    fclose(input);
    fclose(output);
}