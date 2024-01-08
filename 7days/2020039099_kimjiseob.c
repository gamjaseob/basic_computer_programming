#include <stdio.h>
//수업
//do-while 문 기초
int class1(){
    int sum = 0;
    int i = 1;

    // while(i <= 10){
    //     sum += i;
    //     i++;
    // }

    do{
        sum += i;
        i++;
    }while(i <= 10);
    
    printf("%d", sum);
    
    return 0;
}

//do-while문 조건달기
int class2(){
    int i = 0;

    do{
        printf("1---새로만들기\n");
        printf("2---파일  열기\n");
        printf("하나를 선택하세요 : ");

        scanf("%d", &i);
    }while(i != i || i != 2);

    return 0;
}

//5 * 10 별 그리기
int class3(){
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 10; j++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

//12345 별 그리기
int class4(){
    int i;

    for(i = 1; i < 100; i++){
        printf("%d\n", i);
        if(i == 5){
            break;
        }
    }

    return 0;
}

int class5(){
    int x;

    for(;;){
        scanf("%d", &x);
        if(x < 0){
            break;
        }
        printf("x : %d\n", x);
    }


    return 0;
}

int class6(){
    char c;

    while(1){
        printf("소문자를 입력하세요 : ");
        scanf(" %c", &c);

        if(c >= 'a' && c <= 'z'){
            c -= 32;
            printf("변환된 대문자는 %c입니다.\n", c);
        }
        else if(c == 'Q'){
            break;
        }
        else{
            printf("소문자가 아닙니다.\n");
        }
    }

    return 0;
}
/*
마일 계산 while문
*/
int task1(){
    int meter;
    int i = 1;
    meter = 1 * 1609;
    while(i < 4){
        printf("%d 마일은 %d미터입니다.\n", i, meter);
        i++;
    }
    

    return 0;
}

/*
구구단 출력 반복문
*/
int task2(){
    int n;
    int i = 1;

    printf("출력하고 싶은 구구단을 입력하세요 : ");
    scanf("%d", &n);

    while(i < 10){
        printf("%2d * %2d = %2d\n", n, i, n * i);
        i++;
    }

    return 0;
}

/*
숫자 합계산
*/
int task3(){
    int i = 1;
    int sum = 0;

    while(i <= 1000){
        sum += i;
        i++;
    }

    printf("합은 %d입니다.\n", sum);
    
    return 0;
}

/*
성적 프로그램 구현
*/
int task4(){
    int n = 0;
    int grade = 0;
    float sum = 0;
    float average;

    printf("성적 입력을 종료하려면 음수를 입력하시오 \n");

    while(grade >= 0){
        printf("성적을 입력하시오 : ");
        scanf("%d", &grade);

        sum += grade;
        n++;
    }

    sum = sum - grade;
    n--;

    average = sum / n;
    printf("성적의 평균은 %f입니다.\n", average);

    return 0;
}

/*
두 수의 최대 공약수 구하기
*/
int task5(){
    int x, y, r;

    printf("두 개의 정수를 입력하시오(큰 수, 작은 수):");
    scanf("%d %d", &x, &y);

    while(y != 0){
        r = x % y;
        x = y;
        y = r;
    }
    printf("최대 공약수는 %d입니다. \n", x);

    return 0;
}

/*
for문 펙토리얼
*/

int task6(){
    long fact = 1;
    int i, n;

    printf("정수를 입력하세요 : ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++){
        fact = fact * i;
    }

    printf("%d!은 %d입니다.\n", n, fact);

    return 0;
}

int task7(){
    int i;

    for(i = 1; i < 100; i++){
        printf("%d\n", i);
        if(i == 5){
            break;
        }
    }

    return 0;
}
int main(){
    //수업
    //class1();
    //class2();
    //class3();
    //class4();
    //class5();
    //class6();

    //과제 
    //task1();
    //task2();
    //task3();
    //task4();
    //task5();
    //task6();
    //task7();
    
    return 0;
}