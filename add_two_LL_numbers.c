struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2){
 int count = 0;
        int count2 = 0;
        
        struct ListNode *current = l1;
        while (current != NULL)
        {
            ++count;
            current = current->next;
        }
        
        struct ListNode *current2 = l2;
        while (current2 != NULL)
        {
            ++count2;
            current2 = current2->next;
        }
        
        if (count > count2)
        {
            current = l2;
            current2 = l1;
        }
        else
        {
            current = l1;
            current2 = l2;
        }
        
        int carry = 0;
        struct ListNode *result = NULL;
        struct ListNode *primary = NULL;
        
        while (current != NULL)
        {
            int sum = current->val + current2->val;
            
            if (carry)
            {
                ++sum;
            }
            
            if (sum >= 10)
            {
                carry = 1;
                sum %= 10;
            }
            else
            {
                carry = 0;
            }
            
            struct ListNode *new_node = (struct ListNode *)malloc(sizeof(struct ListNode));
            new_node->val = sum;
            new_node->next = NULL;
            
            if (result == NULL)
            {
                result = new_node;
                primary = new_node;
            }
            else
            {
                result->next = new_node;
                result = result->next;
            }
            
            current = current->next;
            current2 = current2->next;
        }
        
        while (current2 != NULL)
        {
            int sum = current2->val;
            
            if (carry)
            {
                ++sum;
            }
            else 
            {
                carry = 0;
            }
            
            if (sum >= 10)
            {
                carry = 1;
                sum %= 10;
            }
            else
            {
                carry = 0;
            }
            
            struct ListNode *new_node = (struct ListNode *)malloc(sizeof(struct ListNode));
            new_node->val = sum;
            new_node->next = NULL;
            
            if (result == NULL)
            {
                result = new_node;
                primary = new_node;
            }
            else
            {
                result->next = new_node;
                result = result->next;
            }
            
            current2 = current2->next;
        }
    
        if (carry)
        {
            struct ListNode *new_node = (struct ListNode *)malloc(sizeof(struct ListNode));
            new_node->val = 1;
            new_node->next = NULL;
            result->next = new_node;
        }
        
        return primary;
}
