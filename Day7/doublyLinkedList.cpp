#include<iostream>
#include<stdlib.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node* prev;
    
    Node(int data){
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};
void traverse(Node* head){
    
}
int main(){
    Node* head = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);

    head->next = second;
    second->prev = head;
    second->next = third;
    third->prev = second;

   
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    
    return 0;
}
