#include <stdio.h>  
#include <stdlib.h>
#include <string.h>


int c;

char* lib[9] = { "auto", "break", "char", "case", "const" ,"/"};
char str[1000];
char buffer[300];
FILE *fp;

int main(){

    c = 0;

    fp = fopen("read.txt", "r");

    if (fp == NULL){
        perror("Error in reading file");
    }

    if (fp != NULL){
        for (int j = 0; j < 5; j++){
            while (fgets(str, sizeof(buffer), fp) != NULL){
                if (strstr(str, lib[j]) != NULL) {
                    c++;
                }
            }
        }
        printf("%d", c);
    }
}