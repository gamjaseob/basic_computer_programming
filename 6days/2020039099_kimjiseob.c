#include <stdio.h>
#include<stdlib.h>
#include<time.h>

//수업
int class1(){
    char ch;

    printf("문자를 입력하시오:");
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z'){
        printf("%c는 대문자입니다.\n", ch);
    }
    else if (ch >= 'a' && ch <= 'z'){
        printf("%c는 소문자입니다.\n", ch);
    }
    else if (ch >= '0' && ch <= '9'){
        printf("%c는 숫자입니다.\n", ch);
    }
    else{
        printf("%c는 기타문자입니다.\n", ch);
    }
    
    return 0;
}

int class2(){
    char op;
    int x, y;

    printf("수식을 입력하시오:");
    scanf("%d %c%d", &x, &op, &y);
    if (op== '+'){
        printf("%d %c %d= %d\n",x,op,y,x+y);
    }
    else if (op == '-'){
        printf("%d %c %d= %d\n", x, op, y,x-y);
    }
    else if (op == '*'){
        printf("%d %c %d= %d\n", x, op, y,x*y);
    }
    else if (op == '/'){
        printf("%d %c %d= %d\n", x, op, y,x/y);
    }
    else if (op == '%'){
        printf("%d %c %d= %d\n", x, op, y,x%y);
    }

    return 0;
}

int class3() {
    int number;

    printf("숫자를 입력하세요:");
    scanf("%d", &number);

    switch (number) {
        case 0:
            printf("없음\n"); 
            break;
        case 1:
            printf("하나\n");
            break;
        case 2:
            printf("둘\n");
            break;
        default:
            printf("많음\n");
            break;
    }
    
    return 0;
}

int class4(){
    int month, days;
    printf("일수를 알고 싶은 달을 입력하시오:");
    scanf("%d", &month);
    switch (month) {
    case 2:
        days = 28;
        break;
    case 4:

    case 6:
    
    case 9:
    
    case 11:
        days = 30;
        break;
    default:
        days = 31;
    }
    printf("%d월의 일수는 %d입니다.\n", month, days);

    return 0;
}

int class5() {
    int a, b;
    char op;
    printf("수식을 입력하시오:");
    scanf("%d %c %d", &a, &op, &b);

    switch (op) {
        case '+':
            printf("%d %c %d= %d\n",a,op,b,a+b);
            break;
        case '-': 
            printf("%d %c %d= %d\n", a, op, b, a - b);
            break;
        case '*':
            printf("%d %c %d= %d\n", a, op, b, a * b);
            break;
        case '/':
            printf("%d %c %d= %d\n", a, op, b, a / b);
            break;
        case '%':
            printf("%d %c %d= %d\n", a, op, b, a % b);
            break;
        default:
            printf("잘못된 연산자입니다.\n");
    }

    return 0;
}

int class6(){
    int i = 1;
    loop:
        printf("3*%d=%d\n", i, 3 * i);
        i++;

        if (i == 10){
            goto end;
        }

        goto loop;
    
    end:
        return 0;
}

int class7(){
    int meter;
    int i = 1;

    while (i <= 3){
        meter = i * 1609;
        printf("%d마일은 %d미터입니다.\n", i, meter);
        
        i++;
    }

    return 0;
}

int class8(){
    int n;
    int i = 1;

    printf("구구단 중에서 출력하고 싶은 단을 입력하세요:");
    scanf("%d", &n);

    while (i <= 9) {
        printf("%d*%d=%d\n", n, i, n * i);
        i++;
    }
    
    return 0;
}

int class9(){
    int i = 1;
    int sum = 0;

    while (i <= 10) {
        sum += i;   
        i++;
    }
    printf("1부터 10까지의 누적합%d", sum);
    return 0;
}
int class10(){
    int grade = 0;
    int n = 0;
    float sum = 0;
    float avg;

    while (grade >= 0) {
        printf("점수를 입력하세요");
        scanf(" %d",&grade );
        sum += grade;
        n++;
    }
    
    sum -= grade;
    n--;
    avg = sum / n;
    
    printf("전체 평균%.2f", avg);
    return 0;
}

