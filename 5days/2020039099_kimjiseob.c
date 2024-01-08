#include <stdio.h>
#include <math.h>

//수업
int class1(){
    int x, y;
    int result;

    result = 2 > 3 || 6 > 7;
    printf("%d\n", result);

    result = 2 || 3 && 3 > 2;
    printf("%d\n", result);

    result = x = y = 1;
    printf("%d\n", result);

    result = - ++x + y--;
    printf("%d\n", result);

    return 0;
}

int class2(){
    int number;

    printf("정수를 입력하세요 : ");
    scanf("%d", &number);

    if(number > 0){
        printf("양수입니다.\n");
    }

    printf("입력된 값은 %d입니다.",  number);
    
    return 0;
}

int class3(){
    int number;

    printf("정수를 입력하세요 : ");
    scanf("%d", &number);

    if(number < 0){
        number = -number;
    }

    printf("절대값은 %d입니다.",  number);
    
    return 0;
}

int class4(){
    int score;

    printf("점수를 입력하세요 : ");
    scanf("%d", &score);

    if(score > 60){
        printf("합격입니다.\n");
        printf("장학금도 받을 수 있습니다.\n");
    }
    
    return 0;
}

int class5(){
    int number;

    printf("정수를 입력하세요 : ");
    scanf("%d", &number);

    if(number % 2 == 0){
        printf("입력된 정수는 짝수입니다.");
    }
    else{
        printf("입력된 정수는 홀수입니다.");
    }

    
    return 0;
}

int class6(){
    int n, d, result;

    printf("분자를 입력하세요 : ");
    scanf("%d", &n);
    printf("분모를 입력하세요 : ");
    scanf("%d", &d);

    if(d == 0){
        printf("0으로 나눌 수는 없습니다.\n");
    }
    else{
        result = n / d;
        printf("결과는 %d입니다.\n", result);
    }

    return 0;
}

int class7(){
    int year;

    printf("연도를 입력하세요 : ");
    scanf("%d", &year);

    if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0){
        printf("%d년은 윤년입니다.", year);
    }
    else{
        printf("%d년은 윤년이 아닙니다.", year);
    }

    return 0;
}

int class8(){
    char ans1;
    char ans2;
    printf("당신은 충북대 학생입니까(y/n) : ");
    scanf("%c", &ans1);

    printf("당신은 여학생입니까(y/n) : ");
    scanf("\n%c", &ans2);

    if(ans1 == 'y'){
        if(ans2 == 'y'){
            printf("당신은 충북대 여학생입니다.\n");
        }
        else{
            printf("당신은 충북대 남학생입니다.\n");
        }
        
    }
    else{
        if(ans2 == 'y'){
            printf("당신은 타대 여학생입니다.\n");
        }
        else{
            printf("당신은 타대 남학생입니다.\n");
        }
        
    }

    return 0;
}

int class9(){
    int x, y, z;
    int max;

    printf("정수 3개를 입력하세요 : ");
    scanf("%d %d %d", &x, &y, &z);

    if(x > y){
        if(x > z){
            max = x;
        }
        else{
            max = z;
        }
    }
    else{
        if(y > z){
            max = y;
        }
        else{
            max = z;
        }
    }

    printf("최대값은 %d입니다.\n", max);

    return 0;
}

int class10(){
    char ch;

    printf("단일 문자 입력 : ");
    scanf("%c", &ch);

    if(ch >= 'A' && ch <= 'Z'){
        printf("1\n");
    }
    else{
        printf("0\n");
    }

    return 0;
}

int class11(){
    int x = 10;
    int y = 20;
    int max;

    if(x > y){
        max = x;
    }
    else{
        max = y;
    }

    return 0;
}

int class12(){
    int score;

    printf("성적을 입력하세요 : ");
    scanf("%d", &score);

    if(score >= 90){
        printf("A학점\n");
    }
    else if(score >= 80){
        printf("B학점\n");
    }
    else if(score >= 70){
        printf("C학점\n");
    }
    else if(score >= 60){
        printf("D학점\n");
    }
    else{
        printf("F학점\n");
    }

    printf("성적 처리 완료\n");
}


