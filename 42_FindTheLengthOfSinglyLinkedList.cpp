//Linked List


/*

Given a singly linked list. The task is to find the length of the linked list, 
where length is defined as the number of nodes in the linked list.
Input:
LinkedList: 1->2->3->4->5
Output: 5
Explanation: Count of nodes in the 
linked list is 5, which is its length.
*/

//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};


class Solution
{
    public:
    //Function to count nodes of a linked list.
    int getCount(struct Node* head){
    
    	//my code
    	//firstly pehle ek pointer bananya
    	//then usme head ki value dali 
    	//jab tak ptr null nhi ho jata 
    	//wo next node pe jate rahega.
        struct Node* ptr;
        ptr = head;
        int length = 0;
        while(ptr){
            length++;
            ptr = ptr->next;
        }
        
        return length;
        
        //my code end
    
    }
};
    


//{ Driver Code Starts.

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;

        int data;
        cin>>data;
        struct Node *head = new Node(data);
        struct Node *tail = head;
        for (int i = 0; i < n-1; ++i)
        {
            cin>>data;
            tail->next = new Node(data);
            tail = tail->next;
        }
        Solution ob;
        cout << ob.getCount(head) << endl;
    }
    return 0;
}
// } Driver Code Ends
