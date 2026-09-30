#include <stdio.h>
int main()
{
    FILE *file;
    char buffer[100];
    file=fopen("example2.txt","r");
    if(file==NULL)
    {
        printf("File doesn't exist.\n");
    }
    while(fgets(buffer,sizeof(buffer),file)!=NULL)
    {
        puts(buffer);
    }
    fclose(file);
    file=fopen("example1.txt","w");
    if(file==NULL)
    {
        printf("File doesn't exist.\n");
    }
    fprintf(file,"%s",buffer);
    fclose(file);
    return 0;
}