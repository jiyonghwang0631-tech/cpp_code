// 온도 (double)를 5개 저장할 배열을 동적 할당 받고, 온도를 5개 입력받아 배열에 저장하라.
// 그리고 배열의 평균을 구하고 출력한 뒤, 동적 할당을 받은 배열을 반환하는 main 함수를 작성하라.

#include <iostream>
using namespace std;

int main()
{
    double *t = new double[5];
    if(!t)
    {
        cout << "메모리를 할당 할수 없습니다.";
        return 0;
    }
        cout << "온도 5개 입력 >> " ;

    for(int i = 0 ; i < 5 ; i++)
    {
        cin >> t[i];
    }
    
    double sum = 0;
    for(int i = 0 ; i < 5 ; i++)
    {
        sum += t[i];
        
    }

    cout << "평균은 " << sum/5 << endl;

    delete[] t;
}






