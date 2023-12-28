#include <stdio.h>
#include <cs50.h>
#include <string.h>
int main(void) {
    FILE*file =fopen("phonebook.csv", "a");
    string name = get_string("Name: ");
    string contact = get_string("Contact: ");

    fprintf(file, "%s , %s\n", name , contact);
    fclose(file);
}