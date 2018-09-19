//Jason Kim
//System Level Programming -- Pd.5
//Work#03 -- The Old Switcheroo
//9-19-18

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

  int arr1[10];
  srand(time(NULL));
  
  for (int i = 0; i < 10; i++) {
    arr1[i] = rand();
  }

  arr1[9] = 0;

  printf("arr1: [");
  for (int i = 0; i < 10; i++) {
    printf("%d, ", arr1[i]);
  }
  printf("\b\b]\n");

  int arr2[10];
  int *pointer1 = arr1;
  int *pointer2 = arr2;

  for (int i = 0; i < 10; i++) {
    *(pointer2+i) = *(pointer1+9-i);
  }

  printf("arr2: [");
  for (int i = 0; i < 10; i++) {
    printf("%d, ", arr2[i]);
  }
  printf("\b\b]\n");
	   
  return 0;
}
