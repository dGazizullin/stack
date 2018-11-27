#include "Stack.h"
#include "cCell.h"
#include <iostream>
using namespace std;

Stack::Stack()
{
    this->setFirst(nullptr);
}


//ДОБАВЛЕНИЕ ЭЛЕМЕНТА В СПИСОК
void Stack::push(int data)
{
    cCell *cell = new cCell;                 // образуем пустую ячейку
    cell->setD(data);                        //кладем туда данные
    if (this->getFirst() == nullptr)         //если 1-й элемент стека
    {
        this->setFirst(cell);       //новая ячейка - первая
        cell->setNext(nullptr);     //кладем в ячейку нуль-указатель
    }else                           //если стек уже не пуст
    {
        cell->setNext(this->getFirst());    //помещаем в указатель на следующий элемент адрес предудущей ячейки
        this->setFirst(cell);               //теперь новая ячейка - первая
    }
}


int Stack::pop()
{
    if(this->getFirst() != nullptr)              //если стек не пустой
    {
        cCell *first = this->getFirst();        //получаем первый элемент стека
        int d = first->getD();                  //получаем данные удаляемой ячейки
        if(first->getNext() != nullptr)             //если первый элемент - не единственный в стеке
        {
            this->setFirst(first->getNext());       //новый первый элемент - тот, что был вторым
            delete first;                           //очищаем память
            return d;                               //возвращаем данные удаляемого элемента
        }else                                       //если в стеке 1 элемент
        {
            this->setFirst(nullptr);                //удаляем его
            return d;                               //возвращаем данные удаляемого элемента
        }
    }else                                           //если стек пуст
    {
        cout << "\nStack is empty.\n";
        return false;
    }
}

int Stack::getFirstD()
{
    cCell *first = this->getFirst();
    return first->getD();
}


//печатает стек(очередь) сверху(спереди)
void Stack::print()
{
    cCell* cur = this->getFirst();
    while(cur)
    {
        cout << "\n" << cur->getD();
        cur = cur->getNext();
    }
}

cCell* Stack::getFirst()
{
    return this->first;
}

void Stack::setFirst(cCell *first)
{
    this->first = first;
}

string Stack::getName()
{
    return this->name;
}

void Stack::setName(string name)
{
    this->name = name;
}
