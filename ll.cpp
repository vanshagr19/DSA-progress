#include<iostream>
using namespace std ;
class Node{
    public:
    int data ;
    Node* next;
    Node(int val){
        data = val;
        next = NULL;
    }
};
class list{
    Node* head;
    Node* tail;

public:
    list(){
    head = tail =NULL;
    }

    void push_front(int val){
        Node* newnode = new Node(val);
        if (head == NULL){
            head = tail = newnode;
            return ;
        }
        else{
            newnode->next = head;
            head = newnode;
            
        }

    }
    void push_back(int val){
        Node* newnode = new Node(val);
        if (head == NULL){
            head = tail = newnode ;
            return ;
        }
        else{
            tail->next = newnode;
            tail = newnode;
        }
    }
    void pop_front(){
        if (head == NULL){
            return ;
        }
        else{
        Node* temp = head ;
        head = head->next;
        temp->next = NULL;
        delete temp ;     
        }
    }    
    void pop_back(){
        if (head == NULL){
            return ;
        }
        if (head == tail) {
            delete head;
            head = tail = NULL;
            return;
        }
        else {
            Node* temp = head;
            while(temp->next != tail){
                temp = temp->next;
            }
            temp->next = NULL;
            delete tail;
            tail = temp;

        }
    }
    void insert(int pos ,int data){
        if (pos < 0){
            cout << "invalid case";
            return ;
        }
        else if (pos == 0 ){
            push_front(data);
            return ;
        }
        else{
            Node* temp = head ;
            Node* newnode = new Node(data);
            for(int i = 0 ;i<pos-1;i++){
                if (temp == NULL){
                    cout<<"Invlid position\n";
                    return ;
                }
                temp = temp->next;
            }
            newnode->next = temp->next;
            temp->next = newnode;
        }
    }
    int search(int key){
        Node* temp =head;
        int i = 0;
        while(temp->next != NULL){
            if (temp->data == key){
                return i ;
            }
            i++;
            temp = temp->next;
        }
        return -1;
    }
    void print(){
    Node* temp = head;
    while (temp != NULL){
    cout<<temp->data<<"-> ";  
    temp = temp->next;   
    }
    cout<<"NULL";
}
};

int main(){
list ll;
    ll.push_front(1);
    ll.push_front(2); 
    ll.push_front(3); 
    ll.print();
    cout <<endl;
    ll.push_back(4);
    ll.push_back(5);
    ll.print();
    cout <<endl;
    
    // ll.pop_front();
    // ll.print();
    // cout <<endl;

    // ll.pop_back();
    // ll.print();
    // cout<<endl;

    // ll.insert(9,10);
    // ll.print();
    cout<<ll.search(8);

    
    return 0;
}