#include <stdio.h>
#define MAX 40
// USE fprint() fscanf() rewind()
int main()
{
    FILE *fp;
    char words[MAX];
    fp = fopen("demo.txt","r+");
    if(fp == NULL)
    {
        fprintf(stdout,"Can't open \"words\" file.");
        exit(1); // exit whit error
    }

    puts("File contents: ");
    rewind(fp);
    while(fscanf(fp,"%s",words) == 1)
    {
        puts(words);

    }

    if(fclose(fp) != 0)
    {
        fprintf(stderr,"Error closing file\n");
    }





    return 0;
}
