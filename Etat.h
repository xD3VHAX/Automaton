#ifndef ETAT_H
#define ETAT_H

#include <iostream>
#include <vector>
#include <string>
#include "Transition.h"
class Transition;

class Etat
{
    public:
        Etat();
        Etat(std::string nom);
        virtual ~Etat();
        void addTransition(Transition nouveau);
        void addTransitions(std::vector<Transition> nouveau);
        bool transitionsDeterministe();
        bool transitionsEtatInitial();
        void setNom(std::string nouveau);
        void setEntree(bool nouveau);
        void setSortie(bool nouveau);
        std::string getNom();
        bool getEntree();
        bool getSortie();
        std::vector<Transition> getTransitions();
        Etat& operator+(Etat *other);
        void suppDoublonsTransitions();
        void regrouperTransitions();
        void completion(Etat *P, std::vector<char> abcd);
    protected:
        std::string _nom;
        bool _entree;
        bool _sortie;
        std::vector<Transition> _listTransition;
    private:
};

#endif // ETAT_H