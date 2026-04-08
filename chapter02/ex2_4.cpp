#include <iostream>

using namespace std;

int main()
{
    char firtstname[10]; // = {10};
    char secondname[10]; // = {10};
    char fs_namme[20];   // = {10};
    
    cout << "성을 입력하세요";
    cin >> firtstname;
    
    cout <<"이름을 입력하세요";
    cin >> secondname;
    
    int count = 0;
    int i = 0;
    
    while(1)
    {
        if(firtstname[i] == '\0') {
            break;
        }
        fs_namme[count] = firtstname[i];
        i++;
        count++;
    }
    
    i = 0;
    while(1)
    {
        if(secondname[i] == '\0') {
            fs_namme[count] = secondname[i];
            break;
        }
        fs_namme[count] = secondname[i];
        i++;
        count++;
    }
    
    cout << "이름: " << fs_namme << '\n';
}

// 첫번째 이름 : HWANG
// 두번째 이름 : JIYONG

// 이름 HWANGJIYONG 출력되게 코딩

// ☆ 초기화 매우 중요 ☆

// if(firstname[0] != '\0') firstname[0] = firstname[0];
// if(firstname[1] != '\0') firstname[1] = fistname[1]);
// if(firstname[2] != '\0') firstname[2] = fistname[2]);
// if(firstname[3] != '\0') firstname[3] = fistname[3]);
// if(firstname[4] != '\0') firstname[4] = fistname[4]);
// if(firstname[5] != '\0') firstname[5] = fistname[5]);
// if(firstname[6] != '\0') firstname[6] = fistname[6]);
// if(firstname[7] != '\0') firstname[7] = fistname[7]);
// if(firstname[8] != '\0') firstname[8] = fistname[8]);
// if(firstname[9] != '\0') firstname[9] = fistname[9]);
// if(firstname[10] != '\0') firstname[10] = fistname[10]);


// for(int i = 0; i < 10; i++)
// {
//   if(firstname[i] != '\0') firstname[i] = firstname[i];
//      else{
//      firstname[] = '\0';
//      break;        
// }