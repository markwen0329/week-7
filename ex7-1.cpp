#include <stdio.h>
int main() {
    int i,sum=0;
    for(i=1; i<=1000 ; i +=2){
      printf("i = %d\n", i);
      sum = sum + i;
      printf("%d %d\n", i, sum);
    }
return 0;
} 