//과제
/*
Q1. 표준입력으로 키와 몸무게를 입력받아, 정상인지 비만인지 출력하는 프로그램을 작성하시오. 
  키에 따른 표준 체중을 구하는 방법은 신장(키)에서 100을 빼고, 그 값에 0.9를 곱하여 표준체중을 구하면 된다. 
*/
int task1(){
    double height;          //키
    double weight;          //몸무게
    double standard;        //표준체중

    printf("키와 몸무게를 입력하세요.\n");
    printf("키 : ");
    scanf("%lf", &height);
    printf("몸무게 : ");
    scanf("%lf", &weight);

    standard = (height - 100) * 0.9;

    if(weight > standard){
        printf("비만입니다.\n");
    }
    else{
        printf("정상합니다.\n");
    }

    return 0;
}

/*
Q2. 사용자로부터 입력받은 두 수의 합과 차를 구하여 출력하여보자. 두 수의 차는 큰 수에서 작은 수를 뺀 것으로 한다. 
*/

int task2(){
    int x, y;
    int num;

    printf("정수를 입력하세요 : ");
    scanf("%d", &x);
    printf("정수를 입력하세요 : ");
    scanf("%d", &y);

    if(x > y){
        num = x - y;
    }

    else{
        num = y - x;
    }

    printf("두 수의 합 : %d\n", x + y);
    printf("두 수의 차 : %d\n", num);

    return 0;
}


/*
Q3. 근로 소득세를 계산하는 프로그램을 작성하여보자. 근로소득세율은 다음 표와 같다.
과세표준                            세율
1000만원 이하                       8%
1000만원 초과 4000만원 이하          17%
4000만원 초과 8000만원 이하          26%
8000만원 초과                       35%
사용자가 자신의 과세 표준 금액을 입력하면 근로 소득세를 계산하여 주는 프로그램을 작성하시오.
*/

int task3(){
    int x;

    int tax;
    printf("과세 표준을 입력하세요(만원단위) :");
    scanf("%d", &x);


    if(x <= 1000){
        tax = x * 8 / 100;
    }
    else if(x > 1000 && x <= 4000){
        tax = x * 17 / 100;
    }
    else if(x > 4000 && x <= 8000){
        tax = x * 26 / 100;
    }
    else{
        tax = x * 35 / 100;
    }

    printf("소득세는 %d만원입니다.", tax);

    return 0;
}

/*
Q4. 절대평가로 학생들의 학점을 계산하는 프로그램을 작성하여 보자. 한 학생에 대하여 중간고사와 기말고사 
두 점수의 평균이 90점 이상(A), 80점 이상(B), 70점 이상(C), 60점 이상(D), 기타는 F학점이다. 
*/

int task4(){
    int score;

    printf("성적을 입력하세요 : ");
    scanf("%d", &score);

    if(score >= 90){
        printf("A학점입니다.\n");
    }
    else if(score >= 80){
        printf("B학점입니다.\n");
    }
    else if(score >= 70){
        printf("C학점입니다.\n");
    }
    else if(score >= 60){
        printf("D학점입니다.\n");
    }
    else{
        printf("F학점입니다.\n");
    }

    return 0;
}

/*
Q5. 이차방정식 ax^2 + bx + c의 근을 계산하는 프로그램을 작성하시오. 

① 사용자에게 이차방정식의 계수 a, b, c를 입력하도록 한다.
② 만약 a가 0이면 근은 -c/b이다.
③ 만약 판별식 b^2 - 4ac가 음수이면 실근은 존재하지 않는다.
④ 위의 조건에 해당되지 않으면 다음과 같은 공식을 이용하여 실근을 구한다.
*/

int task5(){
    float a, b, c;
    float temp;
    float sum1, sum2;

    printf("방정식 ax^2 + bx + c의 근을 계산하는 프로그램입니다.\n");
    printf("a, b, c를 입력하세요.\n");
    printf("a를 입력하세요 : ");
    scanf("%f", &a);
    printf("b를 입력하세요 : ");
    scanf("%f", &b);
    printf("c를 입력하세요 : ");
    scanf("%f", &c);

    temp = (b * b) - (4 * a * c);
    temp = sqrt(temp);

    if(a == 0){
        sum1 = -c / b;
        printf("방정식의 근은 %f입니다.", sum1);
    }
    else if(temp < 0){
        printf("방정식의 실근은 없습니다.");
    }
    else{
        sum1 = (-b + temp) / (a * 2);
        sum2 = (-b - temp) / (a * 2);
        printf("방정식의 근은 %.2f, %.2f입니다.", sum1, sum2);
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
    //class7();
    //class8();
    //class9();
    //class10();
    //class11();
    //class12();

    //과제
    //task1();
    //task2();
    //task3();
    //task4();
    //task5();
    return 0;
}