﻿#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {

        if (head == nullptr) return nullptr;

        ListNode* unDupCurr = head;

        while (unDupCurr->next != nullptr)
        {
            if (unDupCurr->next->val == unDupCurr->val)
            {
                if (unDupCurr->next->next != nullptr) unDupCurr->next = unDupCurr->next->next;
                else unDupCurr->next = nullptr;                    
            }
            else unDupCurr = unDupCurr->next;
        }
        return head;
    }
};

void printList(ListNode* head) {

    ListNode* current = head;
    
    while (current != nullptr) {
        cout << current->val << " ";
        current = current->next;
    }
    cout << '\n';
}

int main()
{
    Solution s;
    ListNode* node1 = new ListNode(1);
    ListNode* node2 = new ListNode(1);
    ListNode* node3 = new ListNode(1);
    ListNode* node4 = new ListNode(2);
    ListNode* node5 = new ListNode(2);
    ListNode* node6 = new ListNode(3);

    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;
    node5->next = node6;


    printList(node1);
    s.deleteDuplicates(node1);
    printList(node1);
}