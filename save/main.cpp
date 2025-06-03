#include "fourmis.h"
int main () {
    Fourmis f;

    f.AjouterSalle(0, -1);//vestibule
    f.AjouterSalle(1, 1); //salle1
    f.AjouterSalle(2, 1); //salle2
    f.AjouterSalle(3, -1); //dortoir

    // ajouter des tunnels
    f.ajouterTunnel(0, 1);
    f.ajouterTunnel(0, 2);
    f.ajouterTunnel(1, 3);
    f.ajouterTunnel(2, 3);

    f.AfficherStructure();

    return 0;
}