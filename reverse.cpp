#include <iostream>
using namespace std;
int reverse(int N)
{
    int rev = 0;
    while (N > 0)
    {
        rev = rev * 10 + N % 10;
        N /= 10;
    }
    return rev;
}
int main()
{
    int N;
    cin >> N;
    cout << "The reversed number is: " << reverse(N) << endl;
    return 0;
}