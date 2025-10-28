#include <iostream>
#include "Array.hpp"

int main()
{
    try
    {
        Array<int> arr1; // tableau vide
        std::cout << "Taille arr1: " << arr1.size() << std::endl;

        Array<int> arr2(5); // tableau de 5 éléments par défaut
        for (unsigned int i = 0; i < arr2.size(); i++)
            arr2[i] = i * 10;

        std::cout << "arr2: ";
        for (unsigned int i = 0; i < arr2.size(); i++)
            std::cout << arr2[i] << " ";
        std::cout << std::endl;

        // Test de la copie profonde
        Array<int> arr3 = arr2;
        arr3[0] = 100; // modification de la copie
        std::cout << "arr2[0] = " << arr2[0] << ", arr3[0] = " << arr3[0] << std::endl;

        // Test des exceptions
        try {
            std::cout << arr2[10] << std::endl;
        } catch (std::exception &e) {
            std::cout << "Exception: " << e.what() << std::endl;
        }

    }
    catch (std::exception& e)
    {
        std::cerr << "Erreur: " << e.what() << std::endl;
    }

    return 0;
}

