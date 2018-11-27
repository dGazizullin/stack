#ifndef ENUMERATOR_H
#define ENUMERATOR_H
#include "Queue.h"
#include "Stack.h"

class Enumerator
{
public:
    Enumerator();
    Enumerator(Stack* coll);

    void printColl(Stack* coll);  //печатает коллекцию

    bool atEnd();       //текущий элемент - последний?

    void moveNext();
    void moveFirst();
    void moveLast();

    Stack* getColl();
    void setColl(Stack* coll);

    cCell* getCurr();
    void setCurr(cCell* cell);

private:
    Stack* coll;       //коллекция для перечисления
    cCell* curr;       //текущая ячейка
};

#endif // ENUMERATOR_H
