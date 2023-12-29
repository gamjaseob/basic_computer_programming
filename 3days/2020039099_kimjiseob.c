#include <stdio.h>
#include <limits.h>

#define PI 3.141592F
#define Inch 0.393701
// ����1
int class1(){
    int x;
    printf("���� x�� ũ�� : %d\n", sizeof(x));
    printf("char���� ũ�� : %d\n", sizeof(char));
    printf("int���� ũ�� : %d\n", sizeof(int));
    printf("short���� ũ�� : %d\n", sizeof(short));
    printf("long���� ũ�� : %d\n", sizeof(long));
    printf("float���� ũ�� : %d\n", sizeof(float));
    printf("double���� ũ�� : %d\n", sizeof(double));

    return 0;
}

//����2
int class2(){
    short year;
    int sale;
    long total_sale;

    year = 10;
    sale = 200000000;
    total_sale = year * sale;
    printf("total_sale = %d\n", total_sale);

    printf("short���� ũ�� : %d\n", sizeof(short));
    printf("int���� ũ�� : %d\n", sizeof(int));
    printf("long���� ũ�� : %d\n", sizeof(long));

    return 0;
}

//����3
int class3(){
    short s_money = SHRT_MAX;               //�ִ밪���� �ʱ�ȭ
    unsigned short u_money = USHRT_MAX;     //�ִ밪���� �ʱ�ȭ
    
    s_money = s_money + 1;
    printf("s_money = %d\n", s_money);
    u_money = u_money + 1;
    printf("s_money = %d\n", u_money);
    return 0;
}

//����4
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

//����5
int class5(){
    float radius, area, circumference;

    printf("�������� �Է��ϼ��� : ");
    scanf("%f", &radius);

    area = PI * radius * radius;
    circumference = 2 * PI * radius;

    printf("���� ������ : %f\n", radius);
    printf("���� ��  �� : %f\n", area);
    printf("���� ��  �� : %f\n", circumference);
}

//����6
int class6(){
    float fvalue = 1234567890.12345678901234567890;
    double dvalue = 1234567890.12345678901234567890;
    printf("float �� ���� : %30.25f\n", fvalue);
    printf("double�� ���� : %20.25f\n", dvalue);

    return 0;
}
//�Ǽ����� overflow�� +�� INF(���Ѵ�) -�� 0���� ó���Ѵ�.

//����
/*
Q1. ����ڷκ��� �Ҽ��� ǥ�� �������� �Ǽ��� �о ������������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�. 
*/
int task1(){
    double num = 0;         //�Է¿뺯��

    printf("�Ǽ��� �Է����ּ��� : ");
    scanf("%f", &num);

    printf("%e\n", num);
    
    return 0;
}

/*
Q2. �溸���� �︰ �Ŀ� �Ʒ��� ���� �޽����� ����ϰ� �ٽ� �溸���� �︮�� ���α׷��� �ۼ��Ͻÿ�.
*/
int task2(){
    printf("\a");   //\a�� �溸��
    printf("\"ASCII CODE\", 'A', 'B', 'C', \n \\t \\a \\n \n");
    printf("\a");
}

/*
Q3. �Ʒ� ���� ȭ���� �����Ͽ� ���α׷��� �ۼ��Ͻÿ�. (��, 1cm�� 0.393701(inch))
*/
int task3(){
    double num;         //�Է¿� ����

    printf("Q3. ��Ƽ���͸� ��ġ�� ��ȯ�ϴ� ���α׷�\n");
    printf("��Ƽ���͸� �Է��ϼ��� : ");
    scanf("%lf", &num);

    printf("%.2lfcm�� %.2lf��ġ�Դϴ�.", num, num * Inch);
}

/*
Q4. ��a', 'b', 'c'�� �ƽ�Ű �ڵ尪�� 10����, 8����, 16������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
*/
int task4(){
    //���� a
    char a = 'a';
    
    //���
	printf("================================================\n");
	printf("%10s%10s%10s%10s\n", "Alpha","10����","8����","16����");
	printf("================================================\n");
    printf("%10c%10d%10o%10x\n", a, a, a, a);
    a++;
    printf("%10c%10d%10o%10x\n", a, a, a, a);
    a++;
    printf("%10c%10d%10o%10x\n", a, a, a, a);
    return 0;
}

/*
Q5. ���ݱ��� �н��� ������� �̿��Ͽ� 1���� 5������ ������ ���Ͽ� �������� ���������� ȭ�鿡 ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
*/
/*******************************************************************
 ����     ������     ��������
   1         1            1
   2         4            8
   3         9           27
   4        16           64
   5        25          125
********************************************************************/

int task5(){
    int num = 1;            //����

    printf("%10s%10s%10s\n", "����","������","��������");
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
    //����
    //class1();
    //class2();
    //class3();
    //class4();
    //class5();
    //class6();

    //����
    //task1();
    //task2();
    //task3();
    //task4();
    //task5();
    return 0;
}

