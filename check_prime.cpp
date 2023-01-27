#include <iostream>
using namespace std;
int isPrime(int A)
{
    if (A <= 1)
    return 0;
    for (int i = 2; i < A; i++)
    {
        if (A % i == 0)
            return 0;
    }
    return 1;
}
int main()
{
    int A;
    cin >> A;
    if (isPrime(A))
    {
        cout << A << " is a prime number." << endl;
    }
    else
    {
        cout << A << " is not a prime number." << endl;
    }
    return 0;
}