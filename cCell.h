#ifndef CCELL_H
#define CCELL_H


class cCell
{
public:
    cCell();
    cCell(int data);

    int getData();
    void setData(int data);

    cCell* getNext();
    void setNext(cCell *next);

private:
    int data;
    cCell* next;
};

#endif // CCELL_H
