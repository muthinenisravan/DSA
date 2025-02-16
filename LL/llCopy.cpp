/*
 *https://leetcode.com/problems/copy-list-with-random-pointer/description/
A linked list of length n is given such that each node contains an additional random pointer, which could point to any node in the list, or null.
 *
 */


class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};

class Solution {
public:
    Node* copyRandomList(Node* head) {
        Node dummy(0);
        
        Node *nHead = &dummy;
        Node *nTail = nHead;
        
        Node *tmp = head;
        
        unordered_map<Node *, Node *>nTrack;
        
        while(tmp){
            
            Node *dCopy  = nullptr;
            Node *random = nullptr;
            
            if(nTrack.find(tmp) == nTrack.end())
            {
                dCopy = new Node(tmp->val);               
                nTrack[tmp] = dCopy;
                
            }else
            {
                dCopy = nTrack[tmp];
                dCopy->val = tmp->val;
            }
            
            if((tmp->random) && (nTrack.find(tmp->random) == nTrack.end()) )
            {
                random = new Node(0);
                nTrack[tmp->random] = random;
            }
            else
            {
                random = nTrack[tmp->random];    
            }

            dCopy->random = random;
            
            nTail->next = dCopy;
            nTail = nTail->next;
            
            tmp = tmp->next;

            
        }
        
        return nHead->next;
        
    }
};
