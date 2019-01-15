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

	biCell* getNext();
	void setNext(biCell *next);


private:
    biCell* prev;
	biCell* next;
	//убрать лишний указатель и методы? переопределить в месте где достаем из поля first указатель на cCell(должно указывать на biCell).
	//переопределить это в очереди
};

#endif // BICELL_H_INCLUDED
