#include <stdio.h>

#include <string.h>

#include <stdlib.h>

int countWords(char * string) {//take string
    char * words= strtok(string, " ");//split in words to compare
    int count;
    if (words != NULL) {//if the string exists 
        while (words != NULL){//if there is, do this by each word
            count++;//add the word at the counter
           words = strtok(NULL, " ");//and do again to reach all words
        }
    }
    return count;//return the number
}

int main(){
    char *string = malloc(256*sizeof(char));//reserve a space in memory of 256 bytes for each size of a char
    printf("Escribe tu texto aqui:");
    scanf("%[^\n]", string);//this scan the strings
    printf("Numero de palabras:%d\n",countWords(string));
    return 0;
    free(string);
}
