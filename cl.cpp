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

    void print(){
        Node* temp = head ;
        if (head == tail){
            cout << head->data<<"->";
            
        }
        while (temp->next != head){
            cout<<temp->data<<" -> ";
            temp = temp->next;
        }     
        cout << " NULL ";
    }
};
int main(){
    Circularlist cl;
    cl.pushathead(1);
    cl.pushathead(2);
    cl.pushathead(3); 
    cl.pushathead(4);
    cl.print();
    return 0;
}