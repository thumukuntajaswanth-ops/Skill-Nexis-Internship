#include<stdio.h>
int main(){
    FILE  *file;
    char filename[100];
    file=fopen("file.txt","a");
    if(file==NULL){ 
        printf("Error opening file!\n");
        return 1;
    }
    printf("Enter the text to append to the file: ");
    getchar(); // To consume the newline character left by previous input
    fgets(filename, sizeof(filename), stdin);
    fprintf(file,"%s",filename);
    fclose(file);
    printf("Text appended to the file successfully.\n");
    return 0;
}