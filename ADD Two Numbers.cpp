class Solution 
{
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) 
    {
        //ekta notun node khullam & seta temp a assign korlam
        ListNode* dummy = new ListNode(0);
        ListNode* temp  = dummy;
        int carry=0;
        
        while( l1  || l2  || carry )
        {
            int value1 = l1 ? l1 -> val : 0;
            int value2 = l2 ? l2 -> val : 0;
        
   
        //arekta notun node khlbo
    
            temp->next=new ListNode((value1+value2+carry)%10);
            temp=temp->next;
            carry=(value1+value2+carry)/10;
            if(l1)
                 l1=l1->next;
            if(l2)
                 l2=l2->next;
        }
        return dummy->next;
    }
};


