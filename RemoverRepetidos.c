#include <stdio.h>
#define arr_tam 10

int main(void) {
  int array[arr_tam], i, k, j, lim = arr_tam;
  for(i = 0; i < arr_tam; i++) {
    printf("D: ");
    scanf("%d",&array[i]);
  }
  for(i = 1; i < lim; i++) {
    for (j = 0; j < i; j++) {
      if (array[i] == array[j]) {
          for (k = i; k < lim; k++) {
            array[k] = array[k+1];
          }
          lim--;
          i--;
      }
    }
  }
  /*
  //Substituir o resto do vetor por 0
  for (i = lim; i < arr_tam; i++){
    array[i] = 0;
  }
  for(i = 0; i < arr_tam; i++) {
    printf("%d, ",array[i]);
  }
  */
  for(i = 0; i < lim; i++) {
    printf("%d, ",array[i]);
  }
  return 0;
}
