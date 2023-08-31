#include <stdio.h>
int main()
{
    FILE *fptr;

    // Create a file on your computer (filename.txt)
    // fptr = fopen("filename.txt", "w");  

    // create a file and append the data.
    // fptr = fopen("filename.txt", "a");
    // fprintf(fptr,"Hello!  \n");
    // fprintf(fptr,"Welcome to  my World. \n");

    // Reading a data
    // Create a file on your computer (filename.txt)
    fptr = fopen("filename.txt", "r");
    char readData[100];
    if (fptr!=NULL){
        while(fgets(readData,100,fptr)){
            printf("%s",readData);
        }
    }else{
        printf("Unable to open the file.");
    }
    remove("filename.txt");

    // Close the file
    fclose(fptr);
    return 0;
}