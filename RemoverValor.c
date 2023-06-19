#include <stdio.h>
#define limar 10

int main(void) {
  int array[limar], i, j, k, lim = limar;
  for(i = 0; i < limar; i++) {
    printf("D: ");
    scanf("%d",&array[i]);
  }
  printf("Digite o valor a ser apagado: ");
  scanf("%d",&k);
  for(i = 0; i < lim; i++) {
      if (array[i] == k) {
          for (j = i; j < lim; j++) {
            array[j] = array[j+1];
          }
          lim--;
          i--;
      }
  }
  /*
  //Adicionar valores até o limite inicial do array
  for (i = lim; i < limar; i++){
    array[i] = 0;
  }
  for(i = 0; i < limar; i++) {
    printf("%d, ",array[i]);
  }
  */
  for(i = 0; i < lim; i++) {
    printf("%d, ",array[i]);
  }
  return 0;
}
