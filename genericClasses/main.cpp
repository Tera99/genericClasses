//
//  main.cpp
//  genericClasses
//
//  Created by Terezie Schaller on 7/4/18.
//  Copyright © 2018 Terezie Schaller. All rights reserved.
//
//  Udemy, Advanced C++ Training Course by Infinite Skills
//  Section 3, LEcture 18

#include <iostream>
#include <string>

using namespace std;

//write a generic class definition that works with multple
//data types using templates

template <typename T>
class Stack{
private:
    T datastack[100];
    int top;
    
public:
    Stack(){
        top = -1;
    }
    
    void push(T newItem){
        ++top;
        datastack[top] = newItem;
    }
    
    T pop(){
        T myValue = datastack[top];
        if (top >= 0){
            --top;
        } else {
            cout << "stack error: ";
        }
        return myValue;
    }
    
    T peek(){
        if (top >= 0){
            return datastack[top];
        } else {
            cout << "Stack error: ";
            return datastack[top];
        }
    }
};

int main(int argc, const char * argv[]) {
    // insert code here...
    cout << "This program demonstrates generic class in C++\n";
    
    Stack<int> st1;
    cout << st1.peek() << endl;
    cout << st1.pop() << endl;
    st1.push(7);
    st1.push(15);
    st1.push(3);
    cout << st1.peek() << endl;
    cout << st1.pop() << endl;
    cout << st1.peek() << endl;
    cout << st1.pop() << endl;
    cout << st1.peek() << endl;
    cout << st1.pop() << endl;
    
    Stack<double> st2;
    st2.push(7.333);
    st2.push(13.777);
    cout << st2.pop() << endl;
    cout << st2.pop() << endl;
    cout << st2.pop() << endl;
    
    Stack<string> st3;
    st3.push("rockstar");
    st3.push("is a");
    st3.push("Tera");
    cout << st3.pop() << endl;
    cout << st3.pop() << endl;
    cout << st3.pop() << endl;
    
    
    
    return 0;
}






