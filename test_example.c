#include <stdio.h>

/** 
 * @detail : 1~number sum test 
 * @param number : end  
 */
int sum(int number) {
    int j,c,i = 1, sum = 0;
    
    for (i = 1; i < number; i++) {
        sum += i;
        for(j = 0; j < 1000000; j++){
        	c += j;
        }
    }
    
    return sum;
}
