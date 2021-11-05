#include <iostream>
#include <string>
#include <chrono>

class Entity
{
public:
    Entity()
    {
        std::cout << "Created Entity!" << std::endl;
    }
    ~Entity()
    {
        std::cout << "Destroyed Entity!" << std::endl;
    }
};

int main()
{
    {
        Entity e;
    }

      
    return 0;
}

