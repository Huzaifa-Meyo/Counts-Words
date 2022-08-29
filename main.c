#include "header.h"

int main(void) 
{
    char poem[100][50];
    int lines = 0;
    int words = 0;
    lines = scanningarray(poem);
    
    for(int i = 0; i < lines; i++)
    { 
        words += wordcount(poem[i], lines); //calculates the number of total words 
    }    
    if(words == 1)
    {
        printf("%d word on ", words);
    }
    else
    {
        printf("%d words on ", words);
    }
    if (lines == 1)
    {
        printf("%d line\n", lines);
    }
    else{
        printf("%d lines\n", lines);
    }
    
    for (int k = 0; k < lines; k++)
    {
        printf("%d ", wordcount(poem[k], lines)); //will print the the word on each line
    }
    printf("\n");
    

    
}

