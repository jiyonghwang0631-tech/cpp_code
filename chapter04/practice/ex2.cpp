// 구입할 물품의 개수를 입력받고 가격을 저장할 정수 배열을 동적으로 생성하라. 그리고 물품 가격을 입력받아 동적배열에
// 저장한 후 제일 비싼 가격과 제일 싼 가격을 구하여 출력하고, 할당받은 배열을 반환하는 main()함수를 작성하라


#include <iostream>

using namespace std;

int main()
{
    int item; 
    
        cout << "구입할 물품의 개수>> " ;

        cin >> item;
    
    int *price = new int[6];
    
    if(!price) 
    {
        cout << "메모리를 할당할 수 없습니다.";
        return 0;
    }
        cout <<"물품 6개의 가격 입력>> ";
        for(int i = 0 ; i < 6 ; i++ )
        {
            cin >> price[i];
        }
    
    int expensive = price[0];
    int cheap = price[0];
    
    for(int i = 1 ; i < 6 ; i++)
    {
        if(price[i] > expensive)
        {
           expensive = price[i]; 
        }
        if(price[i] < cheap)
        {
            cheap = price[i];
        }
    }
        cout << "제일 비싼 가격은 " << expensive << endl;
        cout << "제일 싼 가격은 " << cheap << endl;

    delete price;

}


