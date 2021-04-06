#include<bits/stdc++.h>
using namespace std;

class ListNode {
public:
    int val;
    ListNode *nxt;
    ListNode() {
        val = 0, nxt = NULL;
    }
    ListNode(int v) {
        val = v, nxt = NULL;
    }
    ListNode(int v, ListNode *nx) {
        val = v, nxt = nx;
    }
};

ListNode* insertBegin(ListNode *head, int x) {
    ListNode *temp = new ListNode(x,head);
    return temp;
}

void print(ListNode *head) {
    ListNode *cur = head;
    while(cur != NULL) {
        cout << cur->val << " ";
        cur = cur->nxt;
    }
    cout << endl;
}

void reverseLinkedList(ListNode *head){
    ListNode *cur = head;



}

int main() {
    ListNode *head = NULL;
    for(int x = 1; x <= 10; x++) {
        head = insertBegin(head, x);
    }

    reverseLinkedList(head);
}
