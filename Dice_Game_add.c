#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

int main(){
  int i,j,r,total;
  char user_name[20];
  
  printf("What is your name?\n> ");
  scanf("%s",user_name);
  printf("Hello, %s!\n",user_name);
  
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
    if(total>=7) printf("%s won!\n",user_name);
    else printf("%s lost....\n",user_name);
    sleep(1);
  }
  return 0;
}
