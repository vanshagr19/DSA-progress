#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = nullptr;
    }
};

class Stack {
private:
    Node* topNode;
    int count;

public:
    Stack() {
        topNode = nullptr;
        count = 0;
    }

    bool empty() const {
        return topNode == nullptr;
    }

    int size() const {
        return count;
    }

    void push(int value) {
        Node* newNode = new Node(value);
        newNode->next = topNode;
        topNode = newNode;
        count++;
        cout << "Pushed: " << value << endl;
    }

    void pop() {
        if (empty()) {
            cout << "Stack is empty. Cannot pop." << endl;
            return;
        }

        Node* temp = topNode;
        int value = temp->data;
        topNode = topNode->next;
        delete temp;
        count--;
        cout << "Popped: " << value << endl;
    }

    int peek() const {
        if (empty()) {
            cout << "Stack is empty." << endl;
            return -1;
        }
        return topNode->data;
    }

    void display() const {
        if (empty()) {
            cout << "Stack is empty." << endl;
            return;
        }

        Node* current = topNode;
        cout << "Stack elements from top to bottom: ";
        while (current != nullptr) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }

    ~Stack() {
        while (!empty()) {
            pop();
        }
    }
};

int main() {
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);
    s.display();

    cout << "Top element: " << s.peek() << endl;
    cout << "Stack size: " << s.size() << endl;

    s.pop();
    s.display();

    return 0;
}
