#include <stdio.h>

void main(){

    int num;

    int i;

    int sum = 0 ;

    printf("10자리 숫자를 입력하세요 : ");

    scanf("%d", &num);

    if(num < 0) //num이 음수일 경우 양수로

        num = -num;

    for(i=0;i<10;i++)

    {

        sum += num%10; // 10으로 나눠서 나머지를 sum에 입력

        num = num /10; //맨 뒤에 자리수를 없앤다

    }

    printf("결과 : %d\n",sum);

}