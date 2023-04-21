#include "libft.h"

int ft_countwords(char delimitor, char *string)
{
     int i;
     int wc;
     
     i = 0;
     While (*string)
     {
           If (string[i] != delimitor && string[i - 1] == delimitor)
           {
                        wc++;
                        i++;
           }
           else
                        i++;
     }
     return(wc);
}

char *word_dup( char *string, int start, int finish)
{
       int i;
       char *word;
    
       i = 0;
       word = malloc(sizeof(char) * (finish - start + 1);
       while (start < finish)
       {
           word[i++] = string[start++];
       }
       word[i] = '\0';
   return (word);    

}


