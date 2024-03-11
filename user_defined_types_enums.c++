#include "iostream"
enum Color {red, green, blue};

Color& operator++(Color& c) {
    switch(c) {
        case Color::red: return c = Color::green;
        case Color::green: return c = Color::blue;
        case Color::blue: return c = Color::red;
    }
}

int main() {
    Color col = Color::blue;
    std::cout << col;
    std::cout << ++col;
    std::cout << ++col;
}
