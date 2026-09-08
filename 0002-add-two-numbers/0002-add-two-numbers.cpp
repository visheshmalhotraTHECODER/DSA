class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        // Dummy node humara sahara hai, nayi list iske pichhe banegi
        ListNode* dummy = new ListNode(0);
        ListNode* curr = dummy;
        int carry = 0; // Bachpan wala haasil (carry)

        // Jab tak dono mein se kisi ek list mein node bacha ho, 
        // ya phir aakhri carry bacha ho
        while (l1 != NULL || l2 != NULL || carry != 0) {
            
            // Agar list khatam ho gayi toh value 0 maan lo
            int val1 = (l1 != NULL) ? l1->val : 0;
            int val2 = (l2 != NULL) ? l2->val : 0;
            
            // Total sum = l1 ki value + l2 ki value + pichla carry
            int sum = val1 + val2 + carry;
            
            // Naya carry nikalne ke liye sum ko 10 se divide karo
            carry = sum / 10;
            
            // Naye node mein sirf unit digit (sum % 10) jayega
            curr->next = new ListNode(sum % 10);
            
            // Pointer ko aage khiskao
            curr = curr->next;
            
            // Lists ko bhi aage badhao agar woh khatam nahi hui hain
            if (l1 != NULL) l1 = l1->next;
            if (l2 != NULL) l2 = l2->next;
        }

        // dummy->next se asli answer shuru hota hai
        return dummy->next;
    }
};
