#ifndef Stack_H
#define Stack_H
#include <iostream>
#include "cCell.h"
using namespace std;

class Stack
{
public:
    Stack();
    void cPush(int data);                //добавляет новый элемент, ничего не возвращает
    int cPop();                          //удаляет элемент и возвращает его значение

    int cGetF();                        //возвращает data элемента, выходящего первым (сверху для стека и спереди для очереди)

    cCell* cGetFirst();                  //возвращает первую ячейку (поле first)
    void cSetFirst(cCell *first);        //задает первую ячейку (поле first)

    bool isEmpty();

    string getName();
    void setName(string name);
private:
    string name;
    cCell *first;
};

#endif // Stack_H
