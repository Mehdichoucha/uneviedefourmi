//
// Created by nadjl on 20/05/2025.
//

#ifndef FOURMIS_H
#define FOURMIS_H
#include <vector>

#include "salle.h"


class Fourmis {
private:
    std::vector<Salle>salles;
    int nb_fourmis = 2;

public:
    void AjouterSalle(int id,int capacite);
    void ajouterTunnel(int id1,int id2);
    void AfficherStructure(); // afficher la struc de la fourmiliere
    void simulerDeplacement();

};



#endif //FOURMIS_H