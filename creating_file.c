#include <stdio.h>

int main() {
    // WRITE A FILE 

    FILE *pFile = fopen("my_file.txt", "w");

    char text[] = "HAKUNA CHA FOREPLAY HAPA\n KUJA KAMA UMEJIDARA";

    if(pFile == NULL){
        printf("Error opening file\n");
        return 1;
    }

    fprintf(pFile, "%s", text);
    printf("File was written succesfully\n");

    fclose(pFile);
    
    return 0;
}