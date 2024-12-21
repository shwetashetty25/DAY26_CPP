// WAP TO IMPLEMENT OVERLOADING FOR POWER CALCULATION:
#include <iostream>
using namespace std;
int power(int base, int exp)
{
    return pow(base, exp);
}
double power(double base, double exp)
{
    return pow(base, exp);
}
int main()
{
    cout << "2^3  = " << power(2, 3) << endl;
    cout << "2.5^3.5 = " << power(2.5, 3.5) << endl;
    return 0;
}