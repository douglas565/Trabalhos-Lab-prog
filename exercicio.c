#include <stdio.h>


void invert_num(int tam, int vet[tam]){
  
  for(int i = 0; i < tam; i++){
    scanf("%d", &vet[i]);
  }
  
  for(int i = 9; i >= 0; i--){
    printf(" %d ", vet[i]);
  }
  printf("\n");
}


int main(){
  int vet[10];

  printf("Digte uma tecla com um numero 10X: \n");
  invert_num(10 , vet);

  return 0;
}