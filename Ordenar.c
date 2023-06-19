#include <stdio.h>
#define tam 10

int main(void) {
  int array[tam], lim = tam;
  for(int i = 0; i < tam; i++) {
    printf("D: ");
    scanf("%d",&array[i]);
  }
  while (1) {
    int arrayt[tam];
    for (int i = 0, j = 0; i < tam; j++) {
      for( int k = 0; k < tam; k++){
        if(j == array[k]){
          arrayt[i] = j;
          i++;
        }
      }
    }
    for (int i = 0; i < tam; i++){
      array[i] = arrayt[i];
    }
    break;
  }
  for(int i = 0; i < tam; i++) {
    printf("%d, ",array[i]);
  }
  return 0;
}
