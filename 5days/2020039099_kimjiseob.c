#include <stdio.h>
#include <math.h>

//����
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

    printf("������ �Է��ϼ��� : ");
    scanf("%d", &number);

    if(number > 0){
        printf("����Դϴ�.\n");
    }

    printf("�Էµ� ���� %d�Դϴ�.",  number);
    
    return 0;
}

int class3(){
    int number;

    printf("������ �Է��ϼ��� : ");
    scanf("%d", &number);

    if(number < 0){
        number = -number;
    }

    printf("���밪�� %d�Դϴ�.",  number);
    
    return 0;
}

int class4(){
    int score;

    printf("������ �Է��ϼ��� : ");
    scanf("%d", &score);

    if(score > 60){
        printf("�հ��Դϴ�.\n");
        printf("���бݵ� ���� �� �ֽ��ϴ�.\n");
    }
    
    return 0;
}

int class5(){
    int number;

    printf("������ �Է��ϼ��� : ");
    scanf("%d", &number);

    if(number % 2 == 0){
        printf("�Էµ� ������ ¦���Դϴ�.");
    }
    else{
        printf("�Էµ� ������ Ȧ���Դϴ�.");
    }

    
    return 0;
}

int class6(){
    int n, d, result;

    printf("���ڸ� �Է��ϼ��� : ");
    scanf("%d", &n);
    printf("�и� �Է��ϼ��� : ");
    scanf("%d", &d);

    if(d == 0){
        printf("0���� ���� ���� �����ϴ�.\n");
    }
    else{
        result = n / d;
        printf("����� %d�Դϴ�.\n", result);
    }

    return 0;
}

int class7(){
    int year;

    printf("������ �Է��ϼ��� : ");
    scanf("%d", &year);

    if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0){
        printf("%d���� �����Դϴ�.", year);
    }
    else{
        printf("%d���� ������ �ƴմϴ�.", year);
    }

    return 0;
}

int class8(){
    char ans1;
    char ans2;
    printf("����� ��ϴ� �л��Դϱ�(y/n) : ");
    scanf("%c", &ans1);

    printf("����� ���л��Դϱ�(y/n) : ");
    scanf("\n%c", &ans2);

    if(ans1 == 'y'){
        if(ans2 == 'y'){
            printf("����� ��ϴ� ���л��Դϴ�.\n");
        }
        else{
            printf("����� ��ϴ� ���л��Դϴ�.\n");
        }
        
    }
    else{
        if(ans2 == 'y'){
            printf("����� Ÿ�� ���л��Դϴ�.\n");
        }
        else{
            printf("����� Ÿ�� ���л��Դϴ�.\n");
        }
        
    }

    return 0;
}

int class9(){
    int x, y, z;
    int max;

    printf("���� 3���� �Է��ϼ��� : ");
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

    printf("�ִ밪�� %d�Դϴ�.\n", max);

    return 0;
}

int class10(){
    char ch;

    printf("���� ���� �Է� : ");
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

    printf("������ �Է��ϼ��� : ");
    scanf("%d", &score);

    if(score >= 90){
        printf("A����\n");
    }
    else if(score >= 80){
        printf("B����\n");
    }
    else if(score >= 70){
        printf("C����\n");
    }
    else if(score >= 60){
        printf("D����\n");
    }
    else{
        printf("F����\n");
    }

    printf("���� ó�� �Ϸ�\n");
}


//����
/*
Q1. ǥ���Է����� Ű�� �����Ը� �Է¹޾�, �������� ������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�. 
  Ű�� ���� ǥ�� ü���� ���ϴ� ����� ����(Ű)���� 100�� ����, �� ���� 0.9�� ���Ͽ� ǥ��ü���� ���ϸ� �ȴ�. 
*/
int task1(){
    double height;          //Ű
    double weight;          //������
    double standard;        //ǥ��ü��

    printf("Ű�� �����Ը� �Է��ϼ���.\n");
    printf("Ű : ");
    scanf("%lf", &height);
    printf("������ : ");
    scanf("%lf", &weight);

    standard = (height - 100) * 0.9;

    if(weight > standard){
        printf("���Դϴ�.\n");
    }
    else{
        printf("�����մϴ�.\n");
    }

    return 0;
}

