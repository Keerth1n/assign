#include <iostream>
using namespace std;
int main()
{
    int M;
    cout << "Enter a number:";
    cin >> M;
    if (M % 3 == 0 && M % 5 == 0)
        cout << "Good Number";
    else if (M % 3 == 0 && M % 5 != 0)
        cout << "Bad Number";
    else if (M % 3 != 0 && M % 5 == 0)
        cout << "Poor Number";
    else
        cout << "-1";
    return 0;
}