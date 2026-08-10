#include<stdio.h>
int main(){
    FILE *file;
    char ch;
    int lines=0;
    file=fopen("file.txt","r");
    if(file==NULL){
        printf("Error opening file!\n");
        return 1;
    }
    while((ch=fgetc(file))!=EOF){
        if(ch=='\n'){
            lines++;
        }
    }
    fclose(file);
    printf("Number of lines in the file: %d\n",lines);
    return 0;
}