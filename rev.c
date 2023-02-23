#include <stdio.h>  
#include <string.h>  
   
reverse()  
{  
    char string[] = "Dream big";  
    //Stores the reverse of given string  
    char reversedStr[strlen(string)];  
    int j = 0;  
      
    //Iterate through the string from last and add each character to variable reversedStr  
    for(int i = strlen(string)-1; i >= 0; i--){  
        reversedStr[j++] = string[i];  
    }  
    reversedStr[j] = '\0';  
      
    printf("Original string: %s", string);  
    //Displays the reverse of given string  
    printf("\nReverse of given string: %s", reversedStr);  
   
 // return 0;  
}  
