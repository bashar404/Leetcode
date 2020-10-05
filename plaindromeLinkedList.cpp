/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
    private:
    ListNode *reverse(ListNode *head)
    {
        ListNode *p,*q;
        if (head==NULL)
            return head;
        p=head;
        q=p->next;
        if(q==NULL)
            return p;
        q=reverse(q);
        p->next->next=p;
        p->next=NULL;
        return q;
        
    }
public:
    bool isPalindrome(ListNode* head) 
    {
        ListNode *p, *q, *first_start, *second_start;
        p = head;
	q = head;
        
        if(p==NULL)
            return true;
        
        if(p->next == NULL)          // if there is only one character in the string
	{
		//printf("It is a palindrome");
		return true;
	}

            
//            q=q->next;   //// q forwards by 1 position/watch?v=oZuR2-AKkXE&list=PLeIMaH7i8JDio7glJoO1rQIAo4g1msRRG&index=10&ab_channel=VivekanandKhyade-AlgorithmEveryDay
//         }/watch?v=4mm39dVLlZ0&list=PLeIMaH7i8JDio7glJoO1rQIAo4g1msRRG&index=6&ab_channel=VivekanandKhyade-AlgorithmEveryDay
//         q->next=NULL;
        
        //split the linked list
	while(1)
	{
		p = p->next->next;
		if(p == NULL)
		{
			second_start = q->next;
			break;
		}
		if(p->next == NULL)
		{
			second_start = q->next->next;
			break;
		}		
		q = q->next;		
	}	
	q->next = NULL;
        
        
        
        //reverse
        second_start=reverse(second_start);
        
        first_start=head;
        
                    while(first_start!=NULL && second_start!=NULL) //compare the two strings
                             {		
                              if(first_start->val == second_start->val)
                                      {
                                    first_start = first_start->next;
                                   second_start = second_start->next;
                                      }
                                else
                                {
                                    return false;					
                                }		
                             }	
                return true;
    }
};
