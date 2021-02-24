# include <stdio.h>

int maxSubArray(int* nums, int numsSize) {

    int maxSum=nums[0];
    int newSum=0;

    for (int i=0; i<numsSize; i++) {
        newSum=newSum+nums[i];
        for (int j=i+1; j<numsSize; j++) {
            newSum= nums[j]+newSum;

            if (newSum > maxSum)
            {
                maxSum=newSum;
            }
                
        }
        newSum=0;
    }

    for (int i=0; i<numsSize; i++) {
        if (nums[i]>maxSum)
            maxSum=nums[i];
    }

    return maxSum;
} 

int main (void) {

    int array[] = {1};
    printf("The max sum is: %d\n",maxSubArray(array,1));
}
