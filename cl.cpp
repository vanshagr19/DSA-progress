#include<iostream>
using namespace std;
class Node{
    public:
    int data ;
    Node* next ;
    Node(int val){
        data = val;
        next = NULL;
    }
};
class Circularlist{
    Node* head;
    Node* tail;

public:
    Circularlist(){
    head = tail =NULL;
    }

    void pushathead(int val){
        Node* newnode = new Node(val);
        if (head == NULL){
            head = tail =newnode;
            tail ->next = head;
        }
        else{
            newnode ->next = head;
            head = newnode;
            tail->next = head;
        }
    }

    void pushattail(int val){
        Node* newnode = new Node(val);
        if (head == NULL){
            head =tail = newnode;
            tail -> next = head ;
        }
        else{
            tail->next = newnode;
            tail = newnode;
            tail->next = head;
        }
    }

    void print(){
        Node* temp = head ;
        
        while (temp->next != head){
            cout<<temp->data<<" -> ";
            temp = temp->next;
        }
        cout<<temp->data <<"->";     
        cout << " NULL ";
    }
};
int main(){
    Circularlist cl;
    cl.pushathead(2);
    cl.pushathead(1);
    
    cl.pushattail(3);
    cl.pushattail(4);
    
    cl.print();
    return 0;
}