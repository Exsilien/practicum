#include <iostream>
#include <math.h>

int main() {
    int a, m;
    std::string string;
    std::cin >> a >> m >> string;
    int hash = 0, power = 1;
    for(size_t i=string.size() - 1;i != -1;--i) {
        hash = hash + ((int)string[i] * power);
        hash = (hash + m) % m;
        power = (power * a) % m;
    }
    std::cout << hash;
    return 0;
}