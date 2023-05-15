#include <stdio.h>

main(){

  int a;
  printf("점수를 입력해주세요\n");
  scanf("%d", &a);
  
  if(a>90)
    printf("A학점\n");

  else if (a==2)
    printf("키위를 좋아하는군요!\n");

  else if (a==3)
    printf("복숭아를 좋아하는군요!\n");

  else if (a==4)
    printf("수박을 좋아하는군요!\n");

  else
    printf("당신은 아마도 과일을 좋아하지 않는 것 같군요     \n");

  printf("좋아하는 과일 조사 끝!!");
}