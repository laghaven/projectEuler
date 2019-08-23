#include <stdio.h>

int main()
{
    int k1 = 3, k2 = 5, n = 1000;
    
    int mul_of_k1 = (n-1)/k1;
    int mul_of_k2 = (n-1)/k2;
    int mul_of_lcm = ((n-1)/(k1*k2));
    
    int answer = (k1* (mul_of_k1 * (mul_of_k1 +1))/2) + (k2* (mul_of_k2 * (mul_of_k2 +1))/2) - (k1*k2*(mul_of_lcm * (mul_of_lcm + 1))/2);
    
    printf ("answer is = %d", answer);
    return answer;
}
