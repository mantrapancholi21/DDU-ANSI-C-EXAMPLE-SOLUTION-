// chapter : 3
// example : 3.1
// this program illustrates the use of integer constants on 16-bit machine.

#include <stdio.h>
int main()
{
    printf("integer values\n\n");
    printf("%d %d %d\n", 32767, 32767+1, 32767+10);
    // on 16-bit machine, values above 32767 cause overflow. 
    
    printf("\n");

    //%ld prints long integer values.
    printf("Long integer values\n\n");
    printf("%ld %ld %ld\n", 32767L, 32767+1L, 32767+10L);
    // 'L' tells the compiler to treat the numbers as long integer.

    return 0;
}
