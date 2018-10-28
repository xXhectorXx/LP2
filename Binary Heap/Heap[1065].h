#ifndef HEAP_H
#define HEAP_H
#include <iostream>
#include <vector>

using namespace std;

class heap
{
    private:
    int bh[];
    int tam;

    public:
    heap(int _tam)
    {
        tam=_tam;
    }
    void push(int);
    void delet_min(int);
    void up(int);
    void down();

};
#endif

void heap::push(int x)
{
    bh.push_back(x);
    
}
void heap::up(int x)
{
    while(bh[x]>bh[(x-1)/2])
    {
        swap(bh[x],bh[(x-1)/2]);
        x=(x-1)/2;
    }

}

