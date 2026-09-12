#include <iostream>
using namespace std;

const int MAX = 5;

class Stack {
private:
    int topIndex;
    int data[MAX];

public:
    Stack() {
        topIndex = -1;
    }

    bool isEmpty() {
        return topIndex == -1;
    }

    bool isFull() {
        return topIndex == MAX - 1;
    }

    void push(int value) {
        if (isFull()) {
            cout << "Stack is full. Cannot push " << value << endl;
            return;
        }
        data[++topIndex] = value;
        cout << value << " pushed into the stack." << endl;
    }

    void pop() {
        if (isEmpty()) {
            cout << "Stack is empty. Cannot pop." << endl;
            return;
        }
        cout << data[topIndex--] << " popped from the stack." << endl;
    }

    int peek() {
        if (isEmpty()) {
            cout << "Stack is empty." << endl;
            return -1;
        }
        return data[topIndex];
    }

    void display() {
        if (isEmpty()) {
            cout << "Stack is empty." << endl;
            return;
        }

        cout << "Stack elements: ";
        for (int i = topIndex; i >= 0; i--) {
            cout << data[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);
    s.display();

    cout << "Top element: " << s.peek() << endl;

    s.pop();
    s.display();

    return 0;
}
