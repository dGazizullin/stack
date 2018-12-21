#ifndef QUEUE_H
#define QUEUE_H

#include "Stack.h"

class Queue : public Stack
{
public:
    Queue();

    cCell* cgetLast();               //геттер для поля last
    void csetLast(cCell *last);      //cеттер для поля last

    void cPush(int data);            //добавляет новую ячейку в конец очереди
    int cPop();                      //удаляет ячейку из начала очереди, возвращает её значение

    bool isEmpty();

private:
    cCell *last;
};

#endif // QUEUE_H
