#include <stdio.h>
#include<stdlib.h>
#include<time.h>

//����
int class1(){
    char ch;

    printf("���ڸ� �Է��Ͻÿ�:");
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z'){
        printf("%c�� �빮���Դϴ�.\n", ch);
    }
    else if (ch >= 'a' && ch <= 'z'){
        printf("%c�� �ҹ����Դϴ�.\n", ch);
    }
    else if (ch >= '0' && ch <= '9'){
        printf("%c�� �����Դϴ�.\n", ch);
    }
    else{
        printf("%c�� ��Ÿ�����Դϴ�.\n", ch);
    }
    
    return 0;
}

int class2(){
    char op;
    int x, y;

    printf("������ �Է��Ͻÿ�:");
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

    printf("���ڸ� �Է��ϼ���:");
    scanf("%d", &number);

    switch (number) {
        case 0:
            printf("����\n"); 
            break;
        case 1:
            printf("�ϳ�\n");
            break;
        case 2:
            printf("��\n");
            break;
        default:
            printf("����\n");
            break;
    }
    
    return 0;
}

int class4(){
    int month, days;
    printf("�ϼ��� �˰� ���� ���� �Է��Ͻÿ�:");
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
    printf("%d���� �ϼ��� %d�Դϴ�.\n", month, days);

    return 0;
}

int class5() {
    int a, b;
    char op;
    printf("������ �Է��Ͻÿ�:");
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
            printf("�߸��� �������Դϴ�.\n");
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
        printf("%d������ %d�����Դϴ�.\n", i, meter);
        
        i++;
    }

    return 0;
}

int class8(){
    int n;
    int i = 1;

    printf("������ �߿��� ����ϰ� ���� ���� �Է��ϼ���:");
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
    printf("1���� 10������ ������%d", sum);
    return 0;
}
int class10(){
    int grade = 0;
    int n = 0;
    float sum = 0;
    float avg;

    while (grade >= 0) {
        printf("������ �Է��ϼ���");
        scanf(" %d",&grade );
        sum += grade;
        n++;
    }
    
    sum -= grade;
    n--;
    avg = sum / n;
    
    printf("��ü ���%.2f", avg);
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

    printf("1~10������ ��:%d\n", sum);
    */
    int n;
    while (1) {
        printf("���ϴ� ��>>");
        scanf("%d", &n);
        for (int i = 1; i < 10; i++) {
            printf("%dx%d=%2d\n", n, i, n * i);
        }

        printf("����Ͻðڽ��ϱ�?(y/n)\n");
        
        char ans;
        scanf("   %c", &ans);

        if (ans == 'n' || ans == 'N')
            break;
        }
        return 0;
}
//����
/*
Q1. �Ʒ� �׸�1�� ���� ����Ǵ� ����/����/�� ���α׷��� �����Ͻÿ�.
*/

int task1(){
    int user;

    printf("����(1)/����(2)/��(3) �Է�: ");
    scanf("%d", &user);
    srand(time(0));

    int com = rand() % 3 + 1;

    //���� ����
    if(com == 1){
        switch (user){
        case 1:
            printf("�����ϴ�\n");
            break;
        case 2:
            printf("�̰���ϴ�\n");
            break;
        case 3:
            printf("�����ϴ�\n");
            break;
        
        default:
            break;
        }
        printf("��ǻ�ʹ� �����Դϴ�\n");
    }
    else if(com == 2){
        switch (user){
        case 1:
            printf("�����ϴ�\n");
            break;
        case 2:
            printf("�����ϴ�\n");
            break;
        case 3:
            printf("�̰���ϴ�\n");
            break;
        
        default:
            break;
        }
        printf("��ǻ�ʹ� �����Դϴ�\n");
    }
    else if(com == 3){
        switch (user){
        case 1:
            printf("�̰���ϴ�\n");
            break;
        case 2:
            printf("�����ϴ�\n");
            break;
        case 3:
            printf("�����ϴ�\n");
            break;
        
        default:
            break;
        }
        printf("��ǻ�ʹ� ���Դϴ�\n");
    }

    return 0;
}

/*
Q2. 1���� 100������ �ڿ��� �߿��� 3�� ����̸鼭 ���ÿ� 5�� ����� ���ڸ� ����Ͻÿ�.
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
Q3. ���ݱ��� �н��� ������� �̿��Ͽ� 1���� 5������ ������ ���Ͽ� 
�������� ���������� ȭ�鿡 ����ϴ� ���α׷��� �ۼ��Ͻÿ�. (��, �ݺ����� �̿��Ͽ� �����Ͻÿ�.)
*/

int task3(){
    int x;
    printf("��  ��\t��  ��\t������\n");

    for(int i = 1; i < 6; i++){
        printf("%3d\t%3d\t%3d\n", i, i * i, i * i * i);
    }

    return 0;
}
/*
Q4. ����ڷκ��� 1���� 50 ������ ���ڸ� �Է¹޾Ƽ� ������ ���̸� �Է¹��� ���ڸ�ŭ 
���������� ��#������ ����ϴ� ���α׷��� 10ȸ ����ǵ��� �ۼ��Ͻÿ�.
*/

int task4(){
    int x;
    int y = 0;
    while (y < 10){
        printf("1~50������ ������ �Է��ϼ��� :");
        scanf("%d", &x);
        if(x >= 1 && x <=50){
            for(int j = 0; j < x; j++){
            printf("#");
        }
        y++;
        }
        else{
            printf("�ٽ� �Է��ϼ���\n");
        }
        printf("\n");
    }
   

    return 0;
}

int main(){
    //����
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
    
    //����
    //task1();
    //task2();
    //task3();
    //task4();

    return 0;
}


