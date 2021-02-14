#include <stdio.h>

int main(void){
    int list[3];

    if(list==NULL)
    {
        return 1;
    }

    list[0] = 1;
    list[1] = 2;
    list[2] = 3;

    int *tmp = malloc(4*sizeof(int));
    if(tmp == NULL)
    {
        return 1;
    }

    for(int i=0; i<3; i++){
        printf("%i\n", list[i]);
    }
}