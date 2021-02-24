#include <stdio.h>

void moveZeroes (int* nums, int numsSize) {

    int* zeroPointer=0;
    int* element=0;
    int* inner_element=0;
    int temp=0;

    for (int i=0;i<numsSize;i++){
        element=nums+i;
        if (*element==0) {
            zeroPointer=element;
            for(int j=i;j<numsSize;j++) {
                inner_element=nums+j;
                if (*inner_element != 0) {
                    temp=nums[i];
                    nums[i]=*inner_element;
                    nums[j]=temp;
                    break;  
                }
            }
        }
    }
}

int main (void) {
    int array1[]={0,1,0,-2,6,0};
    int arrSize=6;
    moveZeroes(array1,arrSize);
    for (int i=0;i<arrSize;i++) {
        printf("%d\n",array1[i]);
    }
    return 0;
}