#include <stdio.h>

/* �й��� �̸��� ���ÿ�. */

// �й�: 2020039099
// �̸�: ������ 

// M1.
// �ﰢ���� �غ��� ���̸� �Է¹޾�, ������ ���Ͻÿ�.(��, �� ���� ��������
// ���Ѵ�.)
int triangle(){
  int height;     //����
  int width;      //�غ�
  int area;       //����
  
  scanf("%d %d", &height, &width);

  area = height * width / 2;
  printf("%d\n" ,area);

  return 0;
}

// M2.
// �� ������ �Է¹޾� ��հ��� ���Ͽ� ����Ͻÿ�.
int average(){
  int n1, n2, n3;
  int avg;

  scanf("%d %d %d", &n1, &n2, &n3);
  avg = (n1 * n2 * n3) / 3;

  printf("%d\n", avg);

  return 0;
}

// M3
// �� ������ �ð��� �Է¹޾� �ð� ������ ��/�� ������ �����Ͽ� ����Ͻÿ�.
//   Ex) �Է�: 125
//   ���: 2�� 5��
int time(){
  int num;
  int sec;
  int min;

  scanf("%d", &num);

  min = num / 60;
  sec = num - (min * 60);

  printf("%d�� %d��\n", min, sec);

  return 0;
}

//���� �Լ� ����
int main(){
  triangle();
  //average();
  //time();

  return 0;
}