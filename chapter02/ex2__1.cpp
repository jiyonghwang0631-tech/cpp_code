#include <iostream>

using namespace std;

int main()
{
    char firtstname[10] = {10};
    char secondname[10] = {10};
    char fs_namme[20] = {10};
    
    cout << "성을 입력하세요";
    cin >> firtstname;
    
    cout <<"이름을 입력하세요";
    cin >> secondname;

    for(int i = 0; i < 10; i++)
    { 
        if(firtstname[i] != '\0') firtstname[i] = firtstname[i];
        else{firtstname[i] = '\0';
             break;
        }
    }  
//===================firstname===================================
    for(int i = 0; i < 10; i++)
    {
        if(secondname[i] != '\0') secondname[i] = secondname[i];
        else(secondname[i] = '\0');
            break;
    }
//===================secondname==================================    

cout << firtstname << secondname << endl;

cout << "전체 이름 출력 : " << firtstname << secondname << endl;

}
