#include "Zombie.hpp"

int main() {
    int N = 5;
    Zombie* horde = zombieHorde(N, "Zombie");

    if (horde) {
        for (int i = 0; i < N; i++) {
            std::cout << i << " ";
            horde[i].announce();
        }
        delete[] horde;
    }

    return 0;
}
