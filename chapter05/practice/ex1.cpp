//매개 변수의 값을 2배 증가시키는 twice() 함수를 작성하라

#include <iostream>
using namespace std;

void twice(int *a)   // int *a = &n
{
    *a = (*a) * 2 ;
}

void twice(int &a)   // int *a = &n
{
    a = a * 2 ;
}


int main()
{
    int n = 12;
    twice(n);
    cout << n;
}

