/*
 JTSK-320112
 a6_p5.c
 long,danni
 d.long@jacobs-university.de
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fptra, *fptrb, *fptrw;
    int i,n;
    char file[32], buffer[64];
    char ch;
    
    scanf("%d", &n);
    printf("Concating the content of %d files ...\n", n);
    printf("The result is:\n");
    fptrw = fopen("output.txt", "a");
    for(i = 0; i < n; i++)
    {
        file[0] = '\0';
        scanf("%s", file);
        fptrb = fopen(file, "r+t");
        if (!fptrb)
        {
            printf("Failed to open the file!\n");
            exit(0);
        }
        while(!feof(fptrb))
        {
            if(fread(buffer, sizeof(char), 1, fptrb))
            {
                fwrite(buffer, sizeof(char), 1, fptrw);
            }
            else
                break;
        }
        fprintf(fptrw, "\n");
        fptra = fopen(file, "r+t");
        while((ch = getc(fptra)) != EOF)
        {
            putchar(ch);
        }
        printf("\n");
        fclose(fptra);
        fclose(fptrb);
    }
    printf("The result was written into output.txt\n");
    fclose(fptrw);
    
    return 0;
}
