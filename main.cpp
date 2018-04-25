 #include <iostream>

using namespace std;

typedef struct contrainte {
    int *variables ; //les indices des variables concernées par la contrainte
    int typeContrainte ; //associer à chaque entier une contrainte
                         /*ex : 1 -> =
                                2 -> somme
                                3 ->  =/=
                                4 -> <=
                         */
    //bool **matriceAdj ; //permet de représenter la contrainte
                        //contrainte unaire : tableau 1D (on recopie variables[])
                        //contrainte binaire : tableau 2D (


} contrainte ;

typedef struct modele_pb {
    int nombreVar ; //représente le nombre de variables
    int **domValeur ; //représente dans un tableau 2D, alloué dynamiquement, les domaines de valeurs des variables
                      //première colonne du tableau : on insère var[] pour associer les domaines à chaque variable
    contrainte *contraintes ;
} modele_pb ;


int main()
{

    return 0;
}
