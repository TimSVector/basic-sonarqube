
#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int func_001(void)
{
    int ctr = 0;
    srand((unsigned int)time(NULL));   // Initialization, should only be called once.
    int r = rand();      // Returns a pseudo-random integer between 0 and RAND_MAX.
    
    while(r > 1000)
    {
        printf("Randon number %d is > 1000\n",r);
        r = rand();
        ctr++;
    }
    
    printf("Randon number %d is <= 1000.  It took %d iterations to find it\n",r,ctr);
    
    return ctr;

}