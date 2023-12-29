#include <stdio.h>
#include <limits.h>

#define PI 3.141592F
#define Inch 0.393701
// 수업1
int class1(){
    int x;
    printf("변수 x의 크기 : %d\n", sizeof(x));
    printf("char형의 크기 : %d\n", sizeof(char));
    printf("int형의 크기 : %d\n", sizeof(int));
    printf("short형의 크기 : %d\n", sizeof(short));
    printf("long형의 크기 : %d\n", sizeof(long));
    printf("float형의 크기 : %d\n", sizeof(float));
    printf("double형의 크기 : %d\n", sizeof(double));

    return 0;
}

//수업2
int class2(){
    short year;
    int sale;
    long total_sale;

    year = 10;
    sale = 200000000;
    total_sale = year * sale;
    printf("total_sale = %d\n", total_sale);

    printf("short형의 크기 : %d\n", sizeof(short));
    printf("int형의 크기 : %d\n", sizeof(int));
    printf("long형의 크기 : %d\n", sizeof(long));

    return 0;
}

//수업3
int class3(){
    short s_money = SHRT_MAX;               //최대값으로 초기화
    unsigned short u_money = USHRT_MAX;     //최대값으로 초기화
    
    s_money = s_money + 1;
    printf("s_money = %d\n", s_money);
    u_money = u_money + 1;
    printf("s_money = %d\n", u_money);
    return 0;
}

//수업4
int class4(){
    int x = 10;
    int y = 010;
    int z = 0X10;

    printf("x = %d\n", x);
    printf("y = %d\n", y);
    printf("z = %d\n", z);
    printf("y = %#o\n", y);
    printf("z = %#x\n", z);

    return 0;
}

//수업5
int class5(){
    float radius, area, circumference;

    printf("반지름을 입력하세요 : ");
    scanf("%f", &radius);

    area = PI * radius * radius;
    circumference = 2 * PI * radius;

    printf("원의 반지름 : %f\n", radius);
    printf("원의 면  적 : %f\n", area);
    printf("원의 둘  래 : %f\n", circumference);
}

//수업6
int class6(){
    float fvalue = 1234567890.12345678901234567890;
    double dvalue = 1234567890.12345678901234567890;
    printf("float 형 변수 : %30.25f\n", fvalue);
    printf("double형 변수 : %20.25f\n", dvalue);

    return 0;
}
//실수형은 overflow시 +는 INF(무한대) -는 0으로 처리한다.

//과제
/*
Q1. 사용자로부터 소수점 표기 형식으로 실수를 읽어서 지수형식으로 출력하는 프로그램을 작성하시오. 
*/
int task1(){
    double num = 0;         //입력용변수

    printf("실수를 입력해주세요 : ");
    scanf("%f", &num);

    printf("%e\n", num);
    
    return 0;
}

/*
Q2. 경보음이 울린 후에 아래와 같은 메시지를 출력하고 다시 경보음이 울리는 프로그램을 작성하시오.
*/
int task2(){
    printf("\a");   //\a는 경보음
    printf("\"ASCII CODE\", 'A', 'B', 'C', \n \\t \\a \\n \n");
    printf("\a");
}

/*
Q3. 아래 실행 화면을 참고하여 프로그램을 작성하시오. (단, 1cm는 0.393701(inch))
*/
int task3(){
    double num;         //입력용 변수

    printf("Q3. 센티미터를 인치로 변환하는 프로그램\n");
    printf("센티미터를 입력하세요 : ");
    scanf("%lf", &num);

    printf("%.2lfcm은 %.2lf인치입니다.", num, num * Inch);
}

/*
Q4. ‘a', 'b', 'c'의 아스키 코드값을 10진수, 8진수, 16진수로 출력하는 프로그램을 작성하시오.
*/
int task4(){
    //변수 a
    char a = 'a';
    
    //출력
	printf("================================================\n");
	printf("%10s%10s%10s%10s\n", "Alpha","10진수","8진수","16진수");
	printf("================================================\n");
    printf("%10c%10d%10o%10x\n", a, a, a, a);
    a++;
    printf("%10c%10d%10o%10x\n", a, a, a, a);
    a++;
    printf("%10c%10d%10o%10x\n", a, a, a, a);
    return 0;
}

/*
Q5. 지금까지 학습한 기법들을 이용하여 1부터 5까지의 정수에 대하여 제곱값과 세제곱값을 화면에 출력하는 프로그램을 작성하시오.
*/
/*******************************************************************
 정수     제곱값     세제곱값
   1         1            1
   2         4            8
   3         9           27
   4        16           64
   5        25          125
********************************************************************/

int task5(){
    int num = 1;            //정수

    printf("%10s%10s%10s\n", "정수","제곱값","세제곱값");
    printf("%10d%10d%10d\n", num, num * num, num * num * num);
    num++;
    printf("%10d%10d%10d\n", num, num * num, num * num * num);
    num++;
    printf("%10d%10d%10d\n", num, num * num, num * num * num);
    num++;
    printf("%10d%10d%10d\n", num, num * num, num * num * num);
    num++;
    printf("%10d%10d%10d\n", num, num * num, num * num * num);
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
    return 0;
}

