#include "Salle.h"

// Constructeur
Salle::Salle(int id, int capacite, const std::string& str)
    : id(id), capacite(capacite), nom(str) {}

// Vérifie si la salle peut accepter une nouvelle fourmi
bool Salle::peutAccepter() const {
    return nbOccupants < capacite;
}

// Une fourmi entre dans la salle.
void Salle::entrer() {
    if (peutAccepter()) {
        ++nbOccupants;
    }
}

// Une fourmi sort de la salle.
void Salle::sortir() {
    if (nbOccupants > 0) {
        --nbOccupants;
    }
}

// Retourne le nombre actuel d’occupants
int Salle::getOccupants() const {
    return nbOccupants;
}
