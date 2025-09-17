#include <stdio.h>

int main() {
    int i;
    
    for ( i = 10; i >= 1; i--) {
        printf("10 x %d = %d\n",  i, 10 * i);
    }
    
    return 0;
}