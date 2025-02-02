#include <stdio.h>

int main()
{
    char File_Name[51];

    printf("File Name\nHere: ");
    scanf("%50s", File_Name);

    if (remove(File_Name) == 0)

    {
        printf("Done\nFile DELETED SUCESSFULLY");
    }

    else
    
    {
        perror("ERROR"); // perror print more information about error cause by.
    }

    getchar();
    getchar();
    return 0;
}