#include <stdio.h>
#define SIZE 500000

int main(int arge, char*argv[]) {
    int n;

    scanf("%d", &n);

    // 1부터 N의 숫자중 K가 빠진 배열
    int partArr[SIZE];
    int lengthOfPartArr = n-1;

    for(int i=0; i < lengthOfPartArr; i++){
        scanf("%d", &partArr[i]);
    }

    // TODO: n과 partArr를 이용하여, K를 구하라
    while(1){
        if(feof(fp)!=0){
            
        }
    }
    char string[255];

    fscanf(fp, "%s", string);
    printf("%s\n", string);
    fclose(fp);
    return 0;
}