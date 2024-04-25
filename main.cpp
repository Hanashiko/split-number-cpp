#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    int input_number, number_1, number_2;
    cin >> input_number;
    number_2 = input_number % 10;
    number_1 = floor(input_number/10);
    cout << number_1 << " " << number_2;
}
