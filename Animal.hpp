#ifndef PERSONNE_H
#define PERSONNE_H

#include <string>
#include <fstream>
#include <concepts>
using namespace std;

class Animal {

public:

    Animal(int,string,int);
    int getNbPatte()const;
    string getNom()const;
    int getNbYeux()const;
    

    template <std::derived_from<Animal> T>//lorsque je vais << un objet, il va voir si il derive, si je << un animal ca marche et chat va prendre son << puisque il derive de animal
    friend ostream& operator<<(ostream& o, const T& animal){
        return o<<"";
    }
    
    

protected:

    void setnbPatte(int);
    void setNom(string);
    void setNbYeux(int);
    





private:

    int nbPatte=4;
    string nom;
    int nbYeux;





};
#endif