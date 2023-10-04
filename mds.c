#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include <string.h>
#include <strings.h>

int main()
{

srand(time(NULL));

for(int i = 0; i < 10; i++){
    printf("%d\n", rand() % 80);
}
return 0;
}