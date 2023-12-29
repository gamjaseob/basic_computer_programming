#include<stdio.h>
#include <limits.h>

//수업
int class1(){
   char ch = 'a';
   ch = ch - 32;
   printf("%c의 대문자는%c입니다.", 'a', ch);

   /*
   printf("%3c%3d\n",ch,ch);
   ch = ch + 32;
   printf("%3c%3d\n", ch, ch);*/
   return 0;
}

int class2() {
   char c;
   
   printf("문자를 입력하시오:");
   scanf("%c", &c);
   printf("입력된 문자는 %c입니다\n", c);

   return 0;
}

int class3() {
   int id, pass;
   printf("아이디와 패스워드를 4개의 숫자로 입력하세요:\n");
   printf("\tid:____\b\b\b\b");
   scanf("%d", &id);
   printf("\tpass:____\b\b\b\b");
   scanf("%d", &pass);
   printf("\t\a입력된 아이디는 \"%d\"이고 패스워드는 \"%d\"입니다.\n", id, pass);

   return 0;
}

int class4(){
   int x = 1;
   int nextX = 0;

   nextX = ++x;
   printf("nextX = %d, x = %d\n", nextX, x);
   
   nextX = x++;
   printf("nextX = %d, x = %d\n", nextX, x);
   
   nextX = --x;
   printf("nextX = %d, x = %d\n", nextX, x);
   
   nextX = x--;
   printf("nextX = %d, x = %d\n", nextX, x);

   return 0;
}

int class5(){
   int x, y;

   x = 1;
   printf("수식 x + 1의 값은 %d\n", x + 1);
   printf("수식 y = x + 1의 값은 %d\n", y = x + 1);
   printf("수식 y = 10 + (x = 2 + 7)의 값은 %d\n", y = 10 + (x = 2 + 7));
   printf("수식 y = x = 3의 값은 %d\n", y = x = 3);

   return 0;
}

int class6(){
   int x = 10;
   int y = 10;
   int z = 33;

   x += 1;        //x = x + 1
   y *= 2;        //y = y * 2

   z %= x + y;    //z = z % (x + y)

   printf("x = %d, y = %d, z = %d", x, y, z);

   return 0;
}

int class7(){
   int x, y;

   printf("두 개의 정수를 입력하세요 : ");
   scanf("%d %d", &x, &y);

   printf("x == y의 결과값 : %d\n", x == y);
   printf("x != y의 결과값 : %d\n", x != y);
   printf("x < y의 결과값 : %d\n", x > y);
   printf("x > y의 결과값 : %d\n", x < y);
   printf("x <= y의 결과값 : %d\n", x >= y);
   printf("x >= y의 결과값 : %d\n", x <= y);

   return 0;
}

int class8(){
   int x, y;

   printf("두 개의 정수를 입력하세요 : ");
   scanf("%d %d", &x ,&y);

   printf("%d && %d의 결과값 : %d\n", x, y, x && y);
   printf("%d || %d의 결과값 : %d\n", x, y, x || y);
   printf("!%d의 결과값 : %d\n", x, !x);

   return 0;
}

int class9(){
   int year, result;

   printf("연도를 입력하세요 : ");
   scanf("%d", &year);

   result = (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;
   printf("result = %d\n", result);
}

int class10(){
   int x, y;

   printf("첫번째 수 : ");
   scanf("%d", &x);

   printf("두번째 수 : ");
   scanf("%d", &y);

   printf("큰  수 = %d\n", (x > y) ? x : y);
   printf("작은수 = %d\n", (x < y) ? x : y);
}

//과제
/*
Q1. 조건연산자를 이용하여 사용자로부터 받은 세 개의 정수 중에서 가장 큰 수를 출력하시오.
*/
int task1(){
   int num1, num2, num3;      //입력용 변수

   int max = 0;

   printf("숫자 3개를 입력하세요 : ");
   scanf("%d %d %d", &num1, &num2, &num3);

   max = (num1 > num2 ? num1 : num2) > num3 ? (num1 > num2 ? num1 : num2) : num3;
   
   printf("가장 큰 수는 %d입니다.", max);
   return 0;
}

/*
Q2. 입력받은 하나의 문자가 알파벳 대문자이면 1을 아니면 0을 출력하는 프로그램을 작성하시오.
*/
int task2(){
   char c = 0;
   char alpha;

   printf("문자를 입력하세요 : ");
   scanf("%c", &c);

   alpha = c > 96 ? 0 : 1;

   printf("%d", alpha);
   return 0;
}

/*
Q3. 키보드(표준입력)로 키와 몸무게를 입력받아, 정상인지 비만인지 출력하는 프로그램을 작성하시오. (조건연산자 활용) 
    표준 체중 계산 공식: (신장(키) - 100) * 0.9 
*/
int taks3(){
   double height;          //키
   double weight;          //몸무게
   double standard;        //표준체중

   printf("키와 몸무게를 입력하세요.\n");
   printf("키 : ");
   scanf("%lf", &height);
   printf("몸무게 : ");
   scanf("%lf", &weight);
   
   standard = (height - 100) * 0.9;
   
   weight > standard ? printf("비만입니다.\n") : printf("정상입니다.\n");
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
   //과제
   //task1();
   //task2();
   //taks3();

   return 0;
}