#include "Stack.h"
#include "cCell.h"
#include <iostream>
using namespace std;

Stack::Stack()
{
    this->cSetFirst(nullptr);
}

//ДОБАВЛЕНИЕ ЭЛЕМЕНТА В СПИСОК
void Stack::cPush(int data)
{
    cCell *cell = new cCell;                 // образуем пустую ячейку
    cell->setData(data);                        //кладем туда данные
    if (this->cGetFirst() == nullptr)         //если 1-й элемент стека
    {
        this->cSetFirst(cell);       //новая ячейка - первая
        cell->setNext(nullptr);     //кладем в ячейку нуль-указатель
    }else                           //если стек уже не пуст
    {
        cell->setNext(this->cGetFirst());    //помещаем в указатель на следующий элемент адрес предудущей ячейки
        this->cSetFirst(cell);               //теперь новая ячейка - первая
    }
}


int Stack::cPop()
{
    if(!this->isEmpty())              //если стек не пустой
    {
        cCell *first = this->cGetFirst();        //получаем первый элемент стека
        int d = first->getData();                  //получаем данные удаляемой ячейки
        if(first->getNext() != nullptr)             //если первый элемент - не единственный в стеке
        {
            this->cSetFirst(first->getNext());       //новый первый элемент - тот, что был вторым
            delete first;                           //очищаем память
            return d;                               //возвращаем данные удаляемого элемента
        }else                                        //если в стеке 1 элемент
        {
            this->cSetFirst(nullptr);                //удаляем его
            return d;                               //возвращаем данные удаляемого элемента
        }
    }else                                           //если стек пуст
    {
        cout << "\nStack is empty.\n";
        return false;
    }
}

int Stack::cGetF()
{
    cCell *first = this->cGetFirst();
    return first->getData();
}

bool Stack::isEmpty()
{
    if(this->cGetFirst() == nullptr) return true;
    return false;
}


//печатает стек(очередь) сверху(спереди)
void Stack::print()
{
    cCell* cur = this->cGetFirst();
    while(cur)
    {
        cout << "\n" << cur->getData();
        cur = cur->getNext();
    }
}

cCell* Stack::cGetFirst()
{
    return this->first;
}

void Stack::cSetFirst(cCell *first)
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
