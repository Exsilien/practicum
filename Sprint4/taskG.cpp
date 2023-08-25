#include <iostream>
#include <map>
int main() {
    int count_for_zero = 0, count_for_one = 0, max_len = 0;
    int n; std::cin >> n;
    bool isZero = true, isOne = true;
    std::map<int, int>library;
    int score = 0;
    for(int i=0;i != n;++i) {
        char num;
        std::cin >> num;
        if(num == 0) ++score;
        else --score;
        if(score == 0) {
            library.insert({i, score});
        }
    }
    for(auto [key, value] : library) {
        std::cout << key << " " << value << "\n";
    }
}

