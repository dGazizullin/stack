#include "Queue.h"

Queue::Queue()
{
    this->csetLast(nullptr);
    this->setName("");
}

cCell* Queue::cgetLast()
{
    return this->last;
}

void Queue::csetLast(cCell *last)
{
    this->last = last;
}

void Queue::cPush(int data)
{
    cCell *cell = new cCell(data);        //создаем новую ячейку
    if (this->isEmpty())            //если очередь пустая
    {
        this->cSetFirst(cell);   //новая ячейка - первая
        this->csetLast(cell);    //и последняя одновременно
        cell->setNext(nullptr);  //пишем нуль-указатель в саму ячейку
    }else                        //если очередь не пустая
    {
        last = this->cgetLast();       //получаем последнюю ячейку
        last->setNext(cell);          //предыдущая ячейка теперь указывает на новую
        this->csetLast(cell);          //передвигаем указатель last на новую ячейку
        last = this->cgetLast();       //получаем новую ячейку
        last->setNext(nullptr);       //она указывает на nullptr
    }
}

int Queue::cPop()
{
    if(!this->isEmpty()) //если очередь не пустая
    {
        cCell *first = this->cGetFirst();    //получаем первую ячейку
        int d = first->getData();              //запоминаем данные первой ячейки для return'а
        if(first->getNext() != nullptr)     //если она не единственная
            {
                this->cSetFirst(first->getNext());   //теперь первая в очереди - та ячейка, что была второй
                first = this->cGetFirst();           //получаем первую ячейку
                return d;
            }else                           //если в очереди единственная ячейка
            {
                this->cSetFirst(nullptr);    //зануляем указатели на первую
                this->csetLast(nullptr);     //и последнюю ячейки
                return d;                   //возвращаем значение удаленной ячейки
            }
    }else               //если очередь пустая
    {
        cout << "\nQueue is empty.\n";
        return false;
    }
}

bool Queue::isEmpty()
{
    if(this->cGetFirst() == nullptr and this->cgetLast() == nullptr) return true;
    else if(this->cGetFirst() != nullptr and this->cgetLast() != nullptr) return false;
    throw("first == nullptr and last != nullptr or contrariwise.");
}
