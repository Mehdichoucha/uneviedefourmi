#ifndef SALLE_H
#define SALLE_H

#include <string>
#include <vector>

class Salle {
private:
        int id;
        int capacite;
        std::vector<int> voisins; // Liste des salles connectées (ID des salles)
        std::string nom; // Nom de la salle

        int nbOccupants = 0;


public:
        // Constructeur
        Salle(int id, int capacite, const std::string& str = "sansnom");

        // Accesseurs (getters)
        int getId() const { return id; }
        int getCapacite() const { return capacite; }
        const std::vector<int>& getVoisins() const { return voisins; } // Renvoie par référence pour éviter la copie
        const std::string& getNom() const { return nom; }

        // Méthode pour ajouter un voisin (salle connectée)
        void ajouterVoisin(int voisin) {
                voisins.push_back(voisin);
        }
        bool peutAccepter() const;
        void entrer();
        void sortir();
        int getOccupants() const;

};

#endif // SALLE_H
