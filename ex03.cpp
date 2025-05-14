#include <stdio.h>
#include <stdlib.h>

int contarDigitos(int n) {
    if (n < 0) {
        n = -n;
    }

    if (n < 10) {
        return 1;
    } else {
        return 1 + contarDigitos(n / 10);
    }
}

int main() {
    printf("%d\n",contarDigitos(10));
    printf("%d\n",contarDigitos(109));
    printf("%d\n",contarDigitos(2));
}
