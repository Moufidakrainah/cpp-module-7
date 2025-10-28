#include <iostream>
#include "iter.hpp"

// Exemple de fonction qui peut modifier l'élément
void increment(int &x) {
    x += 1;
}

// Exemple de fonction qui ne modifie pas l'élément
void print(const int &x) {
    std::cout << x << " ";
}

// Fonction template
template <typename T>
void multiplyByTwo(T &x) {
    x *= 2;
}

int main() {
    int numbers[] = {1, 2, 3, 4, 5};
    const size_t size = sizeof(numbers) / sizeof(numbers[0]);

    std::cout << "Tableau original : ";
    iter(numbers, size, print);
    std::cout << std::endl;

    // Modifier le tableau
    iter(numbers, size, increment);

    std::cout << "Après incrément : ";
    iter(numbers, size, print);
    std::cout << std::endl;

    // Utiliser une fonction template
    iter(numbers, size, multiplyByTwo<int>);

    std::cout << "Après multiplication par 2 : ";
    iter(numbers, size, print);
    std::cout << std::endl;

    return 0;
}
