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

    intArr.push_back(0);
    intArr.push_back(0);
    intArr.push_back(0);
    intArr.push_back(0);



    intArr.insert(2, -1);


    for (int num : intArr)
        cout << num << endl;

    //cout << intArr.size() << endl;
    system("pause");
}
