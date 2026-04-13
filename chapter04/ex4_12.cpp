#include <iostream>

using namespace std;

class myArray
{
private :
    int *p;
    int aryLen;
public:
    myArray* this_point()
    {
    return this;
    }
    void print();
    myArray(/* args */);
    myArray(int num);
    ~myArray();
};

myArray::myArray(/* args */)
{

}

myArray::myArray(int num)
{
    p = new int [num];
    if(p)
    {
        aryLen = num;
    }
}
int myArray::sum()
{

}

void myArray::print()
{
    for(int i = 0 ; i < aryLen; i++)
    {
        cout << *(p+i) << "  ";
    }    
    cout << endl;
}

//  소멸자 
myArray::~myArray()
{
    delete [] p;
}


int main()
{
    myArray test[3] = {myArray(3), myArray(3), myArray(3)};

    myArray* p = test[0].this_point();



    // int val = 1;
    // for (int i = 0 ; i < 3 ; i++)
    // {   
    //     for (int j = 0 ; j < test[i].aryLen ; j++)
    //     {
    //         test[i].p[j] = val++;
    //         cout << test[i].p[j] << " ";
    //     }
    //     cout << endl;
    // }
    // cout << endl;
}    