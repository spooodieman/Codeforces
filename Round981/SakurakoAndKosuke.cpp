#include <iostream>
 
static void Solve();
 
int main()
{
    int limit;
    std::cin >> limit;
    while (limit--) Solve();
    return 0;
}
static void Solve() {
    int number;
    std::cin >> number;
    if (number % 2 == 0) std::cout << "Sakurako" << '\n';
    else std::cout << "Kosuke" << '\n';
}