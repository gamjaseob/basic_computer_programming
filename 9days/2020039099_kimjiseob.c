#include <stdio.h>

//�Լ�
int square(int n);
int get_max(int x, int y);
int get_integer();
int factorial(int n);
int combination(int n, int r);
int sub1();
int sub2();

//����
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

    printf("�� ������ �Է��ϼ��� : ");
    scanf("%d %d", &x, &y);
    result = get_max(x, y);

    printf("%d�� �� Ů�ϴ�.", result);

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

//����
/*
Q1. �Ʒ� �׸�1�� ���� ����ǵ��� ���α׷��� �����Ͻÿ�. (��, ����������Լ��� Ȱ���Ͻÿ�.)
*/
int divisor(){
    int n;
    printf("������ �Է��ϼ��� : ");
    scanf("%d", &n);
    return 0;
}

int prime(){

    return 0;
}

int task1(){
    int n;
    while(1){
        printf("(1) ��� ��� (2) �Ҽ� �Ǵ� (3) ���� �޴� ���� : ");
        scanf("%d", &n);
        switch(n){
            case 1:

                break;
            case 2:

                break;
            case 3:

                break;
            default:
                printf("1~3������ ���� �Է��ϼ���.\n")
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
    
    //����
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

    printf("������ �Է��ϼ��� : ");
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