#include <iostream>
#include "Array.h"


using namespace std;


int main()
{
    Array<int> intArr(5);



    intArr[0] = 1;
    intArr[1] = 2;
    intArr[2] = 3;
    intArr[3] = 4;
    intArr[4] = 5;


    intArr.push_back(6);
    intArr.push_back(7);
    intArr.push_back(8);
    intArr.push_back(9);
    intArr.push_back(10);
    intArr.push_back(11);
    intArr.push_back(12);


    for (int num : intArr)
        cout << num << endl;

    cout << endl;
    system("pause");
}
