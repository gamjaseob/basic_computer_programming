#include <stdio.h>
//����
//do-while �� ����
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

//do-while�� ���Ǵޱ�
int class2(){
    int i = 0;

    do{
        printf("1---���θ����\n");
        printf("2---����  ����\n");
        printf("�ϳ��� �����ϼ��� : ");

        scanf("%d", &i);
    }while(i != i || i != 2);

    return 0;
}

//5 * 10 �� �׸���
int class3(){
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 10; j++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

//12345 �� �׸���
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
        printf("�ҹ��ڸ� �Է��ϼ��� : ");
        scanf(" %c", &c);

        if(c >= 'a' && c <= 'z'){
            c -= 32;
            printf("��ȯ�� �빮�ڴ� %c�Դϴ�.\n", c);
        }
        else if(c == 'Q'){
            break;
        }
        else{
            printf("�ҹ��ڰ� �ƴմϴ�.\n");
        }
    }

    return 0;
}
/*
���� ��� while��
*/
int task1(){
    int meter;
    int i = 1;
    meter = 1 * 1609;
    while(i < 4){
        printf("%d ������ %d�����Դϴ�.\n", i, meter);
        i++;
    }
    

    return 0;
}

/*
������ ��� �ݺ���
*/
int task2(){
    int n;
    int i = 1;

    printf("����ϰ� ���� �������� �Է��ϼ��� : ");
    scanf("%d", &n);

    while(i < 10){
        printf("%2d * %2d = %2d\n", n, i, n * i);
        i++;
    }

    return 0;
}

/*
���� �հ��
*/
int task3(){
    int i = 1;
    int sum = 0;

    while(i <= 1000){
        sum += i;
        i++;
    }

    printf("���� %d�Դϴ�.\n", sum);
    
    return 0;
}

/*
���� ���α׷� ����
*/
int task4(){
    int n = 0;
    int grade = 0;
    float sum = 0;
    float average;

    printf("���� �Է��� �����Ϸ��� ������ �Է��Ͻÿ� \n");

    while(grade >= 0){
        printf("������ �Է��Ͻÿ� : ");
        scanf("%d", &grade);

        sum += grade;
        n++;
    }

    sum = sum - grade;
    n--;

    average = sum / n;
    printf("������ ����� %f�Դϴ�.\n", average);

    return 0;
}

/*
�� ���� �ִ� ����� ���ϱ�
*/
int task5(){
    int x, y, r;

    printf("�� ���� ������ �Է��Ͻÿ�(ū ��, ���� ��):");
    scanf("%d %d", &x, &y);

    while(y != 0){
        r = x % y;
        x = y;
        y = r;
    }
    printf("�ִ� ������� %d�Դϴ�. \n", x);

    return 0;
}

/*
for�� ���丮��
*/

int task6(){
    long fact = 1;
    int i, n;

    printf("������ �Է��ϼ��� : ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++){
        fact = fact * i;
    }

    printf("%d!�� %d�Դϴ�.\n", n, fact);

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
    //task6();
    //task7();
    
    return 0;
}