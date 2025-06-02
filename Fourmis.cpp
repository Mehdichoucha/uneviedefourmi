//
// Created by nadjl on 20/05/2025.
//

#include "Fourmis.h"

#include <algorithm>
#include <chrono>
#include <iostream>
#include <vector>
#include <thread>
#include <ranges>
#include <queue>
#include "Salle.h"

void Fourmis::AjouterSalle(int id, int capacite, const char* str) {
    salles.emplace_back(id, capacite, str);
    std::cout << "Salle " << id << " ajouter salle " << capacite << ", nom: " << str << std::endl;
}

void Fourmis::AjouterSalle4(int id, int capacite, const char* str) {
    salles.emplace_back(id, capacite, str);
    std::cout << "Salle " << id << " ajouter salle " << capacite << ", nom: " << str << std::endl;
}
void Fourmis::AjouterSalle3(int id, int capacite, const char* str) {
    salles.emplace_back(id, capacite, str);
    std::cout << "Salle " << id << " ajouter salle " << capacite << ", nom: " << str << std::endl;
}

void Fourmis::AjouterSalle5(int id, int capacite, const char* str) {
    salles.emplace_back(id, capacite, str);
    std::cout << "Salle " << id << " ajouter salle " << capacite << ", nom: " << str << std::endl;
}


// Ajoute un tunnel pour relier deux salles
void Fourmis::ajouterTunnel0(int id1, int id2) {
    if (id1 < salles.size() && id2 < salles.size()) {
        salles[id1].ajouterVoisin(id2);
        salles[id2].ajouterVoisin(id1);
    }
}
void Fourmis::ajouterTunnel1(int id1, int id2) {
    if (id1 < salles.size() && id2 < salles.size()) {
        salles[id1].ajouterVoisin(id2);
        salles[id2].ajouterVoisin(id1);
    }

}
void Fourmis::ajouterTunnel2(int id1, int id2) {
    if (id1 < salles.size() && id2 < salles.size()) {
        salles[id1].ajouterVoisin(id2);
    }
}

void Fourmis::ajouterTunnel4(int id1, int id2) {
    if (id1 < salles.size() && id2 < salles.size()) {
        salles[id1].ajouterVoisin(id2);
        salles[id2].ajouterVoisin(id1);
    }
}
void Fourmis::ajouterTunnel3(int id1, int id2) {
    if (id1 < salles.size() && id2 < salles.size()) {
        salles[id1].ajouterVoisin(id2);
        salles[id2].ajouterVoisin(id1);
    }
}

void Fourmis::ajouterTunnel5(int id1, int id2) {
    if (id1 < salles.size() && id2 < salles.size()) {
        salles[id1].ajouterVoisin(id2);
        salles[id2].ajouterVoisin(id1);
    }
}

void Fourmis::AfficherStructure() const {
    std::cout << "Structure de la fourmilière:\n";
    for (const auto& s : salles) {
        std::cout << "Salle " << s.getId() << " (Capacité: " << s.getCapacite() << ") --> ";
        for (int voisin : s.getVoisins()) {
            std::cout << voisin << " ";
        }
        std::cout << "\n";
    }
}

void Fourmis::simulerDeplacement() {
    std::cout << "Simulation du déplacement des fourmis...\n";

    positionsFourmis = std::vector<int>(getNbFourmis(), 0);; // Toutes les fourmis commencent au vestibule
    for (int pos : positionsFourmis) salles[pos].entrer();

    std::cout << "+++Etat Initial+++\n";
    for (size_t i = 0; i < positionsFourmis.size(); ++i)
        std::cout << "f" << i + 1 << " -> " << salles[positionsFourmis[i]].getNom() << "\n";

    std::vector<int> chemin = bfsVersDortoir(); // chemin V -> D
    std::vector<size_t> indicesFourmis(positionsFourmis.size(), 0);
    std::vector<bool> arrivee(positionsFourmis.size(), false);
    int compteur = 1;

    while (true) {
        std::cout << "++++E" << compteur++ << "++++\n";

        for (size_t j = 0; j < positionsFourmis.size(); ++j) {
            if (arrivee[j]) continue;

            size_t indice = ++indicesFourmis[j];
            if (indice >= chemin.size()) continue; // déjà arrivée

            int newPos = chemin[indice];
            int oldPos = positionsFourmis[j];

            if (salles[newPos].peutAccepter()) {
                salles[oldPos].sortir();
                salles[newPos].entrer();
                positionsFourmis[j] = newPos;

                std::cout << "f" << j + 1 << " - " << salles[oldPos].getNom()
                          << " - " << salles[newPos].getNom() << "\n";

                if (salles[newPos].getNom() == "D") {
                    std::cout << "f" << j + 1 << " est arrivée au dortoir.\n";
                    arrivee[j] = true;
                }
            } else {
                --indicesFourmis[j]; // attendre son tour
                std::cout << "f" << j + 1 << " attend dans " << salles[oldPos].getNom() << "\n";
            }
        }

        if (std::all_of(arrivee.begin(), arrivee.end(), [](bool a) { return a; })) {
            std::cout << "Toutes les fourmis sont arrivées au dortoir.\n";
            break;
        }

        std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    }
}





std::vector<int> Fourmis::bfsVersDortoir() {
    std::vector<bool> visite(salles.size(), false);
    std::vector<int> parent(salles.size(), -1);
    std::queue<int> file;

    int depart = -1;
    int arrivee = -1;

    for (const auto& s : salles) {
        if (s.getNom() == "V") depart = s.getId();
        if (s.getNom() == "D") arrivee = s.getId();
    }

    if (depart == -1 || arrivee == -1) return {}; // Chemin impossible

    file.push(depart);
    visite[depart] = true;

    while (!file.empty()) {
        int courant = file.front();
        file.pop();

        if (courant == arrivee) break;

        for (int voisin : salles[courant].getVoisins()) {
            if (!visite[voisin]) {
                visite[voisin] = true;
                parent[voisin] = courant;
                file.push(voisin);
            }
        }
    }

    std::vector<int> chemin;
    for (int at = arrivee; at != -1; at = parent[at])
        chemin.push_back(at);

    std::reverse(chemin.begin(), chemin.end());
    return chemin;
}



