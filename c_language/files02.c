#include <stdio.h>
int main()
{
    FILE *p = NULL;
    p = fopen("adil.txt", "r");
    char c = fgetc(p);
    printf("The character i read was %c\n", c);

    c = fgetc(p);
    printf("The character i read was %c\n", c);

    char str[7];
    fgets(str, 4, p); // integer here inluded  null character
    printf("The string is %s\n", str);
    fclose(p);



    p = fopen("adil.txt", "r+");
    fputc('o', p);
    fputs("rrrrrrrrrrrrr", p);

    fclose(p);
    return 0;
}