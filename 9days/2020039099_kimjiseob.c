#include <stdio.h>

//함수
int square(int n);
int get_max(int x, int y);
int get_integer();
int factorial(int n);
int combination(int n, int r);
int sub1();
int sub2();

//수업
int class1(){
    int result;

    for(int i = 0; i < 5; i++){
        result = square(i);
        printf("result : %d\n", result);
    }

    return 0;
}

int class2(){
    int x, y;
    int result;

    printf("두 정수를 입력하세요 : ");
    scanf("%d %d", &x, &y);
    result = get_max(x, y);

    printf("%d가 더 큽니다.", result);

    return 0;
}

int class3(){
    int a, b;

    a = get_integer();
    b = get_integer();

    printf("C(%d, %d) = %d", a, b, combination(a, b));

    return 0;
}

int class4(){
    sub2();

    return 0;
}

//과제
/*
Q1. 아래 그림1과 같이 실행되도록 프로그램을 설계하시오. (단, 사용자정의함수를 활용하시오.)
*/
int divisor(){
    int n;
    printf("정수를 입력하세요 : ");
    scanf("%d", &n);
    return 0;
}

int prime(){

    return 0;
}

int task1(){
    int n;
    while(1){
        printf("(1) 약수 출력 (2) 소수 판단 (3) 종료 메뉴 선택 : ");
        scanf("%d", &n);
        switch(n){
            case 1:

                break;
            case 2:

                break;
            case 3:

                break;
            default:
                printf("1~3사이의 값을 입력하세요.\n")
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
    
    //과제
    tesk1();
    return 0;
}


int square(int n){
    return n * n; 
}

int get_max(int x, int y){
    if(x > y){
        return x;
    }
    else{
        return y;
    }
}

int get_integer(){
    int n;

    printf("정수를 입력하세요 : ");
    scanf("%d", &n);
    
    return n;
}

int factorial(int n){
    int result;

    for(int i = 0; i < n; i++){
        result *= (i + 1);
    }
    
    return result;
}

int combination(int n, int r){
    return (factorial(n) / factorial(r) * factorial(n - r));
}

int sub1(){
    int q = 10;   
    
    return 0;
}

int sub2(){
    int q = 20;
    printf("q : %d", q);

    return 0;
}