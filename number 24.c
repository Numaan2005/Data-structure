#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int singleNumber(int *nums, int numSize)
{
    int result = 0;
    for(int i = 0; i < numSize; i++)
    {
       result ^= nums[i];  
    }
    return result; 
    
}
int main() {
    int n;
    scanf("%d",&n);
    int nums[n];
    for(int i = 0; i<n; i++)
    {
        scanf("%d",&nums[i]);
    }
    
    int single = singleNumber(nums, n);
    
        printf("%d\n",single);
    
    return 0;
}