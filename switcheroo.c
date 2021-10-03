#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    //1
    int a[10];
    //2
    a[0] = 0;
    int i;
    srand(time(NULL));
    for (i = 1; i < 10; i++) {
        a[i] = rand();
    }
    //3
    printf("Array Values:\t");
    for (i = 0; i < 10; i++) {
        printf("%d ", a[i]);
    }
    //4
    int b[10];
    //5
    int *ap = a;
    int *bp = b;
    //6
    printf("\nArray 2 Values:\t");
    for (i = 0; i < 10; i++) {
        *(bp + i) = *(ap + (9 - i));
    }
    for (i = 0; i < 10; i++) {
        printf("%d ", *(bp + i));
    }
    printf("\nArray 2 Values:\t");
    for (i = 0; i < 10; i++) {
        b[i] = a[9-i];
    }
    for (i = 0; i < 10; i++) {
        printf("%d ", bp[i]);
    }
    printf("\n");

    return 0;
}