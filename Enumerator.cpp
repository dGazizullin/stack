#include "Enumerator.h"


Enumerator::Enumerator()
{}

Enumerator::Enumerator(Stack* coll)
{
    try
    {
        this->coll = coll;
    }catch(int e)
    {
        if(!coll->getFirst())
            throw ("No data in collection.");
    }
}

bool Enumerator::atEnd()
{
    coll = this->getColl();
    cCell* cur = this->getCurr();

    if(cur->getNext())
    {
        return false;
    }return true;
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
