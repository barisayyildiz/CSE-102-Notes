#include <stdio.h>



int main()
{
    
    FILE *filepointer;

    char data[] = "barisayyildiz";

    filepointer = fopen("file.txt", "w");
    fputs(data, filepointer);
    fputs("\n", filepointer);


    fclose(filepointer);
    

}