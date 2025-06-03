//
// Created by nadjl on 19/05/2025.
//


#include "salle.h"


Salle::Salle(int id, int capacite) : id(id), capacite(capacite) {}


void Salle::ajouterVoisin(int voisin) {
    voisins.push_back(voisin);
}

// Retourne l'identifiant de la salle
int Salle::getId() const {
    return id;
}

// Retourne la capacité de la salle
int Salle::getCapacite() const {
    return capacite;
}


std::vector<int> Salle::getVoisins() const {
    return voisins;
}