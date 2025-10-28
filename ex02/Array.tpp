#ifndef ARRAY_TPP
#define ARRAY_TPP

#include <stdexcept>

// Constructeur vide
template <typename T>
Array<T>::Array() : _data(NULL), _size(0) {}

// Constructeur avec taille
template <typename T>
Array<T>::Array(unsigned int n) : _data(new T[n]()), _size(n) {}

// Constructeur par copie (copie profonde)
template <typename T>
Array<T>::Array(const Array<T>& other) : _data(NULL), _size(0)
{
    _size = other._size;
    if (_size > 0)
    {
        _data = new T[_size];
        for (unsigned int i = 0; i < _size; i++)
            _data[i] = other._data[i];
    }
}

// Destructeur
template <typename T>
Array<T>::~Array()
{
    delete[] _data;
}

// Opérateur d'affectation
template <typename T>
Array<T>& Array<T>::operator=(const Array<T>& other)
{
    if (this != &other)
    {
        delete[] _data;
        _size = other._size;
        if (_size > 0)
        {
            _data = new T[_size];
            for (unsigned int i = 0; i < _size; i++)
                _data[i] = other._data[i];
        }
        else
        {
            _data = NULL;
        }
    }
    return *this;
}

// Accès aux éléments avec vérification des indices
template <typename T>
T& Array<T>::operator[](unsigned int index)
{
    if (index >= _size)
        throw std::out_of_range("Index out of bounds");
    return _data[index];
}

template <typename T>
const T& Array<T>::operator[](unsigned int index) const
{
    if (index >= _size)
        throw std::out_of_range("Index out of bounds");
    return _data[index];
}

// Taille du tableau
template <typename T>
unsigned int Array<T>::size() const
{
    return _size;
}

#endif
