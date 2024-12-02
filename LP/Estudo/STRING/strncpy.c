#include<stdio.h>
#include<string.h>

int main (void){

    char string[10]="qwertyuio";

    char aSliceString[50];

    strncpy(aSliceString,string,5);
   // aSliceString[5]='\0'; //tem que modificar a string

    printf("aSliceString: %s \n",aSliceString);

    return 0;
}