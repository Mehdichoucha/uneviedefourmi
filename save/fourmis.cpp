//
// Created by nadjl on 20/05/2025.
//

#include "fourmis.h"
#include <iostream>

void Fourmis::AjouterSalle(int id, int capacite) {
    salles.emplace_back(id, capacite);
    std::cout << "Salle " << id << " ajouter salle " << capacite << std::endl;
}

//ajoute un tunnel pour relier deux salles

void Fourmis::ajouterTunnel(int id1, int id2) {
    if (id1 < salles.size() && id2 < salles.size()) {
        salles[id1].ajouterVoisin(id2);
        salles[id2].ajouterVoisin(id1);
    }
}

void Fourmis::AfficherStructure() {
    std::cout << "Structure de la fourmilière:\n";
    for (const auto &s : salles) {
        std::cout << "Salle " << s.getId() << " (Capacité: " << s.getCapacite() << ") --> ";
        for (int voisin : s.getVoisins()) {
            std::cout << voisin << " ";
        }
        std::cout << "\n";
    }
}
void Fourmis::simulerDeplacement() {
    std::cout<<"simulation du deplacement des fourmis ... \n";
    //implementer un BFS pour trouver le chemin le plus court
}


