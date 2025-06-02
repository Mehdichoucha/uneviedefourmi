#include "Fourmis.h"


int main() {
    Fourmis f;


    //fonction pour la fourmilière 0,1,2
    /*f.AjouterSalle(0, 5, "V");
    f.AjouterSalle(1, 1, "salle 1");
    f.AjouterSalle(2, 1, "salle 2");
    f.AjouterSalle(3, 5, "D");

    f.ajouterTunnel0(0, 1);  // vestibule → salle 1
    f.ajouterTunnel0(0, 2);  // vestibule → salle 2
    f.ajouterTunnel0(1, 3);  // salle 1 → dortoir
    f.ajouterTunnel0(2, 3);  // salle 2 → dortoir*/

     /*f.ajouterTunnel1(0, 1);
     f.ajouterTunnel1(1, 2);
     f.ajouterTunnel1(2, 3);*/

    /*f.ajouterTunnel2(0, 1);
    f.ajouterTunnel2(1, 2);
    f.ajouterTunnel2(2, 3);
    f.ajouterTunnel2(0, 3);*/

    //fonction pour la fourmilière 3
    /*f.AjouterSalle3(0,5,"V");
    f.AjouterSalle3(1,1,"Salle1");
    f.AjouterSalle3(2,1,"Salle2");
    f.AjouterSalle3(3,1,"Salle3");
    f.AjouterSalle3(4,1,"Salle4");
    f.AjouterSalle3(5,5,"D");

    f.ajouterTunnel3(0,1); //vestibule → salle1
    f.ajouterTunnel3(1,2); //salle1 → salle2
    f.ajouterTunnel3(2,3); //salle2 → salle3
    f.ajouterTunnel3(1,4); //salle1 → salle4
    f.ajouterTunnel3(4,5); //salle4 → D*/


    // fonction pour la fourmilière 4
   /* f.AjouterSalle4(0,10,"V");
    f.AjouterSalle4(1,2,"Salle 1");
    f.AjouterSalle4(2,1,"Salle 2");
    f.AjouterSalle4(3,1,"Salle 3");
    f.AjouterSalle4(4,2,"Salle 4");
    f.AjouterSalle4(5,1,"Salle 5");
    f.AjouterSalle4(6,1,"Salle 6");
    f.AjouterSalle4(7,10,"D");

    f.ajouterTunnel4(0,1); //vestibule → salle 1
    f.ajouterTunnel4(1,2); // salle 1 → salle 2
    f.ajouterTunnel4(1,3); // salle 1 → salle 3
    f.ajouterTunnel4(3,4); // salle 3 → salle 4
    f.ajouterTunnel4(2,4); // salle 2 → salle 4
    f.ajouterTunnel4(4,5); // salle 4 → salle 5
    f.ajouterTunnel4(4,6); // salle 4 → salle 6
    f.ajouterTunnel4(5,7); // salle 5 → D
    f.ajouterTunnel4(6,7); // salle 6 → D*/

     f.AjouterSalle5(0,50,"V");
     f.AjouterSalle5(1,8,"Salle 1");
     f.AjouterSalle5(2,4,"salle2");
     f.AjouterSalle5(3,2,"salle3");
     f.AjouterSalle5(4,4,"salle4");
     f.AjouterSalle5(5,2,"salle5");
     f.AjouterSalle5(6,4,"salle6");
     f.AjouterSalle5(7,2,"salle7");
     f.AjouterSalle5(8,5,"salle5");
     f.AjouterSalle5(9,1,"salle9");
     f.AjouterSalle5(10,1,"salle10");
     f.AjouterSalle5(11,1,"salle11");
     f.AjouterSalle5(12,1,"salle12");
     f.AjouterSalle5(13,4,"salle13");
     f.AjouterSalle5(14,2,"salle14");
     f.AjouterSalle5(15,50,"D");

     f.ajouterTunnel5(0,1); //vestibule → salle 1
     f.ajouterTunnel5(1,2); //salle1 → salle 2
     f.ajouterTunnel5(1,6); //salle1 → salle 6
     f.ajouterTunnel5(1,8); //salle 1 → salle 8
     f.ajouterTunnel5(2,3); //salle 2 → salle 3
     f.ajouterTunnel5(2,5); //salle 2 → salle 5
     f.ajouterTunnel5(3,4); // salle 3 → salle 4
     f.ajouterTunnel5(4,5); //salle 4 → salle 5
     f.ajouterTunnel5(4,15); //salle 4 → D
     f.ajouterTunnel5(6,7); //salle6 → salle7
     f.ajouterTunnel5(7,9); //salle 7 → salle 9
     f.ajouterTunnel5(7,10); //salle 7 → salle 10
     f.ajouterTunnel5(9,14); // salle 9 → salle14
     f.ajouterTunnel5(10,14); // salle 10 → salle 14
     f.ajouterTunnel5(14,15); // salle 14 → D
     f.ajouterTunnel5(8,11); //salle 8 → salle 11
     f.ajouterTunnel5(8,12); //salle 8 → salle 11
     f.ajouterTunnel5(11,13); //salle 11 → salle 13
     f.ajouterTunnel5(12,13); //salle 12 → salle 13
     f.ajouterTunnel5(13,15); // salle 13 → D


    // Afficher la structure de la fourmilière
    f.AfficherStructure();

    // Simuler les déplacements des fourmis
    f.simulerDeplacement();

    return 0;
}
