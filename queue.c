#include <stdio.h>
#include <cs50.h>



int main(void){
    int num, insert_num;
    int array[10] = {};
    int count = 0;
    bool boolLoop = true;
    while(boolLoop){
        num = get_int("입력 : ");
        switch(num){
            case 1:
                if (count < 10){
                    insert_num = get_int("삽입할 값 : ");
                    array[count] = insert_num;
                    count++;
                    break;
                }else{
                    printf("Queue가 꽉 찼습니다.\n");
                }
            case 2:
                if (count == 0){
                    printf("큐가 비어있음\n");
                }else{
                    printf("큐에서 삭제됨 : %d\n", array[0]);
                    for (int j=0; j<count; j++){
                        array[j]=array[j+1];
                    }
                    count--;
                }
                break;
            case 3:
                printf("큐 : ");
                for(int i=0; i< count; i++){
                printf("%d ",array[i]);
                }
                printf("\n");
                break;
            case 4:
                boolLoop = false;
                break;
        }

        printf("1. 삽입\n");
        printf("2. 삭제\n");
        printf("3. 조회\n");
        printf("4. 종료\n");
    }
    return 0;


}