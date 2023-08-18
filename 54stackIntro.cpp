/*In computer science, a stack is an abstract data type that follows the Last-In-First-Out (LIFO) principle. It is a collection of elements with two main operations: "push," which adds an element to the top of the stack, and "pop," which removes the topmost element from the stack. The order in which elements are added or removed from a stack is known as "last in, first out" because the last element pushed onto the stack is the first one to be popped off.
Here are the basic operations associated with a stack:
Push: The push operation adds an element to the top of the stack. It increases the stack's size by one and places the new element at the top.
Pop: The pop operation removes the topmost element from the stack. It decreases the stack's size by one and returns the element that was removed.
Peek or Top: This operation retrieves the topmost element from the stack without removing it.
IsEmpty: This operation checks whether the stack is empty or not. It returns true if the stack is empty, and false otherwise.*/

#include<iostream>
#include<stack>
using namespace std;
class Stack{
    public:
    //properties 
    int* arr;
    int size;
    int top;
    // vehaviour
    Stack(int size){
        this -> size = size; //initializing size
        arr = new int[size]; //
        top = -1;
    }
    void push(int element){ //fun
        if(size - top > 1){
            top++;
            arr[top]=element;
        }
        else{
            cout<<"stack is overflow"<<endl;
        }

    }
    void pop(){
        if(top >= 0){
            top--;
            
        }
        else{
            cout<<"stack underflow"<<endl;
        }

    }
    int peek(){
        if(top >= 0){
            return arr[top];
           

            }
             else{
                cout<<"stack is empty"<<endl;
                return -1;

        }

    }
    bool isEmpty(){
        if(top == -1){
            return true;
        }
        else {
        return false;
        }

    }

};
int main(){
    Stack st(5);
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(7);    
    st.push(6);
    cout<< st.peek()<<endl;
    st.pop();
    cout<< st.peek()<<endl;


}

