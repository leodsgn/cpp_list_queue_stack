//
// Created by Leonardo Ribeiro on 12/06/17.
//

#ifndef TRABALHO_2A_VA_STACK_H
#define TRABALHO_2A_VA_STACK_H

#include <iostream>

#include "Node.h"

using namespace std;

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
        lastNode = firstNode;
        size++;
    }

    Node<T> * push(Node<T> * node) {
        if(firstNode == nullptr && lastNode == nullptr) {
            firstNode = node;
            lastNode = firstNode;
            size++;

            return lastNode;
        }
        else {
            if(firstNode->getNextNode() == nullptr) {
                firstNode->setNextNode(node);
                firstNode->getNextNode()->setPreviousNode(firstNode);
                lastNode = firstNode->getNextNode();
                size++;

                return lastNode;
            }

            else {
                Node<T> * aux = firstNode;

                while(aux->getNextNode() != nullptr) {
                    aux = aux->getNextNode();
                }

                aux->setNextNode(node);
                aux->getNextNode()->setPreviousNode(aux);
                lastNode = aux->getNextNode();
                size++;

                return lastNode;
            }
        }
    }

    Node<T> * pop() {
        if(firstNode == nullptr && lastNode == nullptr) {
            cout << "Nothing to pop. The Stack is empty!" << endl;
        }
        else {

            if(firstNode == lastNode) {
                Node<T> * aux = lastNode;
                firstNode = nullptr;
                lastNode = nullptr;

                size--;

                return aux;
            }

            else {

                Node<T> * aux = lastNode;
                lastNode = aux->getPreviousNode();
                lastNode->deleteNextNode();

                size--;

                return aux;

            }

        }
    }

    Node<T> * getFirstNode() {
        return firstNode;
    }

    int getSize(){
        return size;
    }


};


#endif //TRABALHO_2A_VA_STACK_H
