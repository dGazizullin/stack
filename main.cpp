#include <iostream>
#include "Stack.h"
#include "Queue.h"
#include "Deck.h"
#include "Enumerator.h"
#include "biCell.h"
#include "TestStack.cpp"
#include "TestQueue.cpp"
#include "TestDeck.cpp"
using namespace std;


void testDeck()
{
    cout << "\n\n\nDECK TEST\n\n\n\n\n";
    Deck *d = new Deck;

    cout << "тестим pushFirst и pushLast, ожидается порядок c начала: 4->3->2->1->0: \n";
    d->pushFirst(1);
    d->pushFirst(2);
    d->pushFirst(3);
    d->pushFirst(4);
    d->pushLast(0);

//    cout << "\n\n\nТест перечислителя. Ожидается вывод 43210\n";
//    Enumerator *e = new Enumerator(d);
//    e->printColl();
//    cout << "\n\n\n";

    cout << "Удаляем и выводим первое и последнее данные, ожидаются 4 и 0: \n";
	int d1 = d->popFirst();
	int d2 = d->popLast();

	cout << "\nFirst: " <<  d1 << endl;
	cout << "Last: " << d2 << endl;

    cout << "Удаляем и выводим первое и последнее данные, ожидаются 3 и 1: \n";
	int d3 = d->popFirst();
	int d4 = d->popLast();

	cout << "\nFirst: " <<  d3 << endl;
	cout << "Last: " << d4 << endl;

    Deck* deck2 = new Deck;
    deck2->pushFirst(1);
    deck2->pushFirst(2);
    deck2->pushFirst(3);
    deck2->pushFirst(4);
    deck2->pushLast(0);
    cout << "\n\n\nТест перечислителя. Ожидается вывод 43210\n";
    Enumerator *e = new Enumerator(deck2);
    e->printColl();
    cout << "\n\n\n";
}

void testQueue()
{
    cout << "\n\n\n\n\nQUEUE TEST\n";
    Queue *q = new Queue;
    cout << "Добавляем новые элементы в очередь и печатаем их перечислителем:\n";
    q->cPush(1);
    q->cPush(2);
    q->cPush(3);
    q->cPush(4);

    //печатаем полученную очередь
    Enumerator *enumQ = new Enumerator(q);
    enumQ->printColl();
    enumQ->moveLast();

    cout << "\nполучаем первый элемент очереди: " << q->cGetF() << "\nудаляем элементы очереди:\n";

    cout << "\n" << q->cPop() << "\n";
    cout << q->cPop() << "\n";
    cout << q->cPop() << "\n";
    cout << "is empty? [0/1]" << q->isEmpty() << "\n";
    cout << q->cPop() << "\n";
    cout << q->cPop() << "\n";
    cout << "is empty? [0/1]" << q->isEmpty() << "\n";
    enumQ->printColl();
    cout << "\n\n\n\n\n";
}

void testStack()
{
    cout << "\n\n\n\n" << "STACK TEST:" << endl;
    Stack *st = new Stack;
    cout << "добавляем элементы в стек:";
    st->cPush(1);
    st->cPush(2);
    st->cPush(3);

    //напечатаем полученный стек
    Enumerator *enumSt = new Enumerator(st);
    enumSt->printColl();

    cout << "\nполучаем последний элемент стека:   " << st->cGetF() << "\n";

    cout << "\nудаляем элементы стека:\n";
    cout << st->cPop() << "\n";
    cout << st->cPop() << "\n";
    cout << "Проверяем, пуст ли уже стек:" << endl;
    cout << "is empty? [0/1] :" << st->isEmpty() << "\n";
    cout << "Продолжаем удаление ячеек:" << endl;
    cout << st->cPop() << "\n";
    cout << st->cPop() << "\n";

    cout << "Проверяем, пуст ли уже стек:" << endl;
    cout << "is empty? [0/1] :" << st->isEmpty() << "\n";
    enumSt->printColl();
    cout << "\n\n\n\n\n\n";
}

int main()
{

    testStack();
    testQueue();
    testDeck();
	//system("pause");
	return 0;

}
