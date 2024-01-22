#include <iostream>

class Animal
{
public:
    virtual void Voice()
    {
        std::cout << "Животный звук!\n";
    }
};

class Cow : public Animal
{
public:
    void Voice() override
    {
        std::cout << "Мууууу!\n";
    }
};

class Horse : public Animal
{
public:
    void Voice() override
    {
        std::cout << "Иигого!\n";
    }
};

class Goat : public Animal
{
public:
    void Voice() override
    {
        std::cout << "Беееее!\n";
    }
};

int main()
{
    Animal* animals[4] = { new Animal(), new Cow(), new Horse(), new Goat() };

    for (Animal* a : animals)
    {
        a->Voice();
    }
}