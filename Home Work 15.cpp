#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0));
    int aArray[10], bArray[5], cArray[5];                  
    for (int i = 0; i < 10; i++)
    {
        aArray[i] = rand() % 101 - 50;
        cout << "aArray[" << i << "] = " << aArray[i] << endl;
    }
    cout << endl;
    for (int i = 0; i < 5; i++)
    {
        bArray[i] = aArray[i];
        cout << "bArray[" << i << "] = " << bArray[i] << endl;
    }
    cout << endl;
    for (int i = 0; i < 5; i++)
    {
        cArray[i] = aArray[i + 5];
        cout << "cArray[" << i << "] = " << cArray[i] << endl;
    }
    cout << endl;
    system("pause");
    return 0;
}