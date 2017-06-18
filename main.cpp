#include <iostream>

#include "Node.h"
#include "List.h"

using namespace std;


// ------ Declaring structs --------

typedef struct food {
    string name;
} Food;

typedef struct book {
    string name;
} Book;

typedef struct people {
    Food food;
    Book book;
    string name;
} People;
// ------ End declaring structs --------



int main() {

    List<Food> * listOfFood= new List<Food>();

    Food * carrots = new Food;
    Food * salsage = new Food;


    salsage->name = "Salsage";
    carrots->name = "Carrots";

    Node<Food> * food = new Node<Food>(carrots);
    Node<Food> * food2 = new Node<Food>(salsage);

    listOfFood->insert(food);

    cout << listOfFood->findNode(0)->getValue()->name << endl;
    cout << listOfFood->getSize() << endl;

    listOfFood->insert(food2);

    cout << listOfFood->findNode(1)->getValue()->name << endl;
    cout << listOfFood->getSize() << endl;

    listOfFood->clear();

    cout << listOfFood->getSize() << endl;



    return 0;

}