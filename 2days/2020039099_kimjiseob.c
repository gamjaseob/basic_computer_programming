#include <stdio.h>

//����
int sum(){
    int a = 100;
    int x;          
    int y;
    int sum;

    printf("�� ���� �Է� : ");
    scanf("%d %d", &x, &y);

    sum = x + y;
    printf("Sum : %d\n", sum);

    return 0;
}

//����
/*
M1. ������ ������ ������ ���ݰ� ������ ���� �ݾ��� �Է¹޾�, 
�ܵ��� �Ʒ��� ���� ȭ�� ������ ��ȯ�Ͽ� �ְ��� �Ѵ�. 
�Ʒ��� ���� ����Ǵ� �ڵ带 �����Ͻÿ�. (�� ��, ������ ������ 100�� ���������� ���˴ϴ�.)
*/
/******************************************************************
���� ���� ����>> 23100
���� ���� �ݾ�>> 100000

[[��ȯ ������ ȭ�� ���� ==> ����/��õ��/õ��/�����/���]]
 ����:7��
 ��õ��:1��
 õ��:1��
 �����:1��
 ���:4��
******************************************************************/
int change(){
    int price;      //���� ����
    int money;      //������ �ݾ�

    int temp;       //���� ����

    int man;        //����
    int ochun;      //��õ��
    int chun;       //õ��
    int obek;       //�����
    int bek;        //���

    printf("���� ������ �Է��ϼ��� : ");
    scanf("%d", &price);

    printf("�մ��� ������ �ݾ��� �Է��ϼ��� : ");
    scanf("%d", &money);

    //�Ž����� ���
    temp = money - price;

    //���� ���� ���
    man = temp / 10000;
    temp = temp - (man * 10000);

    //��õ�� ���� ���
    ochun = temp / 5000;
    temp = temp - (ochun * 5000);

    //õ�� ���� ���
    chun = temp / 1000;
    temp = temp - (chun * 1000);

    //����� ���� ���
    obek = temp / 500;
    temp = temp - (obek * 500);

    //��� ���� ���
    bek = temp / 100;

    //���
    printf("[[��ȯ ������ ȭ�� ���� ==> ����/��õ��/õ��/�����/���]]\n");
    printf("��  �� : %d��\n", man);
    printf("��õ�� : %d��\n", ochun);
    printf("õ  �� : %d��\n", chun);
    printf("����� : %d��\n", obek);
    printf("��  �� : %d��\n", bek);

    return 0;
}

/*
M2. ��������ڸ� �̿��Ͽ� �Ʒ��� ���� ����Ǵ� �ڵ带 �����Ͻÿ�.
*/
int digit(){
    int num;        //�Է¿� ����

    int first, second, third; //�ڸ��� ����� ����
    
    printf("3�ڸ� ������ �Է��ϼ��� : ");
    scanf("%d" ,&num);

    //3�ڸ��� ���
    third = num / 100;
    num = num - (third * 100);

    //2�ڸ��� ���
    second = num / 10;
    num = num - (second * 10);

    //1�ڸ��� ���
    first = num;

    //���
    printf("���� �ڸ� : %d\n", third);
    printf("���� �ڸ� : %d\n", second);
    printf("���� �ڸ� : %d\n", first );

    return 0;
}
/*
M3. ����ڰ� �ƽ�Ű �ڵ带 �Է��ϸ� �� �ƽ�Ű �ڵ忡 �ش��ϴ� ���� ���ڸ� ����ϴ� ���α׷��� �ۼ�����.
*/
int ascii(){
    int num;        //�Է¿� ����
    
    printf("�ƽ�Ű �ڵ带 �Է��ϼ��� : ");
    scanf("%d", &num);

    printf("�Է��� �ƽ�Ű �ڵ� ���� %c�Դϴ�.", num);

    return 0;
}

/*
M4. �Ʒ��� ���� �������� �����Ͽ� ���α׷��� �ۼ��Ͻÿ�.
*/
/******************************************************************
================================================
     Alpha    10����     8����    16����
================================================
         a        97      0141      0x61
         b        98      0142      0x62
         c        99      0143      0x63
         d       100      0144      0x64
         e       101      0145      0x65
******************************************************************/
int binary(){
    //a~e ����
    char a = 'a';
    char b = 'b';
    char c = 'c';
    char d = 'd';
    char e = 'e';
    
    //���
	printf("================================================\n");
	printf("%10s%10s%10s%10s\n", "Alpha","10����","8����","16����");
	printf("================================================\n");
    printf("%10c%10d%10o%10x\n", a, a, a, a, a);
    printf("%10c%10d%10o%10x\n", b, b, b, b, b);
    printf("%10c%10d%10o%10x\n", c, c, c, c, c);
    printf("%10c%10d%10o%10x\n", d, d, d, d, d);
    printf("%10c%10d%10o%10x\n", e, e, e, e, e);
    return 0;
}
//���� �Լ�
int main(){
    //�����Ű�� ���� �Լ� �����
    //sum();
    //change();
    //digit();
    //ascii();
    //binary();


    return 0;
}