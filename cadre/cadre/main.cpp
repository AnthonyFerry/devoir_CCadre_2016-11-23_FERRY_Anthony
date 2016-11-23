#include "Cadre.h"
#include <iostream>
#include <string>

using namespace std;

enum actions
{
	quitter,
	display,
	changeTaille,
	changePos,
	changeSym,
	nbCadre
};

// Instance de la classe CCadre en global pour les tests
CCadre cadre(2, 2, 64, 63);


int choixAction();
void displayMenu();
void changerTaille();
void changerPos();
void changerSym();
void auRevoir();

int main()
{
	
	
	while (choixAction() != 0)
	{
		system("PAUSE");
	}
}

int choixAction()
{
	displayMenu();

	int choix;
	cin >> choix;

	switch (choix)
	{
		case actions::quitter:
			auRevoir();
			break;
		case actions::display:
			cadre.displayCadreSettings();
			break;
		case actions::changeTaille:
			changerTaille();
			break;
		case actions::changePos:
			changerPos();
			break;
		case actions::changeSym:
			changerSym();
			break;
		case actions::nbCadre:
			cout << "Nombre d'instances : " << cadre.getCount() << endl;
			break;
	}

	return choix;
}

void displayMenu()
{
	system("cls");
	cout << "******************************" << endl;
	cout << "* Programme de la classe     *" << endl;
	cout << "* cadre.                     *" << endl;
	cout << "*                            *" << endl;
	cout << "* Par Anthony FERRY          *" << endl;
	cout << "******************************" << endl;
	cout << endl;
	cout << "Que voulez vous faire ?" << endl;
	cout << "  0. Quitter le programme" << endl;
	cout << "  1. Afficher le Cadre" << endl;
	cout << "  2. Changer la taille" << endl;
	cout << "  3. Changer la position" << endl;
	cout << "  4. Changer le symbole" << endl;
	cout << "  5. Nombre de cadre" << endl;
}

void changerTaille()
{
	int width, height;
	system("cls");

	cout << "Nouvelle largeur : ";
	cin >> width;
	cout << "Nouvelle hauteur : ";
	cin >> height;

	cadre.setSize(width, height);
}

void changerPos()
{
	int x, y;
	system("cls");

	cout << "Nouveau x : ";
	cin >> x;
	cout << "Nouveau y : ";
	cin >> y;

	cadre.setAnchor(x, y);
}

void changerSym()
{
	string sym;
	system("cls");

	cout << "Nouveau symbole : " << endl;
	cin >> sym;

	cadre.setSymbol(sym);
}

void auRevoir()
{
	system("cls");
	cout << "******************************" << endl;
	cout << "*                            *" << endl;
	cout << "*     !!! AU REVOIR !!!      *" << endl;
	cout << "*                            *" << endl;
	cout << "******************************" << endl;
	system("PAUSE");
}