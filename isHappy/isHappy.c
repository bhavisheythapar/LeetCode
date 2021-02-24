# include <stdio.h>
# include <stdbool.h>

int isHappy (int n) {
    int sum=0;
    int counter=0;
    
    while(counter<1000) {

        sum=(n%10)*(n%10)+sum;
        n=n/10;

        if (n/10==0){

            sum=(n%10)*(n%10)+sum;
            n=sum;

            if (sum==1) {
                break;
            }
                
            else {
                sum=0;
            }
            
        }

        counter++;
    }

    if (sum==1)
        return 1;
    else
        return 0;
    
}

int main (int argc, char *argv[]) {
    int number;
    printf("Please enter a number: ");
    scanf("%d", &number);
    if (isHappy(number))
        printf("This number is a happy number.\n");
    else
        printf("This number is not a happy number.\n");
    return 0;
}