#ifndef QUEUE_H
#define QUEUE_H

#include "Stack.h"



class Queue : public Stack
{
public:
    Queue();
    cCell* getLast();               //геттер для поля last
    void setLast(cCell *last);      //cеттер для поля last
    void push(int data);            //добавляет новую ячейку в конец очереди
    int pop();                      //удаляет ячейку из начала очереди, возвращает её значение

private:
    cCell *last;
};

#endif // QUEUE_H
