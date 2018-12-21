#ifndef BICELL_H_INCLUDED
#define BICELL_H_INCLUDED
#include "cCell.h"

class biCell : public cCell
{
public:
    biCell();
    biCell(int data);
    biCell* getPrev();
    void setPrev(biCell *prev);

private:
    biCell* prev;
};

#endif // BICELL_H_INCLUDED
