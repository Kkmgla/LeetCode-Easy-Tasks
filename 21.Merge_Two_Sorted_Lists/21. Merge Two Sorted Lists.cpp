#include <iostream>
#include <string>
#include <iostream>

using namespace std;

//Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if (l1 == nullptr) return l2;
        if (l2 == nullptr) return l1;

        if (l1->val < l2->val) {
            l1->next = mergeTwoLists(l1->next, l2);
            return l1;
        }
        else {
            l2->next = mergeTwoLists(l1, l2->next);
            return l2;
        }
    }
};



int main()
{
    ListNode* node1 = new ListNode(1);
    ListNode* node2 = new ListNode(2);
    ListNode* node3 = new ListNode(6);
    ListNode* node4 = new ListNode(9);
    ListNode* node5 = new ListNode(10);

    ListNode* node6 = new ListNode(3);
    ListNode* node7 = new ListNode(5);
    ListNode* node8 = new ListNode(7);


    // Устанавливаем связи между узлами
    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;

    node6->next = node7;
    node7->next = node8;


    Solution s;
    ListNode* hh = s.mergeTwoLists(node1, node6);

    // Выводим значения узлов
    while (hh != nullptr) {
        std::cout << hh->val << " ";
        hh = hh->next;
    }
}