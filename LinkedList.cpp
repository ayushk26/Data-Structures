#include<iostream>
using namespace std;

struct LinkedListNode
{
    int data;
    LinkedListNode *next;

    void printList(LinkedListNode *head){
        LinkedListNode* current = head;
        while (current !=NULL){
            cout<<current->data<<" ";
            current = current->next;  
        }
        cout<<"\n";
        return;
    }
    int length(LinkedListNode *head){
        LinkedListNode *current = head;
        int len =1;
        while(current->next !=NULL){
            len++;
            current = current->next;
        }
        return len;
    }
    void addNode(LinkedListNode* head,LinkedListNode* newNode,int p){
        LinkedListNode *current = head;
        if(p ==1){
            newNode->next = head;
            head = newNode;
        }
        else{
            for(int i=1;i<p-1;i++){
                current = current->next;
            }
            LinkedListNode* temp = current->next;
            current->next = newNode;
            newNode->next = temp; 
        }
    }

    void removeNode(LinkedListNode* head,data){
        
    }

};

int main(){
    LinkedListNode node4 = {4,NULL};
    LinkedListNode node3 = {3,&node4};
    LinkedListNode node2 = {2,&node3};
    LinkedListNode node1 = {1,&node2};
    LinkedListNode node5 = {5,NULL};
    node1.addNode(&node1,&node5,1);
    node1.printList(&node1);
    cout<<node1.length(&node1);
}
