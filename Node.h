//
// Created by Leonardo Ribeiro on 12/06/17.
//

#ifndef TRABALHO_2A_VA_NODE_H
#define TRABALHO_2A_VA_NODE_H

template<typename T>
class Node {

private:
    T * value;
    Node<T> * nextNode;
    Node<T> * previousNode;

public:
    Node(T * value){
        this->value = value;
        nextNode = nullptr;
        previousNode = nullptr;
    }

    Node(){
        value = nullptr;
        nextNode = nullptr;
        previousNode = nullptr;
    }

    ~Node() {
        Node<T> * temp;
    }

    void setValue(T * value) {
        this->value = value;
    }

    void setNextNode(Node<T> * node) {
        this->nextNode = node;
    }

    void setPreviousNode(Node<T> * node) {
        this->previousNode = node;
    }

    T * getValue() {
        return this->value;
    }

    Node<T> * getNextNode() {
        return this->nextNode;
    }

    Node<T> * getPreviousNode() {
        return this->previousNode;
    }
};

#endif //TRABALHO_2A_VA_NODE_H
