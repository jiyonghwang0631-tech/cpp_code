// 가슴둘레가 90보다 작거나 같으면  S
// 가슴둘레가 90보다 크고 100보다 작거나 같으면 M
// 가슴둘레가 100보다 크면 L 선택



#include <iostream>
using namespace std;

int main()
{
    int chest ;
    char size ;

    cout << "가슴둘레를 입력하세요 : " ;

    cin >> chest ;



    if(chest <= 90)
    {
        size = 'S';
    }
    else if (chest <= 100)
    {
        size = 'M';
    }
    else
    {
        size = 'L';
    }
    
    cout << "속옷 사이즈 : " << size << endl;

    return 0;
}