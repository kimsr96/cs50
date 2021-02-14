 #include <cs50.h>
 #include <stdio.h>
 #include <string.h>

 int main(void){
     string names[4] = {"EMMA", "RODRIGO", "BRIAN", "DAVID"};


    for (int i=0; i<6; i++)
    {
        if (strcmp(names[i], "EMMA") == 0){
            printf("Found\n");
            return 0;
        }
    }
    printf("NOT FOUND\n");
    return 1;
 }