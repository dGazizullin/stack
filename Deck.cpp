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

    }else
    {
		// получаем текущую последнюю ячейку
        biCell* curLast = this->cgetLast();
        curLast->setNext(cell);
        cell->setPrev(curLast);
        this->csetLast(cell);
    }
}

int Deck::popLast()
{
	if (!this->isEmpty())              //если дека не пуста
	{
		biCell *last = this->cgetLast();        //получаем первый элемент стека
		int d = last->getData();                  //получаем данные удаляемой ячейки
		if (last->getPrev() != nullptr)             //если первый элемент - не единственный в стеке
		{
			this->csetLast(last->getPrev());       //новый первый элемент - тот, что был вторым
			delete last;                           //очищаем память
			return d;                               //возвращаем данные удаляемого элемента
		}else
		{
			this->cSetFirst(nullptr);
			this->csetLast(nullptr);
			return d;                               //возвращаем данные удаляемого элемента
		}
	}
	else                                           //если стек пуст
	{
		cout << "\nDeck is empty.\n";
		return false;
	}
}

int Deck::popFirst()
{
	if (!this->isEmpty()) //если дека не пустая
	{
		biCell *first = this->cGetFirst();    //получаем первую ячейку
		int d = first->getData();              //запоминаем данные первой ячейки для return'а
		if (first->getNext() != nullptr)     //если она не единственная
		{
			this->cSetFirst(first->getNext());   //теперь первая в деке - та ячейка, что была второй
			first = this->cGetFirst();           //получаем первую ячейку
			return d;
		}else                           //если в деке единственная ячейка
		{
			this->cSetFirst(nullptr);    //зануляем указатели на первую
			this->csetLast(nullptr);     //и последнюю ячейки
			return d;                   //возвращаем значение удаленной ячейки
		}
	}else               //если дека пустая
	{
		cout << "\nDeck is empty.\n";
		return false;
	}
}

void Deck::neTrogay()
{
    biCell* cell = this->cGetFirst();

    while(true)
    {
        cout << "\n" << cell->getData();

        if(cell->getNext() != nullptr)
        cell = cell->getNext();
        if(cell->getNext() == nullptr)
        {
            cout << cell->getData();
            break;
        }
    }
}

int Deck::cPop()
{
	int data = this->popLast();
	return data;
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

bool Deck::isEmpty()
{
	if (this->cGetFirst() == nullptr and this->cgetLast() == nullptr) return true;
	else if (this->cGetFirst() != nullptr and this->cgetLast() != nullptr) return false;
	throw("first == nullptr and last != nullptr or contrariwise.");
}
