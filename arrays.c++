#include "iostream"
#include "array"

class Test {
    
  public:
  static const int arrSize = 5;
  int arr[arrSize];
    
};


int main() {
    
    int example[5]; // created on stack
    
    for (int i = 0; i < 5; i++) {
        example[i] = 2;
    }
    
    int* another = new int[5]; // created on heap
    
    for (int i = 0; i < 5; i++) {
        another[i] = 2;
    }
    
    delete[] another;
    
    
    
    // new way to use arrays using array template
    std::array<int, 5> arr;
    
}
