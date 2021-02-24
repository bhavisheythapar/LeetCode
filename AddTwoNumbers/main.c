#include<stdio.h>

// struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2){

// }
struct ListNode {
    int val;
    struct ListNode *next;
};

int main (void) {
    struct ListNode l1;
    struct ListNode l2;
    l1.val=2;
    l1.next=&l2;
    l2.val=3;
    l2.next=NULL;
    printf("%d\n",l1.val);
    printf("%p\n",l1.next);

    printf("%d\n",*l1.next);
    return 0;
}