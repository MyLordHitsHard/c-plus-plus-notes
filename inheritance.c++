#include "iostream"


class Entity {
    
    public:
    
    float x, y;
    
    void move(float xa, float ya) {
        x += xa;
        y += ya;
    }
    
    
};


class Player : public Entity {
    
    
    public:
    const char* name;
    
    
    void printName() {
        std::cout << name << std::endl;
    }
    
    
    
};

int main() {
    
    
    Player p1;
    
    
    p1.name = "player1";
    
    p1.x = 2.2f;
    p1.y = 3.4f;
    
    p1.printName();
    p1.move(5.4, 5.4);
    
    
    std::cout << sizeof(Entity) << std::endl;
    std::cout << sizeof(Player) << std::endl;
    
    
}
