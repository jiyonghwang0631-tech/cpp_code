#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s[10], t[10];
    cout << "로미오>>";
    cin >> s;
    cout << "줄리엣>>";
    cin >> t;
    

//  =========================가위============================
    if(strcmp(s, "가위") == 0 && strcmp(t, "보") == 0)
    cout << "로미오가 이겼습니다." << endl;
    if(strcmp(s, "가위") == 0 && strcmp(t, "주먹") == 0)
    cout << "로미오가 졌습니다." << endl;
    if(strcmp(s, "가위") == 0 && strcmp(t, "가위") == 0)
    cout << "비겼습니다." << endl;

    //  =========================보============================

    if(strcmp(s, "보") == 0 && strcmp(t, "가위") == 0)
    cout << "로미오가 졌습니다." << endl;
    if(strcmp(s, "보") == 0 && strcmp(t, "주먹") == 0)
    cout << "로미오가 이겼습니다." << endl;
    if(strcmp(s, "보") == 0 && strcmp(t, "보") == 0)
    cout << "비겼습니다." << endl;
    
    //  =========================주먹============================

    
    if(strcmp(s, "주먹") == 0 && strcmp(t, "가위") == 0)
    cout << "로미오가 이겼습니다." << endl;
    if(strcmp(s, "주먹") == 0 && strcmp(t, "보") == 0)
    cout << "로미오가 졌습니다." << endl;
    if(strcmp(s, "주먹") == 0 && strcmp(t, "주먹") == 0)
    cout << "비겼습니다." << endl;

}   


// 결과값을 묶는거 보다 
// "바위" "가위" "보" 로 묶어서 세트를 만든는게 편하다.

//집에가서 수정해보자.