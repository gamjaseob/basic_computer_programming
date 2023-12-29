#include <stdio.h>

/* 학번과 이름을 쓰시오. */

// 학번: 2020039099
// 이름: 김지섭 

// M1.
// 삼각형의 밑변과 높이를 입력받아, 면적을 구하시오.(단, 두 값은 정수형에
// 한한다.)
int triangle(){
  int height;     //높이
  int width;      //밑변
  int area;       //면적
  
  scanf("%d %d", &height, &width);

  area = height * width / 2;
  printf("%d\n" ,area);

  return 0;
}

// M2.
// 세 정수를 입력받아 평균값을 구하여 출력하시오.
int average(){
  int n1, n2, n3;
  int avg;

  scanf("%d %d %d", &n1, &n2, &n3);
  avg = (n1 * n2 * n3) / 3;

  printf("%d\n", avg);

  return 0;
}

// M3
// 초 단위의 시간을 입력받아 시간 정보를 분/초 단위로 구분하여 출력하시오.
//   Ex) 입력: 125
//   출력: 2분 5초
int time(){
  int num;
  int sec;
  int min;

  scanf("%d", &num);

  min = num / 60;
  sec = num - (min * 60);

  printf("%d분 %d초\n", min, sec);

  return 0;
}

//메인 함수 실행
int main(){
  triangle();
  //average();
  //time();

  return 0;
}