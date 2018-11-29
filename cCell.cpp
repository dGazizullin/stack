#include "cCell.h"

cCell::cCell()
{}

cCell::cCell(int data)
{
    this->data = data;
    this->next = nullptr;
}

int cCell::getData()
{
    return this->data;
}

void cCell::setData(int data)
{
    this->data = data;
}

cCell* cCell::getNext()
{
    return this->next;
}

void cCell::setNext(cCell *next)
{
    this->next = next;
}

