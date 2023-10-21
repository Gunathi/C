#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>

void main() {

    int n,min1,min2,min,len;

    scanf("%d", &n);

    len = 2*n-1;

      for (int i=1; i <=len; i++) {
          for (int j=1; j<=len; j++) {

            min1 = i<=len-i ? i -1 : len-i;

            min2 = j<=len-j ? j -1: len-j;

            min = min1<=min2 ? min1 : min2;

            printf("%d ",n-min);
          }
          printf("\n");
      }
}
