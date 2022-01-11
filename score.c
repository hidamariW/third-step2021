#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int cmp_int(const void*n1, const void*n2){
  if(*(int*)n1 > *(int*)n2)
	  return -1;
  else if (*(int*)n1 < *(int*)n2)
	  return 1;
  else
	  return 0;
}

int main(void){
  int rika[20]={65, 80, 67, 35, 58, 60, 72, 75, 68, 92, 36, 50, 25, 85, 46, 42, 78, 62, 84, 70};
  int eigo[20]={44, 87, 100, 63, 52, 60, 58, 73, 55, 86, 29, 56, 89, 23, 65, 84, 64, 27, 86, 84};  
  int sum_rika=0, sum_eigo=0;
  int i;
  double bunsan_rika=0.0, bunsan_eigo=0.0, avg_rika, avg_eigo;

  for(i=0;i<20;i++){
    sum_rika += rika[i];
    sum_eigo += eigo[i];
  }

  avg_rika=sum_rika/20.0;
  avg_eigo=sum_eigo/20.0;

  for(i=0;i<20;i++){
    bunsan_rika = bunsan_rika + (rika[i] - avg_rika) * (rika[i] - avg_rika);
    bunsan_eigo = bunsan_eigo + (eigo[i] - avg_eigo) * (eigo[i] - avg_eigo);
  }
  bunsan_rika /= 20.0;
  bunsan_eigo /= 20.0;
  //printf("%f",sqrt(324.0));
  double hensa_rika, hensa_eigo;
	 hensa_rika = sqrt(bunsan_rika); hensa_eigo = sqrt(bunsan_eigo); 
  printf("理科　平均点: %f, 標準偏差: %f, 合計点: %d\n", avg_rika, hensa_rika, sum_rika);
  printf("英語　平均点: %f, 標準偏差: %f, 合計点: %d\n", avg_eigo, hensa_eigo, sum_eigo);
  for(i=0;i<20;i++){
    printf("%2dさんの偏差値　理科: %f, 英語: %f\n", i+1, 10*(rika[i]-avg_rika)/hensa_rika+50, 10*(eigo[i]-avg_eigo)/hensa_rika+50);
  }

  qsort(rika, sizeof(rika)/sizeof(rika[0]), sizeof(int), cmp_int);
  qsort(eigo, sizeof(eigo)/sizeof(eigo[0]), sizeof(int), cmp_int);
  printf("理科(降順)");
  for(i=0;i<20;i++){
    printf("%d ", rika[i]);
  }
  printf("\n");
  printf("英語(降順)");
  for(i=0;i<20;i++){
    printf("%d ", eigo[i]);
  }
printf("\n");

}
