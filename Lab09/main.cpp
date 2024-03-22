#include <iostream>

using namespace std;

int main()
{
    int distance;
    double price;
    cin >> distance;

    if (distance < 200) {
        price = 1.2 * distance;
    }
    else {
        price = 1.2 * 200 + 0.75 * (distance - 200) * 1.2;
    }

    printf("%.f\n", price);
}