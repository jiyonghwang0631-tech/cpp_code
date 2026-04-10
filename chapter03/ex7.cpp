#include <iostream>
#include <string>
using namespace std;

class Storage
{
public:
    //변수
    double data[10];
    int next;    

    //함수
    void put(double T);
    void dump(); 
    double getAvg(); 

    Storage(/* args */);
};

void Storage::put(double temp){
    data[next] = temp;
    next++;    
}

void Storage::dump(){
    for(int i = 0 ; i < next; i++)    
    {
        cout << data[i] << " ";
    }    

    cout << endl;
}

double Storage::getAvg(){
    double sum = 0.0;
    for(int i = 0 ; i < next; i++)
    {
        sum += data[i];
    }
    return sum / (double)next;
}

Storage::Storage(/* args */){
    for (int i = 0; i < 10; i++)
    {
        data[i] = 0;
    }
    next = 0;
}


int main()
{
    Storage a;
    a.put(36.7);
    a.put(36.9);
    a.put(36.4);
    a.dump();
    cout << "평균 체온은 " << a.getAvg() << "입니다." << endl;
}