int class11() {
    /*
    for(int i = 1; i <= 10; i++){
        printf("hellow~~\n");
    }
        


    int sum = 0;
    for(int i = 1; i <= 10; i++) {
        sum += i;
    };

    printf("1~10까지의 합:%d\n", sum);
    */
    int n;
    while (1) {
        printf("원하는 단>>");
        scanf("%d", &n);
        for (int i = 1; i < 10; i++) {
            printf("%dx%d=%2d\n", n, i, n * i);
        }

        printf("계속하시겠습니까?(y/n)\n");
        
        char ans;
        scanf("   %c", &ans);

        if (ans == 'n' || ans == 'N')
            break;
        }
        return 0;
}
//과제
/*
Q1. 아래 그림1과 같이 실행되는 가위/바위/보 프로그램을 구현하시오.
*/

int task1(){
    int user;

    printf("가위(1)/바위(2)/보(3) 입력: ");
    scanf("%d", &user);
    srand(time(0));

    int com = rand() % 3 + 1;

    //이하 생략
    if(com == 1){
        switch (user){
        case 1:
            printf("비겼습니다\n");
            break;
        case 2:
            printf("이겼습니다\n");
            break;
        case 3:
            printf("졌습니다\n");
            break;
        
        default:
            break;
        }
        printf("컴퓨터는 가위입니다\n");
    }
    else if(com == 2){
        switch (user){
        case 1:
            printf("졌습니다\n");
            break;
        case 2:
            printf("비겼습니다\n");
            break;
        case 3:
            printf("이겼습니다\n");
            break;
        
        default:
            break;
        }
        printf("컴퓨터는 바위입니다\n");
    }
    else if(com == 3){
        switch (user){
        case 1:
            printf("이겼습니다\n");
            break;
        case 2:
            printf("졌습니다\n");
            break;
        case 3:
            printf("비겼습니다\n");
            break;
        
        default:
            break;
        }
        printf("컴퓨터는 보입니다\n");
    }

    return 0;
}

/*
Q2. 1부터 100까지의 자연수 중에서 3의 배수이면서 동시에 5의 배수인 숫자를 출력하시오.
*/

int task2(){
    for(int i = 0; i < 100; i = i + 3){
        if((i % 5) == 0){
            printf("%d  ", i);
        }
    }

    return 0;
}

/*
Q3. 지금까지 학습한 기법들을 이용하여 1부터 5까지의 정수에 대하여 
제곱값과 세제곱값을 화면에 출력하는 프로그램을 작성하시오. (단, 반복문을 이용하여 구현하시오.)
*/

int task3(){
    int x;
    printf("정  수\t제  곱\t세제곱\n");

    for(int i = 1; i < 6; i++){
        printf("%3d\t%3d\t%3d\n", i, i * i, i * i * i);
    }

    return 0;
}
/*
Q4. 사용자로부터 1부터 50 사이의 숫자를 입력받아서 막대의 길이를 입력받은 숫자만큼 
정상적으로 ‘#’으로 출력하는 프로그램을 10회 실행되도록 작성하시오.
*/

int task4(){
    int x;
    int y = 0;
    while (y < 10){
        printf("1~50까지의 정수를 입력하세요 :");
        scanf("%d", &x);
        if(x >= 1 && x <=50){
            for(int j = 0; j < x; j++){
            printf("#");
        }
        y++;
        }
        else{
            printf("다시 입력하세요\n");
        }
        printf("\n");
    }
   

    return 0;
}

int main(){
    //수업
    // class1();
    // class2();
    // class3();
    // class4();
    // class5();
    // class6();
    // class7();
    // class8();
    // class9();
    // class10();
    // class11();
    
    //과제
    //task1();
    //task2();
    //task3();
    //task4();

    return 0;
}


