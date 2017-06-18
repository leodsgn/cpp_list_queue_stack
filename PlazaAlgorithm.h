//
// Created by Leonardo Ribeiro on 18/06/17.
//

#ifndef TRABALHO_2A_VA_PLAZAALGORITHM_H
#define TRABALHO_2A_VA_PLAZAALGORITHM_H

#include <iostream>

#include "Node.h"
#include "List.h"
#include "Stack.h"
#include "Queue.h"

using namespace std;

// ------ Declaring structs --------

typedef struct food {
    string name;
} Food;

typedef struct book {
    string name;
} Book;

typedef struct people {
    Food * food;
    Book * book;
    string name;
} People;
// ------ End declaring structs --------

namespace Plaza {

    template<typename T>
    void listItems(Node<T> * node) {
        int id = 0;

        if(node == nullptr) {
            cout << "No items to show." << endl;
            return;
        }

        Node<T> * items = node;

        if(items->getNextNode() == nullptr) {
            cout << "Only 1 item to show: \n\n" << items->getValue()->name << endl;
        }

        else {
            cout << "=============  Listing Items  =============" << endl;
            while(items != nullptr) {
                id++;
                cout << id << ". " << items->getValue()->name << endl;
                items = items->getNextNode();
            }
            cout << "=============== End of Items ==============" << endl;
        }
    }

    void addPeopleToQueue(Queue<People> * queue) {
        People * people = new People;
        Food * food = new Food;
        Node<People> * node = new Node<People>();

        cout << "Name: " << endl;
        cin.sync();
        cin.get();
        getline(cin, people->name);

        cout << "Food that people is bringing: " << endl;
        cin.sync();
        cin.get();
        getline(cin, food->name);

        people->food = food;

        node->setValue(people);

        queue->enqueue(node);
    }

    void addFoodToList(List<Food> * list) {
        Food * food = new Food;
        Node<Food> * node = new Node<Food>();

        cout << "Name of the food: " << endl;
        cin.sync();
        cin.get();
        getline(cin, food->name);

        node->setValue(food);

        list->insert(node);
    }

    void addBookToStack(Stack<Book> * stack) {
        Book * book = new Book;
        Node<Book> * node = new Node<Book>();

        cout << "What is the name of the book?" << endl;
        cin.sync();
        cin.get();
        getline(cin, book->name);

        node->setValue(book);

        stack->push(node);
    }

// give food for book
    void giveFoodForBook(List<Food> * listOfFood, Queue<People> * queueOfPeople, Stack<Book> * stackOfBook) {

        Node<Food> * nodeOfFood = new Node<Food>();

        Node<People> * nodeOfPeople = queueOfPeople->dequeue();

        Node<Book> * nodeOfBook = stackOfBook->pop();

        if(nodeOfPeople->getValue()->food != nullptr) {
            nodeOfFood->setValue(nodeOfPeople->getValue()->food);

            listOfFood->insert(nodeOfFood);
            cout << listOfFood->getLastNode()->getValue()->name << " received by " << nodeOfPeople->getValue()->name << endl;


            if(nodeOfBook->getValue() != nullptr) {

                cout << ""<< nodeOfBook->getValue()->name << " book given!";

            }

            else {
                cout << "Sorry, our book stock is over! Take your food again";
                nodeOfPeople->getValue()->food = nodeOfFood->getValue();
            }
        }
        else {
            cout << "Sorry, but you have no food to trade for a book." << endl;
        }

    }

}

#endif //TRABALHO_2A_VA_PLAZAALGORITHM_H
