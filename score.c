#include <stdio.h>
#include <cs50.h>



int main(void){
    int num;
    printf("학점 프로그램\n");
    printf("종료를 원하면 '999' 를 입력\n");
    printf("[학점 테이블]\n");
    printf("점수: 95 90 85 80 75 70 65 60 0\n");
    printf("학점: A+ A  B+ B  C+ C  D+ D  F\n");

    while(1){
        num = get_int("성적을 입력하세요 (0 ~ 100) : ");

        if (num==999)
            break;
        else if (num<60)
            printf("학점은 F입니다.\n");
        else if (num>=60 && num<65)
            printf("학점은 D입니다.\n");
        else if (num>=65 && num<70)
            printf("학점은 D+입니다.\n");
        else if (num>=70 && num<75)
            printf("학점은 C입니다.\n");
        else if (num>=75 && num<80)
            printf("학점은 C+입니다.\n");
        else if (num>=80 && num<85)
            printf("학점은 B입니다.\n");
        else if (num>=85 && num<90)
            printf("학점은 B+입니다.\n");
        else if (num>=90 && num<95)
            printf("학점은 A입니다.\n");
        else if (num>=95 && num<=100)
            printf("학점은 A+입니다.\n");
        else
            printf("*** %d 성적을 올바르게 입력하세요. 범위는 0 ~ 100 입니다. \n",num);
    }
    return 0;


}