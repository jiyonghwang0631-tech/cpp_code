#include <iostream>
#include <string>
using namespace std;



int main()
{
    string firtstname;
    string secondname;
    string fs_namme;
    
    cout << "성을 입력하세요";
    getline(cin, firtstname);  

    cout <<"이름을 입력하세요";
    getline(cin, secondname);
    

    cout << firtstname + " " + secondname << endl;

}
