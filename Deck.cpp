#include "Deck.h"

#include <iostream>
using namespace std;

Deck::Deck() : Queue::Queue()
{
    this->cSetFirst(nullptr);
}

void Deck::pushFirst(int data)
{
    biCell *cell = new biCell(data);
    if (this->isEmpty())
    {
        this->cSetFirst(cell);
        this->csetLast(cell);
    }else
    {
        first = this->cGetFirst();
        first->setPrev(cell);
        cell->setNext(this->cGetFirst());
        this->cSetFirst(cell);
    }
}

void Deck::pushLast(int data)
{
    biCell *cell = new biCell(data);
    if (this->isEmpty())            //если дека пуста
    {
        this->cSetFirst(cell);      //новая ячейка - первая
        this->csetLast(cell);       //и последняя
        if(this->cgetLast() != nullptr)
        {
            biCell* curLast = this->cgetLast();
            int a = curLast->getData();
            cout << a;

        }

    }else
    {
     //   получаем текущую последнюю ячейку
        biCell* curLast = this->cgetLast();
        int a = curLast->getData();

        curLast->setPrev(cell);     //предудущая для текущей "последней" - новая, действительно последняя
        cell->setNext(curLast);     //а для новой текущая - следующая
        this->csetLast(cell);       //обновляем последнюю ячейку в экземпляре деки
    }
}

void Deck::csetLast(biCell* last)
{
    this->last = last;
}

biCell* Deck::cgetLast()
{
    return this->last;
}

void Deck::cSetFirst(biCell* first)
{
    this->first = first;
}

biCell* Deck::cGetFirst()
{
    return this->first;
}
