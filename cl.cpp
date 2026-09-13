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

    void deleteathead(){
        if (head == NULL){
            cout<<"no node available";
            return ;
        }
        else if(head == tail){
            delete head;
            head = NULL;
            tail = NULL;
            return ;
        }
        
        else{
            // using temp as the temprary pointer
            Node*temp = head;
            head = head->next;
            tail->next = head ;
            delete temp;

            // without using any temporary pointer 
            // tail->next = head->next;
            // head ->next = NULL;
            // delete head ;
            // head = tail->next;
        }
    }

    void print(){
        Node* temp = head ;
        if (head == NULL){
            cout << "no node in thr linked list";
            return ;
        }
        
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

    // cl.print();
    
    cl.pushattail(3);
    cl.pushattail(4);

    cl.deleteathead();
    cl.deleteathead();

    cl.print();
    return 0;
}