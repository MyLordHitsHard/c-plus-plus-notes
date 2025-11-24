#include "print"
#include "iostream"
#include "map"
#include "string"



int main() {
    
    
    std::map<int, std::string> m1;
    
    std::map<int, const char*> m2 = {{1, "map"}, {2, "testing"}, {3, "gone right"}};
    m2.insert({0, "STL"});
    
    for (auto& k : m2) {
        std::println("{} {}", k.first, k.second);
    }
    
    
    std::println("{}", m2[3]);
    std::println("{}", m2.at(3));
    // std::println("{}", m2.find(2)); // not working
    auto it = m2.find(2);
    if (it != m2.end()) std::println("{} -> {}", it -> first, it -> second);
    
    
    m2[2] = "checking"; //O(log(n))
    std::println("{}", m2[2]);
    
    // traversing the map
    for (auto it = m2.begin(); it != m2.end(); it++) std::println("{} -> {}", it -> first, it -> second);
    m2.erase(0);
    return 0;
}
