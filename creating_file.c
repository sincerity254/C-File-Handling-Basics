#include <stdio.h>

int main() {
    // WRITE A FILE 

    FILE *pFile = fopen("C:\\Users\\my_file.txt", "w");

    char text[] = "AM GOING TO BE\n AN IT GURU INSHALLAH";

    if(pFile == NULL){
        printf("Error opening file\n");
        return 1;
    }

    fprintf(pFile, "%s", text);
    printf("File was written succesfully\n");

    fclose(pFile);
    
    return 0;

}
