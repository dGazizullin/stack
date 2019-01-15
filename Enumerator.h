#ifndef ENUMERATOR_H
#define ENUMERATOR_H
#include "Queue.h"
#include "Stack.h"
#include "Deck.h"

class Enumerator
{
public:
    Enumerator();
    Enumerator(Stack* coll);
    Enumerator(Deck* coll);

    void printColl();  //печатает коллекцию

    bool atEnd();       //текущий элемент - последний?

    void moveNext();
    void moveFirst();
    void moveLast();

    Stack* getColl();
    void setColl(Stack* coll);

    cCell* getCurr();
    void setCurr(cCell* cell);

    int item();     //выдает data текущего элемента коллекции, либо null, если коллекция пуста

private:
    Stack* coll;       //коллекция для перечисления
    Deck* collDeck;

    cCell* curr;       //текущая ячейка

};

#endif // ENUMERATOR_H
