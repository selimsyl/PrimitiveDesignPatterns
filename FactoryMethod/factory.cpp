#include <iostream>
#include <bitset>
#include <vector>
#include <string_view>
#include <sstream>
#include <iterator>
#include <algorithm>
#include <memory>
#include <stdio.h>

//Base product class
class Product
{
public:
    Product() {
        std::cout << "I am happening a beatiful product\n";
    }
    virtual void letMeBorn() {
        std::cout << "Product born\n";
    }
};

//Derived Product Class
class ExtendedProduct : public Product
{
public:
    ExtendedProduct() : Product{} {
        std::cout << "I am be extended beatiful product\n";
    }
    void letMeBorn() final override {
        std::cout << "ExtendedProduct born\n";
    }
};

//Creator abstract Class
class Creator
{
public:
    ~Creator() = default;
    virtual Product create() = 0;
};

//Concrete Creator Class
class ExtendedCreator : public Creator
{
public:
    Product create () override {
        std::cout << "I create Extended Product yooo\n";
        ExtendedProduct product{};
        product.letMeBorn();
        return product;
    }
};

Product createMf(ExtendedCreator creator)
{
    return creator.create();
}

int main()
{
    createMf(ExtendedCreator{});

}