/*
Q2. ����ڷκ��� �Է¹��� �� ���� �հ� ���� ���Ͽ� ����Ͽ�����. �� ���� ���� ū ������ ���� ���� �� ������ �Ѵ�. 
*/

int task2(){
    int x, y;
    int num;

    printf("������ �Է��ϼ��� : ");
    scanf("%d", &x);
    printf("������ �Է��ϼ��� : ");
    scanf("%d", &y);

    if(x > y){
        num = x - y;
    }

    else{
        num = y - x;
    }

    printf("�� ���� �� : %d\n", x + y);
    printf("�� ���� �� : %d\n", num);

    return 0;
}


/*
Q3. �ٷ� �ҵ漼�� ����ϴ� ���α׷��� �ۼ��Ͽ�����. �ٷμҵ漼���� ���� ǥ�� ����.
����ǥ��                            ����
1000���� ����                       8%
1000���� �ʰ� 4000���� ����          17%
4000���� �ʰ� 8000���� ����          26%
8000���� �ʰ�                       35%
����ڰ� �ڽ��� ���� ǥ�� �ݾ��� �Է��ϸ� �ٷ� �ҵ漼�� ����Ͽ� �ִ� ���α׷��� �ۼ��Ͻÿ�.
*/

int task3(){
    int x;

    int tax;
    printf("���� ǥ���� �Է��ϼ���(��������) :");
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

    printf("�ҵ漼�� %d�����Դϴ�.", tax);

    return 0;
}

/*
Q4. �����򰡷� �л����� ������ ����ϴ� ���α׷��� �ۼ��Ͽ� ����. �� �л��� ���Ͽ� �߰����� �⸻��� 
�� ������ ����� 90�� �̻�(A), 80�� �̻�(B), 70�� �̻�(C), 60�� �̻�(D), ��Ÿ�� F�����̴�. 
*/

int task4(){
    int score;

    printf("������ �Է��ϼ��� : ");
    scanf("%d", &score);

    if(score >= 90){
        printf("A�����Դϴ�.\n");
    }
    else if(score >= 80){
        printf("B�����Դϴ�.\n");
    }
    else if(score >= 70){
        printf("C�����Դϴ�.\n");
    }
    else if(score >= 60){
        printf("D�����Դϴ�.\n");
    }
    else{
        printf("F�����Դϴ�.\n");
    }

    return 0;
}

/*
Q5. ���������� ax^2 + bx + c�� ���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. 

�� ����ڿ��� ������������ ��� a, b, c�� �Է��ϵ��� �Ѵ�.
�� ���� a�� 0�̸� ���� -c/b�̴�.
�� ���� �Ǻ��� b^2 - 4ac�� �����̸� �Ǳ��� �������� �ʴ´�.
�� ���� ���ǿ� �ش���� ������ ������ ���� ������ �̿��Ͽ� �Ǳ��� ���Ѵ�.
*/

int task5(){
    float a, b, c;
    float temp;
    float sum1, sum2;

    printf("������ ax^2 + bx + c�� ���� ����ϴ� ���α׷��Դϴ�.\n");
    printf("a, b, c�� �Է��ϼ���.\n");
    printf("a�� �Է��ϼ��� : ");
    scanf("%f", &a);
    printf("b�� �Է��ϼ��� : ");
    scanf("%f", &b);
    printf("c�� �Է��ϼ��� : ");
    scanf("%f", &c);

    temp = (b * b) - (4 * a * c);
    temp = sqrt(temp);

    if(a == 0){
        sum1 = -c / b;
        printf("�������� ���� %f�Դϴ�.", sum1);
    }
    else if(temp < 0){
        printf("�������� �Ǳ��� �����ϴ�.");
    }
    else{
        sum1 = (-b + temp) / (a * 2);
        sum2 = (-b - temp) / (a * 2);
        printf("�������� ���� %.2f, %.2f�Դϴ�.", sum1, sum2);
    }

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
    //class11();
    //class12();

    //����
    //task1();
    //task2();
    //task3();
    //task4();
    //task5();
    return 0;
}