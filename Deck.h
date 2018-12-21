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
private:

};


#endif // DECK_H_INCLUDED
