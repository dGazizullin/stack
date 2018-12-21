#include "biCell.h"

biCell::biCell(){}

biCell::biCell(int data) : cCell::cCell(data)
{
    this->setPrev(nullptr);
}

biCell::getPrev()
{
    return this->prev;
}

biCell::setPrev(biCell *prev)
{
    this->prev = prev;
}
