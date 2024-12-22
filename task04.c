#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *input = fopen("input1.txt","r");
    FILE *input2 = fopen("input2txt","r");
    FILE *output = fopen("output.txt","w");

    char line[144];
    char line2[144];
    
    while (!feof(input) && !feof(input2)){
        
        fscanf(input, "%s", line)  && fscanf(input2, "%s", line2);
        fprintf(output,"%s - %s\n",line,line2);
    }
    
    fclose(input);
    fclose(input2);
    fclose(output);

    return 0;
}