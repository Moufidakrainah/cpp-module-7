#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

// Échange les valeurs de a et b
template <typename T>
void swap(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

// Retourne la plus petite valeur
template <typename T>
T min(const T &a, const T &b) {
    return (a < b) ? a : b; // si égalité, renvoie b (car a < b sera faux)
}

// Retourne la plus grande valeur
template <typename T>
T max(const T &a, const T &b) {
    return (a > b) ? a : b; // si égalité, renvoie b (car a > b sera faux)
}

#endif
