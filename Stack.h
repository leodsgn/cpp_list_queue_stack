//
// Created by Leonardo Ribeiro on 12/06/17.
//

#ifndef TRABALHO_2A_VA_STACK_H
#define TRABALHO_2A_VA_STACK_H


#include "Node.h"

template<typename T>
class Stack {
private:
    Node<T> * firstNode;
    Node<T> * lastNode;
    int size = 0;

public:
    Stack() {
        firstNode = nullptr;
        lastNode = nullptr;
    }

    Stack(Node<T> * node) {
        firstNode = node;
        lastNode = node;
        size++;
    }

    Node<T> * push(Node<T> * node) {

    }

    int getSize(){
        return size;
    }


};


#endif //TRABALHO_2A_VA_STACK_H
