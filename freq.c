#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    
    char str[100];
    printf("Enter a string:");
    fgets(str,100,stdin);
    
    for (int i = 0; i <strlen(str); i++) {
         str[i] = tolower(str[i]);
    }
    
   
   int count[100] ; 

    
       for(int i = 0; i < strlen(str); i++)
        {
                count[i] = 1;
                for(int j = i+1; j < strlen(str); j++)
                {
                    if(str[i] == str[j]){
                        count[i]++;
                        str[j] = '0';
                    }
                }
                
        } 

        for(int i=0; i<strlen(str); i++)
        {
              if(str[i] != '0' && str[i] != ' ')
              {
                printf("Frequency of %c is %d\n", str[i], count[i]);  
              }  
         
        }
     
    return 0;
}