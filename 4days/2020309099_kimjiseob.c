#include<stdio.h>
#include <limits.h>

//����
int class1(){
   char ch = 'a';
   ch = ch - 32;
   printf("%c�� �빮�ڴ�%c�Դϴ�.", 'a', ch);

   /*
   printf("%3c%3d\n",ch,ch);
   ch = ch + 32;
   printf("%3c%3d\n", ch, ch);*/
   return 0;
}

int class2() {
   char c;
   
   printf("���ڸ� �Է��Ͻÿ�:");
   scanf("%c", &c);
   printf("�Էµ� ���ڴ� %c�Դϴ�\n", c);

   return 0;
}

int class3() {
   int id, pass;
   printf("���̵�� �н����带 4���� ���ڷ� �Է��ϼ���:\n");
   printf("\tid:____\b\b\b\b");
   scanf("%d", &id);
   printf("\tpass:____\b\b\b\b");
   scanf("%d", &pass);
   printf("\t\a�Էµ� ���̵�� \"%d\"�̰� �н������ \"%d\"�Դϴ�.\n", id, pass);

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
   printf("���� x + 1�� ���� %d\n", x + 1);
   printf("���� y = x + 1�� ���� %d\n", y = x + 1);
   printf("���� y = 10 + (x = 2 + 7)�� ���� %d\n", y = 10 + (x = 2 + 7));
   printf("���� y = x = 3�� ���� %d\n", y = x = 3);

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

   printf("�� ���� ������ �Է��ϼ��� : ");
   scanf("%d %d", &x, &y);

   printf("x == y�� ����� : %d\n", x == y);
   printf("x != y�� ����� : %d\n", x != y);
   printf("x < y�� ����� : %d\n", x > y);
   printf("x > y�� ����� : %d\n", x < y);
   printf("x <= y�� ����� : %d\n", x >= y);
   printf("x >= y�� ����� : %d\n", x <= y);

   return 0;
}

int class8(){
   int x, y;

   printf("�� ���� ������ �Է��ϼ��� : ");
   scanf("%d %d", &x ,&y);

   printf("%d && %d�� ����� : %d\n", x, y, x && y);
   printf("%d || %d�� ����� : %d\n", x, y, x || y);
   printf("!%d�� ����� : %d\n", x, !x);

   return 0;
}

int class9(){
   int year, result;

   printf("������ �Է��ϼ��� : ");
   scanf("%d", &year);

   result = (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;
   printf("result = %d\n", result);
}

int class10(){
   int x, y;

   printf("ù��° �� : ");
   scanf("%d", &x);

   printf("�ι�° �� : ");
   scanf("%d", &y);

   printf("ū  �� = %d\n", (x > y) ? x : y);
   printf("������ = %d\n", (x < y) ? x : y);
}

//����
/*
Q1. ���ǿ����ڸ� �̿��Ͽ� ����ڷκ��� ���� �� ���� ���� �߿��� ���� ū ���� ����Ͻÿ�.
*/
int task1(){
   int num1, num2, num3;      //�Է¿� ����

   int max = 0;

   printf("���� 3���� �Է��ϼ��� : ");
   scanf("%d %d %d", &num1, &num2, &num3);

   max = (num1 > num2 ? num1 : num2) > num3 ? (num1 > num2 ? num1 : num2) : num3;
   
   printf("���� ū ���� %d�Դϴ�.", max);
   return 0;
}

/*
Q2. �Է¹��� �ϳ��� ���ڰ� ���ĺ� �빮���̸� 1�� �ƴϸ� 0�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
*/
int task2(){
   char c = 0;
   char alpha;

   printf("���ڸ� �Է��ϼ��� : ");
   scanf("%c", &c);

   alpha = c > 96 ? 0 : 1;

   printf("%d", alpha);
   return 0;
}

/*
Q3. Ű����(ǥ���Է�)�� Ű�� �����Ը� �Է¹޾�, �������� ������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�. (���ǿ����� Ȱ��) 
    ǥ�� ü�� ��� ����: (����(Ű) - 100) * 0.9 
*/
int taks3(){
   double height;          //Ű
   double weight;          //������
   double standard;        //ǥ��ü��

   printf("Ű�� �����Ը� �Է��ϼ���.\n");
   printf("Ű : ");
   scanf("%lf", &height);
   printf("������ : ");
   scanf("%lf", &weight);
   
   standard = (height - 100) * 0.9;
   
   weight > standard ? printf("���Դϴ�.\n") : printf("�����Դϴ�.\n");
   return 0;
}

int main(){
   //����
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
   //����
   //task1();
   //task2();
   //taks3();

   return 0;
}