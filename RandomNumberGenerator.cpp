#include <iostream>
#include <random>
#include <chrono>

int main() 
{
    unsigned seed = std::chrono::high_resolution_clock::now().time_since_epoch().count();

    std::mt19937 gen(seed);

    std::uniform_int_distribution<> distr(1, 100);

    int random_number = distr(gen);
    std::cout << "Random number: " << random_number << std::endl;

    return 0;
}
