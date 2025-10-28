#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <exception>

template <typename T>
class Array
{
private:
    T* _data;
    unsigned int _size;

public:
    // Constructeurs
    Array();                       // constructeur vide
    Array(unsigned int n);         // constructeur avec taille
    Array(const Array& other);     // constructeur par copie

    // Destructeur
    ~Array();

    // Opérateur d'affectation
    Array& operator=(const Array& other);

    // Accès aux éléments
    T& operator[](unsigned int index);
    const T& operator[](unsigned int index) const;

    // Taille du tableau
    unsigned int size() const;
};

#include "Array.tpp"

#endif
