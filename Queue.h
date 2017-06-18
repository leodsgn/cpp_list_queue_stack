//
// Created by Leonardo Ribeiro on 12/06/17.
//

#ifndef TRABALHO_2A_VA_QUEUE_H
#define TRABALHO_2A_VA_QUEUE_H


#include <stdlib.h>
#include <stdio.h>
#include <iostream>

#include "Node.h"

using namespace std;

template<typename T>
class Queue {
private:
    Node<T> * firstNode;
    Node<T> * lastNode;
    int size = 0;

public:
    Queue() {
        firstNode = nullptr;
        lastNode = nullptr;
    }

    Queue(Node<T> * node) {
        if(firstNode == nullptr) {
            this->firstNode = node;
            this->lastNode = node;
            size++;
        }
    }

    Node<T> * enqueue(Node<T> * node) {
        if(firstNode == nullptr && lastNode == nullptr) {
            firstNode = node;
            lastNode = node;

            return firstNode;
        }
        else {
            Node<T> * aux = firstNode;
            lastNode = node;
            if(aux->getNextNode() == nullptr) {
                aux->setNextNode(node);
                aux->getNextNode()->setPreviousNode(aux);
                return aux->getNextNode();
            }
            else {
                while(aux->getNextNode() != nullptr) {
                    aux = aux->getNextNode();
                }
                aux->setNextNode(node);
                aux->getNextNode()->setPreviousNode(aux);
                size++;

                return aux->getNextNode();
            }
        }
    }

    Node<T> * dequeue() {
        if(firstNode == nullptr && lastNode == nullptr) {
            cout << "No nodes found in this queue" << endl;
        }
        else {

            if(firstNode->getNextNode() == nullptr) {
                Node<T> * aux = firstNode;
                delete firstNode;
                delete lastNode;
                cout << "Queue is now empty" << endl;
                size--;
                return aux;
            }

            else {
                Node<T> * aux = firstNode;
                firstNode = aux->getNextNode();
                firstNode->setPreviousNode(nullptr);

                size--;

                return aux;
            }
        }
    }


    int getSize() {
        return size;
    }
};

#endif //TRABALHO_2A_VA_QUEUE_H
