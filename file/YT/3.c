#include<stdio.h>
int main()
{
    FILE *fp = fopen("file.text", "r");
    char buffer[15];
    while(fgets(buffer, 15, fp) != NULL)
    {
        printf("%s\n", buffer);
    }
    fclose(fp);

    return 0;
}
