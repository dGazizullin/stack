#ifndef ENUMERATOR_H
#define ENUMERATOR_H
#include "Queue.h"
#include "Stack.h"

class Enumerator
{
public:
    Enumerator();
    Enumerator(Stack* coll);

    void printColl();  //печатает коллекцию
    void printDeck();

    bool atEnd();       //текущий элемент - последний?

    void moveNext();
    void moveFirst();
    void moveLast();       //проверить: если очередь, то сразу получить last

    Stack* getColl();
    void setColl(Stack* coll);

    cCell* getCurr();
    void setCurr(cCell* cell);

    int item();     //выдает data текущего элемента коллекции, либо null, если коллекция пуста

private:
    Stack* coll;       //коллекция для перечисления
    cCell* curr;       //текущая ячейка
};

#endif // ENUMERATOR_H
