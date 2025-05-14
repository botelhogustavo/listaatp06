#include <stdio.h>
#include <stdlib.h>

int i;

int main(){
    srand(time(NULL));
    printf("%d\n", rand() % 11 + 2);
}