#ifndef PRINT_HPP  // Empêche les inclusions multiples du fichier
#define PRINT_HPP  

#include <iostream>  // Inclusion de la bibliothèque standard pour l'affichage

// Template de fonction permettant d'afficher plusieurs arguments de types différents
template <typename... TypePrint>
void print(const TypePrint&... variablePrint) {
    // Utilisation d'une expression fold pour afficher chaque élément séparément
    ((std::cout << variablePrint << ' '), ...) << std::endl;
}

#endif // PRINT_HPP  // Fin de la protection contre les inclusions multiples
