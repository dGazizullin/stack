#include "Queue.h"

Queue::Queue()
{
    this->setLast(nullptr);
}

cCell* Queue::getLast()
{
    return this->last;
}

void Queue::setLast(cCell *last)
{
    this->last = last;
}

void Queue::push(int data)
{
    cCell *cell = new cCell;    //создаем новую ячейку
    cell->setD(data);           //записываем туда данные
    if (this->getFirst() == nullptr and this->getLast() == nullptr)  //если очередь пустая
    {
        this->setFirst(cell);   //новая ячейка - первая
        this->setLast(cell);    //и последняя одновременно
        cell->setNext(nullptr); //пишем нуль-указатель в саму ячейку
    }else                       //если очередь не пустая
    {
        last = this->getLast();       //получаем последнюю ячейку
        last->setNext(cell);          //предыдущая ячейка теперь указывает на новую
        this->setLast(cell);          //передвигаем указатель last на новую ячейку
        last = this->getLast();       //получаем новую ячейку
        last->setNext(nullptr);       //она указывает на nullptr
    }
}

int Queue::pop()
{
    if(this->getFirst() != nullptr and this->getLast() != nullptr) //если очередь не пустая
    {
        cCell *first = this->getFirst();    //получаем первую ячейку
        int d = first->getD();              //запоминаем данные первой ячейки для return'а
        if(first->getNext() != nullptr)     //если она не единственная
            {
                this->setFirst(first->getNext());   //теперь первая в очереди - та ячейка, что была второй
                first = this->getFirst();           //получаем первую ячейку
                return d;
            }else                           //если в очереди единственная ячейка
            {
                this->setFirst(nullptr);    //зануляем указатели на первую
                this->setLast(nullptr);     //и последнюю ячейки
                return d;                   //возвращаем значение удаленной ячейки
            }
    }else       //если очередь пустая
    {
        cout << "\nQueue is empty.\n";
        return false;
    }
}

