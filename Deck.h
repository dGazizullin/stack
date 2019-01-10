#ifndef DECK_H_INCLUDED
#define DECK_H_INCLUDED
#include "Queue.h"
#include "biCell.h"

class Deck : public Queue
{
public:
    Deck();
    void cPush(int data);// то же, что и pushFirst()
    void pushFirst(int data);   //в начало, как в стеке
    void pushLast(int data);    //в конец, как в очереди

    int cPop();         //то же, что и popLast()
    int popFirst();     //похоже на очередь
    int popLast();      //похоже на стек

    void csetLast(biCell *cell);
    biCell* cgetLast();

    void cSetFirst(biCell *cell);
    biCell* cGetFirst();
private:
    biCell* last;
    biCell* first;

};


#endif // DECK_H_INCLUDED
