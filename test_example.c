#include <stdio.h>

/** 
 * @detail : 1~number sum test 
 * @param number : end  
 */
int sum(int number) {
    int i = 1, sum = 0;
    
    for (i = 1; i < number; i++) {
        sum += i;
    }
    
    return sum;
}
