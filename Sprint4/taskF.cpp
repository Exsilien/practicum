#include <iostream>
#include <algorithm>
#include <vector>
#include <map>

int main() {
    int n; std::cin >> n;
    std::vector<std::string>array(n);
    std::map<std::string, std::vector<int>>storage;
    for(int i = 0;i != n;++i) {
        std::cin >> array[i];
    }
    for(int i = 0;i != n;++i) {
        std::sort(array[i].begin(), array[i].end());
        auto [iter, has_ins] = storage.insert({array[i], {i}});
        if(!has_ins) {
            iter->second.push_back(i);
        }
    }
    std::vector<std::vector<int>>answer(n);
    int i =0;
    for(auto [key, value] : storage) {
        for(auto item : value) {
            answer[i].push_back(item);
        }
        ++i;
    }
    std::sort(answer.begin(), answer.end());
    for(auto item : answer) {
        bool isNULL = true;
        for(auto value : item) {
            isNULL = false;
            std::cout << value << " ";
        }
        if(!isNULL)std::cout << "\n";
    }
    return 0;
}