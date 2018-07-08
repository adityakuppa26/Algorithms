/* check whether a given Linked List contains loop and if loop is present then remove the loop */

struct Node
{
  int key;
  Node* next;
};

void detandrem(Node* head)
{
  if(head==NULL || head->next==NULL)
    return;
  Node* slow=head;
  Node* fast=head;
  slow=slow->next;
  fast=fast->next->next;
  while(slow && fast && fast->next)
  {
    if(slow==fast)
      break;
    slow=slow->next;
    fast=fast->next->next;
  }
  if(slow==fast)
  {
    slow=head;
    while(slow->next!=fast->next)
    {
      slow=slow->next;
      fast=fast->next;
    }
    fast->next=NULL;
  }
}
