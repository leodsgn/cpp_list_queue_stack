#include <iostream>

#include "List.h"
#include "Stack.h"
#include "Queue.h"
#include "PlazaAlgorithm.h"

using namespace std;

// Initialize
List<Food> * foodList = new List<Food>();
Stack<Book> * bookStack = new Stack<Book>();
Queue<People> * peopleQueue = new Queue<People>();

void mainMenu();

int main() {

    cout << "Hey! Let's get started with our book delivery for food!" << endl;
    mainMenu();

    return 0;

}

void mainMenu(){
    int option;
    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n";
    cout << "===============   Plaza Algorithm   ===============" << endl;
    cout << "1. add people to the queue;" << endl;
    cout << "2. add book to the stack" << endl;
    cout << "3. list all people in queue" << endl;
    cout << "4. list all books in stack" << endl;
    cout << "5. list all foods in list" << endl;
    cout << "6. give food and get a book" << endl;
    cout << "0. exit" << endl;

    cin >> option;

    switch (option) {
        case 1:
            Plaza::addPeopleToQueue(peopleQueue);
            mainMenu();
            break;
        case 2:
            Plaza::addBookToStack(bookStack);
            mainMenu();
            break;
        case 3:
            Plaza::listItems(peopleQueue->getFirstNode());
            mainMenu();
            break;
        case 4:
            Plaza::listItems(bookStack->getFirstNode());
            mainMenu();
            break;
        case 5:
            Plaza::listItems(foodList->getFirstNode());
            mainMenu();
            break;
        case 6:
            Plaza::giveFoodForBook(foodList, peopleQueue, bookStack);
            mainMenu();
            break;
        case 0:
            exit(0);
        default:
            mainMenu();
            break;
    }
}