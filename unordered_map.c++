#include "print"
#include "iostream"
#include "map"
#include "string"
#include "unordered_map"


int main() {
    
    
    std::unordered_map<int, const char*> um1;
    std::unordered_map<int, const char*> um2 = {{1, "testing"}, {2, "unordered_map"}, {3, "gone"}, {4, "right"}};
    um2[0] = "I am";
    // or
    um2.insert({0, "I am"});
    for (auto i : um2) std::println("{}: {}", i.first, i.second);
    std::println("{}", um2.at(4));
    
    auto it = um2.find(2);
    if (it != um2.end()) std::println("{} -> {}", it -> first, it -> second);
    
    
    return 0;
}
