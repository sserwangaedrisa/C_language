#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

// The string.h library gives us access to the string functions like strlen; this counts and returns the length of the input string, This library give us many more inbuilt functions 
// The ctype.h library gives us acces to the comonly used funtions like functions that turn a string to upper case automatically

 int main(void ){
     string name = get_string("What is your name: ");
     // Getting the length of the name
     int s = strlen(name);
     printf("The length of your name is %d\n", s);

     // Manual counting of the length of the string
     int stringlength = 0;
      while (name[stringlength] != '\0')
      {
          stringlength++;
      }
      
     printf("The name length is %d\n", stringlength);
     printf("\n");

     // Making the input uppercase
     // using the ctype library

     string secondname = get_string("What is your second name: ");
     for (int i = 0; i < strlen(secondname); i++) {
         printf("%c", toupper(secondname[i]));
     }
     printf("\n");
     // manual changing of the cases of the inputs.

     for (int i = 0; i < strlen(secondname); i++) {
         printf("%c", secondname[i] - 32);
     }


 }