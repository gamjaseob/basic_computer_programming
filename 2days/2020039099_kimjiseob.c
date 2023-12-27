#include <stdio.h>

//수업
int sum(){
    int a = 100;
    int x;          
    int y;
    int sum;

    printf("두 정수 입력 : ");
    scanf("%d %d", &x, &y);

    sum = x + y;
    printf("Sum : %d\n", sum);

    return 0;
}

//과제
/*
M1. 다음은 구입한 물건의 가격과 고객이 지불 금액을 입력받아, 
잔돈을 아래와 같은 화폐 단위로 교환하여 주고자 한다. 
아래와 같이 실행되는 코드를 설계하시오. (※ 단, 물건의 가격은 100원 단위까지만 허용됩니다.)
*/
/******************************************************************
구입 물건 가격>> 23100
고객 지불 금액>> 100000

[[교환 가능한 화폐 단위 ==> 만원/오천원/천원/오백원/백원]]
 만원:7장
 오천원:1장
 천원:1장
 오백원:1개
 백원:4개
******************************************************************/
int change(){
    int price;      //물건 가격
    int money;      //지불한 금액

    int temp;       //계산용 변수

    int man;        //만원
    int ochun;      //오천원
    int chun;       //천원
    int obek;       //오백원
    int bek;        //백원

    printf("물건 가격을 입력하세요 : ");
    scanf("%d", &price);

    printf("손님이 지불한 금액을 입력하세요 : ");
    scanf("%d", &money);

    //거스름돈 계산
    temp = money - price;

    //만원 갯수 계산
    man = temp / 10000;
    temp = temp - (man * 10000);

    //오천원 갯수 계산
    ochun = temp / 5000;
    temp = temp - (ochun * 5000);

    //천원 갯수 계산
    chun = temp / 1000;
    temp = temp - (chun * 1000);

    //오백원 갯수 계산
    obek = temp / 500;
    temp = temp - (obek * 500);

    //백원 갯수 계산
    bek = temp / 100;

    //출력
    printf("[[교환 가능한 화폐 단위 ==> 만원/오천원/천원/오백원/백원]]\n");
    printf("만  원 : %d개\n", man);
    printf("오천원 : %d개\n", ochun);
    printf("천  원 : %d개\n", chun);
    printf("오백원 : %d개\n", obek);
    printf("백  원 : %d개\n", bek);

    return 0;
}

/*
M2. 산술연산자를 이용하여 아래와 같이 실행되는 코드를 설계하시오.
*/
int digit(){
    int num;        //입력용 변수

    int first, second, third; //자릿수 저장용 변수
    
    printf("3자리 변수를 입력하세요 : ");
    scanf("%d" ,&num);

    //3자릿수 계산
    third = num / 100;
    num = num - (third * 100);

    //2자릿수 계산
    second = num / 10;
    num = num - (second * 10);

    //1자릿수 계산
    first = num;

    //출력
    printf("백의 자리 : %d\n", third);
    printf("십의 자리 : %d\n", second);
    printf("일의 자리 : %d\n", first );

    return 0;
}
/*
M3. 사용자가 아스키 코드를 입력하면 그 아스키 코드에 해당하는 단일 문자를 출력하는 프로그램을 작성하자.
*/
int ascii(){
    int num;        //입력용 변수
    
    printf("아스키 코드를 입력하세요 : ");
    scanf("%d", &num);

    printf("입력한 아스키 코드 값은 %c입니다.", num);

    return 0;
}

/*
M4. 아래와 같은 실행결과를 참고하여 프로그램을 작성하시오.
*/
/******************************************************************
================================================
     Alpha    10진수     8진수    16진수
================================================
         a        97      0141      0x61
         b        98      0142      0x62
         c        99      0143      0x63
         d       100      0144      0x64
         e       101      0145      0x65
******************************************************************/
int binary(){
    //a~e 변수
    char a = 'a';
    char b = 'b';
    char c = 'c';
    char d = 'd';
    char e = 'e';
    
    //출력
	printf("================================================\n");
	printf("%10s%10s%10s%10s\n", "Alpha","10진수","8진수","16진수");
	printf("================================================\n");
    printf("%10c%10d%10o%10x\n", a, a, a, a, a);
    printf("%10c%10d%10o%10x\n", b, b, b, b, b);
    printf("%10c%10d%10o%10x\n", c, c, c, c, c);
    printf("%10c%10d%10o%10x\n", d, d, d, d, d);
    printf("%10c%10d%10o%10x\n", e, e, e, e, e);
    return 0;
}
//메인 함수
int main(){
    //실행시키고 싶은 함수 지우기
    //sum();
    //change();
    //digit();
    //ascii();
    //binary();


    return 0;
}