#include <iostream>
using namespace std;
class MyStack
{
private :
    int *p;
    int size = 0;
    int tos = 0; 
public :
    MyStack();
    MyStack(int size);
    MyStack(const MyStack &src);
    ~MyStack();
    bool push(int n);
    bool pop(int &n);
};

MyStack::MyStack()
{
    p = new int[10];
    size = 10;
    tos = 10;
}
MyStack::MyStack(int size)
{
    this->size = size;
    p = new int[10];
}

MyStack::MyStack(const MyStack &src)
{
    size = src.size;
    tos = src.tos;

    p = new int[size];
    for(int i = 0 ; i < tos ; i++)
    {
        p[i] = src.p[i];
    }
    for(int i = tos ; i < size ; i++)
    {
        p[i] = 0;
    }
}
bool MyStack::push(int n)
{
    if (tos >= size)
    {
        return false;
    }
        p[tos] = n;     
        tos++;
        return true;
  

}

bool MyStack::pop(int &n)
{
   	if (tos == 0)
    {
	    return false;
    }
        tos--;
	    n = p[tos];
	    return true;
    

}

MyStack::~MyStack()
{
    if(p)
    delete[] p;
}

int main()
{
    MyStack a(10);
    a.push(10); a.push(20);
    MyStack b = a;
    b. push(30);
    int n;
    a.pop(n);
    cout << "스택 a에서 팝한 값 " << n << endl;
    b.pop(n);
    cout << "스택 b에서 팝한 값 " << n << endl;
}