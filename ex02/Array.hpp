#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <exception>

/* creation d un modele de classe appele Array, qui fonctionne avec un type inconnu T
T est une variable de type ce n est pas encore un vrai type comme int ou float*/
template <typename T>
class Array
{
private: /* pour proteger l'integrite du tableau */
    T* _data;
    unsigned int _size;

public:
    Array();                       /*  constructeur vide */
    Array(unsigned int n);         /* constructeur avec taille */
    Array(const Array& other);     /* constructeur par copie */
    ~Array();
    Array& operator=(const Array& other); /* surcharge de l operateur d'affectation */

    /* surcharge de l'operation [] : accès aux éléments */
    T& operator[](unsigned int index);

    /* surcharge de l operatuer [] const : acces au elements qu'en lecture */
    const T& operator[](unsigned int index) const;

    /* methode sert a renvoyer la taille du tableau */
    unsigned int size() const;
};

/* inclure le fichier .tpp */
#include "Array.tpp"

#endif
