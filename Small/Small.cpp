#include <iostream>
using std::cout;
using std::cin;

int main()
{
    std::cout << "Hello Output!" << "\n";
    std::cout << 34 << "\n";

    std::cout << "Sum: " << 3 + 4 << "\n";
    std::cout << "Minus: " << 3 - 4 << "\n";
    std::cout << "Mult: " << 3 * 4 << "\n";
    std::cout << "Div: " << 3 / 4 << "\n";
    std::cout << "Div: " << 3.0 / 4.0 << "\n";

    std::cout << "Float: " << 3.4 << "\n";

    //std::cout << "Float: " << 3/0 << "\n";
    std::cout << "Wtf: " << "12345" + 3 << "\n";

    auto x = "Hello: ";
    auto y = 7;
    auto z = 'a';
    std::cout << x << y << z << "\n";

    int i = 2 + 2;
    cout << i << "\n";
    i = i * 3;
    cout << i << "\n";

    int j = 2;
    cout << j << "\n";
    i = 4.3;
    j = 9 / 5;
    cout << i << " " << j << "\n";

    float k = 4.9;
    cout << k << "\n";
    k = 9.0 / 5;
    cout << k << "\n";

    cout << "\n Enter a number: \n";
    cin >> i;
    cout << i * 2 << "\n";
}