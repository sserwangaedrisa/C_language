#include <stdio.h>
#include <cs50.h>
int main(void){
    FILE*file =fopen("phonebook.csv", "a");
    sting name = get_string("Name: ");
    string contact = get_string("Contact: ");

    fprintf(file, "%s , %s\n", name , contact);
    fclose(file);
}