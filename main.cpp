#include <iostream>
#include "Stack.h"
#include "Queue.h"
#include "Enumerator.h"
using namespace std;

int main()
{

    Stack *ls = new Stack;

    cout << "добавляем элементы в стек:";
    ls->cPush(1);
    ls->cPush(2);
    ls->cPush(3);

    Enumerator *enum_ = new Enumerator(ls);
    enum_->printColl();
    //ls->print();
    cout << "\nполучаем последний элемент стека:   " << ls->cGetF();
    cout << "\nудаляем элементы стека:\n";
    cout << ls->cPop() << "\n";
    cout << ls->cPop() << "\n";
    cout << "is empty?" << ls->isEmpty() << "\n";
    cout << ls->cPop() << "\n";
    cout << ls->cPop() << "\n";


    cout << "is empty?" << ls->isEmpty() << "\n\n";

    Queue *q = new Queue;
    cout << "добавляем новые элементы в очередь:\n";
    q->cPush(1);
    q->cPush(2);
    q->cPush(3);
    q->cPush(4);
    q->print();
    cout << "\nполучаем первый элемент очереди: " << q->cGetF() << "\nудаляем элементы очереди:\n";

    cout << "\n" << q->cPop() << "\n";
    cout << q->cPop() << "\n";
    cout << q->cPop() << "\n";
    cout << q->cPop() << "\n";
    cout << q->cPop() << "\n";
}
