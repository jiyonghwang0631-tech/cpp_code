#include <iostream>
using namespace std;

int main()
{
    int A[3] = {1, 2, 3};
    int B[10] ;
    int i;

    for(int i = 0 ; i < 10 ; i++)
    {
        B[i] = A[i % 3];  //  A[3]의 1,2,3 값을 반복한다
    }
    for(int i = 0 ; i < 10 ; i++)
    {
        cout << " " << B[i] ;
    }

    return 0;
}
