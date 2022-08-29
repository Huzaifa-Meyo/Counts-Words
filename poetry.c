#include "header.h"

int scanningarray(char array[100][50]);
int wordcount(char poem[], int lines);

int scanningarray(char array[100][50])
{   
    printf("This program will count the words in the poem\n");
    printf("Enter each line of poem in new line and to stop enter '.' \n");
    int i = 0;
    do 
    {
        fgets(array[i], 50, stdin);
        array[i][strlen(array[i])-1] = '\0';   
        i++;
    }while (array[i -1][0] != '.');  //will stop scanning after '.' is entered

    return i - 1; 
}

int wordcount(char poem[], int lines)
{
    char *newp = poem; 
    
    int wordscount = 0;

    while (*newp) 
    {
        if (*newp == ' ') 
        {
            while (*newp == ' ') //will still continue with multiple space
            { 
                newp++;
            }
            wordscount++;
        }    
        else 
        {
            newp++;
        }
         
    }
    //newp = (char*)realloc(newp, sizeof(char));
    //free(newp); // reallocating the array 
    return wordscount + 1;    
    
}