#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){
srand(time(NULL));

int a;
int num;
int um = 0;
int dois = 0;
int tres = 0;
int quatro = 0;
int cinco = 0;
int seis = 0;
int i;

i = 1;

printf("Digite um numero inteiro positivo: \n");
scanf("%d", &num);

while (i <= num){

a = rand() % 6 + 1;

if(a == 1){
um++;
}
else if(a == 2){
dois++;
}
else if(a == 3){
tres++;
}
else if(a == 4){
quatro++;
}
else if(a == 5){
cinco++;
}
else{
seis++;
}

i++;

}
printf("foram digitados %d numero um\n", um);
printf("foram digitados %d numero um\n", dois);
printf("foram digitados %d numero um\n", tres);
printf("foram digitados %d numero um\n", quatro);
printf("foram digitados %d numero um\n", cinco);
printf("foram digitados %d numero um\n", seis);
}



