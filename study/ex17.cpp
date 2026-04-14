// 187.5cm 이상이고 몸무게가 80.0kg 미만이면 ok , 이외의 경우에는 cancel.

#include <iostream>

using namespace std;

int main()
{
    double height;
    double weight;

    cout << "키와 몸무게를 입력 하세요 : " ;

    cin >> height >> weight ;

    if(height >= 187.5 && weight < 80.0)
    {
        cout << "ok" << endl;
    }
    else
    {
        cout << "Cancel" << endl ;
    }

    return 0;
}