#include <stdio.h>

int i;

int main(void){
    int arr[5]={1,2,3,4,5};
    int n = sizeof(arr)/sizeof(int);

    for(i=0; i<n; i++){
        printf("%d\t", *(arr+i));
    }
}