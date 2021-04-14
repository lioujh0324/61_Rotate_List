/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
typedef struct ListNode node;

struct ListNode* rotateRight(struct ListNode* head, int k)
{
    int n=1;
    node *current;
    current=head;
    if (!head)
        return NULL;
    while (current->next)
    {
        n++;
        current=current->next;
    }
    k=k%n;
    if(k==0)
        return head;
    current->next=head;
    current=head;
    while(n-k-1)
    {
        current=current->next;
        k++;
    }
    head=current->next;
    current->next=NULL;
    return head;
}
