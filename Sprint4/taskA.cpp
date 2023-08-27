#include <iostream>
#include <math.h>

int main() {
    int a, m;
    std::string string;
    std::cin >> a >> m >> string;
    int64_t hash = 0, power = 1;
    for(int i=string.size() - 1;i != -1;--i) {
        hash = hash + ((int)string[i] * power);
        power = (power * a) % m;
    }
    std::cout << (hash + m) % m ;
    return 0;
}