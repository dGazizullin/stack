#include <iostream>
#include "Stack.h"
#include "Queue.h"
#include "Enumerator.h"
using namespace std;

int main()
{
    Stack *ls = new Stack;
    //Enumerator *enum_ = new Enumerator(ls);
    //enum_->atEnd();
    cout << "добавляем элементы в стек:";
    ls->push(1);
    ls->push(2);
    ls->push(3);
    ls->print();
    cout << "\nполучаем последний элемент стека:   " << ls->getFirstD();
    cout << "\nудаляем элементы стека:\n";
    cout << ls->pop() << "\n";
    cout << ls->pop() << "\n";
    cout << "is empty?" << ls->isEmpty() << "\n";
    cout << ls->pop() << "\n";
    cout << ls->pop() << "\n";
    cout << "is empty?" << ls->isEmpty() << "\n\n";

    Queue *q = new Queue;
    cout << "добавляем новые элементы в очередь:\n";
    q->push(1);
    q->push(2);
    q->push(3);
    q->push(4);
    q->print();
    cout << "\nполучаем первый элемент очереди: " << q->getFirstD() << "\nудаляем элементы очереди:\n";

    cout << "\n" << q->pop() << "\n";
    cout << q->pop() << "\n";
    cout << q->pop() << "\n";
    cout << q->pop() << "\n";
    cout << q->pop() << "\n";
}
