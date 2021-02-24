#include<stdio.h>


int countElements(int* arr, int arrSize) {
    int temp=0;
    int count=0;

    for (int i=0;i<arrSize;i++) {
        temp=arr[i]+1;
        for (int j=0;j<=arrSize;j++) {
            if (temp==arr[j])
            {
                count++;
                break;
            }
        }
    }
    return count;
}

int main (void) {
    int array1[]={1,2,3};
    printf("%d\n",countElements(array1,3));
    return 0;
}