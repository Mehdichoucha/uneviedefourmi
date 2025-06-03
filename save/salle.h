//
// Created by nadjl on 19/05/2025.
//
#include<vector>
#ifndef SALLE_H
#define SALLE_H



class Salle {
private:
        int id;
        int capacite;
        std::vector<int> voisins; // Liste des salles connectées

public:
        Salle(int id, int capacite);

        int getId() const;
        int getCapacite() const;
        std::vector<int> getVoisins() const;

        // La méthode doit être présente ici
        void ajouterVoisin(int voisin);
};




#endif //SALLE_H