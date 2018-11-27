#ifndef Stack_H
#define Stack_H
#include <iostream>
#include "cCell.h"
using namespace std;

class Stack
{
public:
    Stack();
    void push(int data);                //добавляет новый элемент, ничего не возвращает
    int pop();                          //удаляет элемент и возвращает его значение

    int getFirstD();                    //возвращает data элемента, выходящего первым (сверху для стека и спереди для очереди)
    void print();                       //печатает стек

    cCell* getFirst();                  //возвращает первую ячейку (поле first)
    void setFirst(cCell *first);        //задает первую ячейку (поле first)

    bool isEmpty();

    string getName();
    void setName(string name);
private:
    string name;
    cCell *first;
};

#endif // Stack_H
