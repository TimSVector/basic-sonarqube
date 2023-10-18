// test.c

#include <stdio.h>

extern int func_001(void);

int test_001(void)
{
    int ret_val = func_001();
    
    if (ret_val < 1000)
        printf("[PASS] test_001 - func_001 < 1000 (%d) \n", ret_val);
    else
        printf("[FAIL] test_001 - func_001 < 1000 (%d) \n", ret_val);
        
    return ret_val;
}


int test_002(void)
{
    int ret_val = func_001();
    
    if (ret_val > 1000)
        printf("[PASS] test_002 - func_001 > 1000 (%d) \n", ret_val);
    else
        printf("[FAIL] test_002 - func_001 > 1000 (%d) \n", ret_val);
        
    return ret_val;
}

int main(void)
{
    test_001();
    test_002();
}