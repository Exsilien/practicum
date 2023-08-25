#include <algorithm>
#include <iostream>
#include <vector>
#include <map>

inline char check_hash(std::map<char, char>& hash_table, char src, char value) {
    if(hash_table.find(src) == hash_table.end()) hash_table.insert({src, value});
    else if (hash_table.find(src)->second != value) {
        return -1;
    }
    return value;
}
int main() {
    std::string first, second;
    std::cin >> first >> second;
    std::map<char, char>hash_table;
    if(first.size() != second.size()) {
        std::cout << "NO";
        return 0;
    }
    for(int i=0;i != second.size();++i) {
        if(check_hash(hash_table, (char)first[i], (char)second[i]) == -1) {
            std::cout << "NO";
            return 0;
        }
    }
    hash_table.clear();
    for(int i=0;i != second.size();++i) {
        if(check_hash(hash_table, (char)second[i], (char)first[i]) == -1) {
            std::cout << "NO";
            return 0;
        }
    }
    std::cout << "YES";
    return 0;
}
