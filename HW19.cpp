#include <iostream>
#include <vector>

class Animal {
public:
    virtual void voice() {

        std::cout << "Some Voice of Animal\n";
    }
};

class Dog : public Animal {
public:

    void voice() override {

        std::cout << "Woof!\n";
    }
};

class Cat : public Animal {
public:

    void voice() override {

        std::cout << "Meow!\n";
    }
};

class Parrot : public Animal {
public:

    void voice() override {

        std::cout << "Repeat you!\n";
    }
};


int main()
{

    std::vector<Animal*> ptrVector;

    for (int i = 0; i < 10; i++) {

        if (i % 3 == 0) ptrVector.push_back(new Dog());
        else if (i % 3 == 1) ptrVector.push_back(new Cat());
        else ptrVector.push_back(new Parrot());

    }

    for (int i = 0; i < ptrVector.size(); i++) {

        ptrVector[i]->voice();
    }

    return 0;
}
