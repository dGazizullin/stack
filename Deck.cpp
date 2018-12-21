//#include "Deck.h"
//#include "biCell.h"
//#include <iostream>
//using namespace std;
//
//Deck::Deck() : Queue::Queue()
//{
//    this->cSetFirst(nullptr);
//}
//
//void Deck::pushFirst(int data)
//{
//    biCell *cell = new biCell;
//    cell->setData(data);
//    if (this->isEmpty())
//    {
//        this->cSetFirst(cell);
//        this->csetLast(cell);
//        cell->setNext(nullptr);
//    }else
//    {
//        cell->setNext(this->cGetFirst());
//        this->cSetFirst(cell);
//    }
//}
