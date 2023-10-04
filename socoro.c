#include <stdio.h>
#include <stdbool.h>



bool perfeito(int num)
{
int soma = 0;

for (int n = 1; n < num; n++)
{
   if ( num % n == 0)
   {
	soma += n;
   }
}
return soma == num;
}

int main()
{
  int num, n;

printf("digite um numero:\n");
scanf("%d", &num);

for (n = num - 1; n > 1; n--) {

	if(perfeito(n)) {
	break;
  }
 }
if (n != 1){
printf("o maior numero perfeito é %d \n", n);

}else{
printf("nao existe um numero perfeito menor que %d\n", num);
}
}




