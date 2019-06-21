#include <bits/stdc++.h>

using namespace std;

class DoublyLinkedListNode {
    public:
        int data;
        DoublyLinkedListNode *next;
        DoublyLinkedListNode *prev;

        DoublyLinkedListNode(int node_data) {
            this->data = node_data;
            this->next = nullptr;
            this->prev = nullptr;
        }
};

class DoublyLinkedList {
    public:
        DoublyLinkedListNode *head;
        DoublyLinkedListNode *tail;

        DoublyLinkedList() {
            this->head = nullptr;
            this->tail = nullptr;
        }

        void insert_node(int node_data) {
            DoublyLinkedListNode* node = new DoublyLinkedListNode(node_data);

            if (!this->head) {
                this->head = node;
            } else {
                this->tail->next = node;
                node->prev = this->tail;
            }

            this->tail = node;
        }
};

void print_doubly_linked_list(DoublyLinkedListNode* node, string sep, ofstream& fout) {
    while (node) {
        fout << node->data;

        node = node->next;

        if (node) {
            fout << sep;
        }
    }
}

void free_doubly_linked_list(DoublyLinkedListNode* node) {
    while (node) {
        DoublyLinkedListNode* temp = node;
        node = node->next;

        free(temp);
    }
}

// Complete the sortedInsert function below.

/*
 * For your reference:
 *
 * DoublyLinkedListNode {
 *     int data;
 *     DoublyLinkedListNode* next;
 *     DoublyLinkedListNode* prev;
 * };
 *
 */
DoublyLinkedListNode* sortedInsert(DoublyLinkedListNode* head, int data) {

        DoublyLinkedListNode *p=head;
        DoublyLinkedListNode *p1 = new DoublyLinkedListNode(1);
        p1->data = data;

        if(p->data >= data){
            p1->next=head;
            p1->prev=NULL;
            head=p1;
        }
        else{
          while(p!=NULL && p->next!=NULL){
                if(p->data < data)
                p=p->next;
                else 
                break;
            }
            if(p->data >=data || p->next!=NULL){
                p1->prev=p->prev;
                p1->next=p;
                p->prev->next=p1;
                p->prev=p1;
            
            }
            else{
                p->next=p1;
                p1->prev=p;
                p1->next=NULL;
            }


                    
        }
        return head;

}

int main()