//fopen creat text file
#include<stdio.h>
int main()
{
    FILE *fp;
    fp= fopen("file.text", "w");
    fprintf(fp, "this file was written by fprintf.\nDisability is not inability.\n");
    fputs("this file was written by fprintf.\nOnce a leader always a leader.",fp);
    fclose(fp);
    return 0;
}
