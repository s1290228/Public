#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

int main(){
  int i,j,r,total;
  printf("Rolling dice...\n");
  for(i=1;i<2;i++){
  srand((unsigned int)time(NULL));
    for(j=1;j<3;j++){
      printf("Die %d:",j);
      r =rand() %6 + 1;
      printf("%d\n",r);
      total += r;
    }
    printf("Total value: %d\n",total);
    sleep(1);
  }
  return 0;
}
