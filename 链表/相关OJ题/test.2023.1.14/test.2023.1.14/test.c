#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
//NowCoder
//BM4
// 
//struct ListNode 
//{
//    int val;
//    struct ListNode *next;
//};
//struct ListNode* Merge(struct ListNode* pHead1, struct ListNode* pHead2)
//{
//    struct ListNode* prevhead = (struct ListNode*)malloc(sizeof(struct ListNode));
//    struct ListNode* prev = prevhead;
//    prevhead->next = NULL;
//    while (pHead1 && pHead2)
//    {
//        if (pHead1->val >= pHead2->val)
//        {
//            prev->next = pHead2;
//            prev = pHead2;
//            pHead2 = pHead2->next;
//        }
//        else
//        {
//            prev->next = pHead1;
//            prev = pHead1;
//            pHead1 = pHead1->next;
//        }
//    }
//    if (pHead1 == NULL)
//    {
//        prev->next = pHead2;
//    }
//    else
//    {
//        prev->next = pHead1;
//    }
//    struct ListNode* List = prevhead->next;
//    free(prevhead);
//    return List;
//    // write code here
//}
