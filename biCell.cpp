#include "biCell.h"


biCell::biCell(){}

biCell::biCell(int data) : cCell::cCell(data)
{
    this->setPrev(nullptr);
}

biCell* biCell::getPrev()
{
    return this->prev;
}

void biCell::setPrev(biCell *prev)
{
    this->prev = prev;
}
