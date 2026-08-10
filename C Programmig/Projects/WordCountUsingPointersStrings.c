#include<stdio.h>
#include<ctype.h>
int main(){
    char str[200];
    char *ptr;
    int words=0;
    printf(Enter a Sentence: );
    fgets(str, sizeof(str), stdin);
    ptr = str;
    while(*ptr != '\0'){
        if(isspace(*ptr)){
            words++;
        }
        ptr++;
    }
    printf("\n---- Word Counter----\n");
    printf("Sentence: %s", str);
    printf("Number of words: %d\n", words);
    return 0;
}