//fopen append text to file
#include <stdio.h>
int main()
{
    FILE *fp = fopen("file.text", "a");
    fputs("this text was appended\n", fp);
    fclose(fp);
    return 0;
}
