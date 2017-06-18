#ifndef TRABALHO_2A_VA_LIST_H
#define TRABALHO_2A_VA_LIST_H

#include <stdio.h>
#include <stdlib.h>
#include <iostream>

#include "Node.h"

using namespace std;

template<typename T>
class List {
private:
    Node<T> *first_value;
    Node<T> *last_value;
    int size = 0;


public:
    List() {
        this->first_value = nullptr;
        this->last_value = nullptr;
    }

    List(Node<T> * node) {
        Node<T> * no = node;

        if(this->first_value == nullptr) {
            this->first_value = no;
            this->last_value = no;
            size++;
        }
    }

    void insert(Node<T> * node) {

        if(first_value == nullptr) {
            first_value = node;
            last_value = node;
            size++;
        }

        else {
            Node<T> * aux = first_value;

            while(aux->getNextNode() != nullptr) {
                aux = aux->getNextNode();
            }

            aux->setNextNode(node);
            aux->getNextNode()->setPreviousNode(aux);
            this->last_value = aux->getNextNode();
            size++;
        }

    }

    Node<T> * findNode(Node<T> * node) {
        if(first_value == nullptr) {
            cout << "Nothing in the List." << endl;
        }
        else {
            Node<T> * aux = first_value;
            while(aux != node) {
                aux = aux->getNextNode();
            }

            if(aux->getValue() == node->getValue()) {
                return aux;
            }
        }
    }

    Node<T> * findNode(int index) {
        int start = 0;
        if(this->first_value == nullptr) {
            cout << "Nothing in the List." << endl;
        }
        else {
            Node<T> * aux = this->first_value;
            if(start < index) {
                while(start < index) {
                    aux = aux->getNextNode();
                    start++;
                }
            }

            return aux;
        }
    }

    void remove(Node<T> * node) {
        if(first_value == nullptr) {
            cout << "Nothing to remove." << endl;
        }
        else {
            Node<T> * aux = first_value;
            while(aux != node) {
                aux = aux->getNextNode();
            }

            if(aux->getValue() == node->getValue()) {
                if(aux->getNextNode() != nullptr){
                    aux->getPreviousNode()->setNextNode(aux->getNextNode());
                    this->last_value = aux;
                }
                delete aux;
                size--;
            }
        }
    }

    void remove(int index) {
        int start = 0;

        if(first_value == nullptr) {
            cout << "Nothing to remove." << endl;
        }

        else {
            Node<T> * aux = first_value;
            if(start < index) {
                while(start < index) {
                    aux = aux->getNextNode();
                    start++;
                }
            }

            if(aux->getNextNode() != nullptr){
                aux->getPreviousNode()->setNextNode(aux->getNextNode());
                this->last_value = aux;
            }
            delete aux;
            this->size--;
        }
    }

    Node<T> * getFirstNode() {
        return this->first_value;
    }

    Node<T> * getLastNode() {
        return this->last_value;
    }

    int getSize() {
        return this->size;
    }

    void clear() {
        if(this->first_value == nullptr) {
            cout << "List already clear!" << endl;
        }
        else {
            if(this->first_value->getNextNode() == nullptr) {
                Node<T> * aux = this->first_value;
                first_value = nullptr;
                last_value = nullptr;
                delete aux;
            }
            else {
                Node<T> * aux = this->first_value;
                Node<T> * aux2;

                while(aux->getNextNode() != nullptr) {
                    aux2 = aux->getNextNode();
                    delete aux;
                    aux = aux2;
                }

                this->first_value = nullptr;
                this->last_value = nullptr;
            }

            this->size = 0;
        }

    }

};

#endif //TRABALHO_2A_VA_LIST_H
