
Node* reverseDLL(Node* head)
{   
    if(head==NULL|| head->next ==NULL){
        return head;
    }
  
    Node* prev = NULL;
    Node* cur = head;
    while(cur != NULL){
        prev = cur->prev;

        cur->prev = cur->next;
        cur->next = prev;

        cur= cur->prev;
    }
    return prev->prev;
}
/*
swapping the links 
TC: O(n)
Sc:O(1)

swap(a,b) concept using a temp variable 
a=2, b= 5 
temp =a;
a=b;
b= temp;

doing it on one node  after reversing what it becomes
comparing the pointers next and back after or before reversing then getting this */

/*
swapping the data 
TC: O(2n)
SC: O(n)  using stack 
 */





