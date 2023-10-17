// test.c

#include <stdio.h>

extern int func_001(void);

int test_001(void)
{
    int ret_val = func_001();
    
    if (ret_val < 1000)
        printf("[PASS] test_001\n");
    else
        printf("[FAIL] test_001\n");
        
    return ret_val;
}

int main(void)
{
    test_001();
}