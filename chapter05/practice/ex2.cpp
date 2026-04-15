// 실행 결과를 참고하여 compare() 함수를 작성하라
#include <iostream>
using namespace std;

int main()
{
    bool compare(int a, int b, int min, int max)
    {
        if(a == b)
        
            return = ture;
        
        else if(a < b)
        {
            min = a;
            max = b; 
        }
        else
        {
            min = a;
            max = b;
        }
        return false;
    }

    int a, b, min, max;
    cout << "두 수 입력>>" ;
    cin >> a >> b ;
    bool res = compare(a, b, min, max);
    if(res == true) cout << "두 수는 같습니다.";
    else
    cout << "작은 수는 " << min << ", 큰 수는 " << max ;
}


