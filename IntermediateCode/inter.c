//E10 intermediate code generation
#include <stdio.h>
#include <string.h>
char op[2], arg1[5], arg2[5], result[5];
void main()
{
    FILE *fp1;
    fp1 = fopen("input.txt", "r");
    while (!feof(fp1))
    {

        fscanf(fp1, "%s%s%s%s", op, arg1, arg2, result);
        printf("\nMOV R0,%s", arg1);
        if (strcmp(op, "+") == 0)
        {
            printf("\nADD R0,%s", arg2);
        }
        else if (strcmp(op, "*") == 0)
        {

            printf("\nMUL R0,%s", arg2);
        }
        else if (strcmp(op, "-") == 0)
        {

            printf("\nSUB R0,%s", arg2);
        }
        else if (strcmp(op, "/") == 0)
        {

            printf("\nDIV R0,%s", arg2);
        }
        else if (strcmp(op, "=") != 0) // if operator is invalid print 
        {
            printf("Error");
            return ;
        }
        printf("\nMOV %s,R0", result);
    }
    printf("\n");
    fclose(fp1);
}
