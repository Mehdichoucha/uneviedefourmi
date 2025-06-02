#ifndef FOURMIS_H

#define FOURMIS_H
#include <vector>
#include <unordered_map>
#include <string>
#include "Salle.h"

class Fourmis {
private:
    std::vector<Salle> salles;
    int nb_fourmis = 50; // Nombre de fourmis par défaut

    std::unordered_map<std::string, int> rooms;
    std::vector<int> positionsFourmis;



public:
    // Méthodes publiques
    void AjouterSalle(int id, int capacite, const char* str);
    void ajouterTunnel0(int id1, int id2);
    void AfficherStructure() const;
    void simulerDeplacement();
   std::vector<int> bfsVersDortoir();
;

    void ajouterTunnel1(int id1, int id2);

    void ajouterTunnel2(int id1, int id2);

    void ajouterTunnel3(int id1, int id2);

    void ajouterTunnel4(int id1, int id2);

    void ajouterTunnel5(int id1, int id2);


    void AjouterSalle4(int id, int capacite, const char* str);

    void AjouterSalle3(int id, int capacite, const char* str);

    void AjouterSalle5(int id, int capacite, const char* str);

    int getNbFourmis() const {return nb_fourmis;}





};
#endif //FOURMIS_H
