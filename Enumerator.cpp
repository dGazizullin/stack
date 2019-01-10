#include "Enumerator.h"
#include "Stack.h"
#include "Queue.h"
#include <typeinfo>

Enumerator::Enumerator()
{}

Enumerator::Enumerator(Stack* coll)
{
    try
    {
        this->coll = coll;
        this->setCurr(nullptr);
    }catch(int e)
    {
        if(!coll->cGetFirst())
            throw ("No data in collection.");
    }
}

void Enumerator::moveNext()
{
    if(!this->atEnd())
    {
        cCell *cur = this->getCurr();
        this->setCurr(cur->getNext());
    }else
    this->setCurr(nullptr);
}

void Enumerator::moveFirst()
{
    coll =  this->getColl();
    this->setCurr(coll->cGetFirst());
}

void Enumerator::moveLast()
{
//нельзя, так как очередь, переданная в коллекцию,
//записывается в поле типа стек и поэтому
//обратиться к методу очереди cgetLast() уже не получится
//    coll = this->getColl();
//    if(coll->cgetLast())
//   {
//        this->setCurr(coll->cgetLast());
//   }else
    this->moveFirst();
    while(!this->atEnd())
    {
        this->moveNext();
    }
}

bool Enumerator::atEnd()
{
    coll = this->getColl();
    if(!coll->isEmpty())
    {
        cCell* cur = this->getCurr();
        if(cur->getNext() != nullptr) return false;
        else return true;
    }//return true;  //в зависимости от реализации основных enum-методов
}

Stack* Enumerator::getColl()
{
    return this->coll;
}

void Enumerator::setColl(Stack* coll)
{
    this->coll = coll;
}

cCell* Enumerator::getCurr()
{
    return this->curr;
}

void Enumerator::setCurr(cCell* curr)
{
    this->curr = curr;
}


void Enumerator::printColl()
{
    coll = this->getColl();             //получаем коллекцию
    if(!coll->isEmpty())                //если коллекция не пуста
    {
        this->setCurr(coll->cGetFirst());   //устанавливаем текущий указатель на первый элемент
        while(true)                         //апасна!
        {
            cout <<  this->item() << "   ";    //печатаем данные из текущей ячейки
            if(!this->atEnd()) this->moveNext();        //если ячейка не последняя, перейти к следующей
            else break;                                 //иначе - выйти из цикла
        }
    }else cout << "Collection is empty.";
}

void Enumerator::printDeck()
{
    coll = this->getColl();             //получаем коллекцию
    if(!coll->isEmpty())                //если коллекция не пуста
    {
        this->setCurr(coll->cGetFirst());   //устанавливаем текущий указатель на первый элемент
        while(true)                         //апасна!
        {
            cout <<  this->item() << "   ";    //печатаем данные из текущей ячейки
            if(!this->atEnd()) this->moveNext();        //если ячейка не последняя, перейти к следующей
            else break;                                 //иначе - выйти из цикла
        }
    }else cout << "Collection is empty.";
}

int Enumerator::item()
{
    cCell* cur = this->getCurr();
    return cur->getData();
}
