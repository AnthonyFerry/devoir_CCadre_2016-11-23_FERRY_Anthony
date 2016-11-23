#include "Cadre.h"

int CCadre::_count = 0;

// Constructeur par defaut --
CCadre::CCadre()
{
	this->setX(10);
	this->setY(5);
	this->setWidth(5);
	this->setHeight(2 * this->width());
	this->setSymbol("*");
	this->_count++;
}

/**
 * Constructeur prenant en parametres :
 * -	Point d'ancrage
 */
CCadre::CCadre(int x, int y)
{
	this->setAnchor(x, y);
	this->setWidth(5);
	this->setHeight(2 * this->width());
	this->setSymbol("*");
	this->_count++;
}

/**
* Constructeur prenant en parametres :
* -	Point d'ancrage
* - Taille du cadre
*/
CCadre::CCadre(int x, int y, int size)
{
	this->setAnchor(x, y);
	this->setSize(size);
	this->setSymbol("*");
	this->_count++;
}

/**
* Constructeur prenant en parametres :
* -	Point d'ancrage
* - Largeur
* - Hauteur
*/
CCadre::CCadre(int x, int y, int width, int height)
{
	this->setAnchor(x, y);
	this->setSize(width, height);
	this->setSymbol("*");
	this->_count++;
}

/**
* Constructeur prenant en parametres :
* -	Point d'ancrage
* - Largeur
* - Hauteur
* - Symbole
*/
CCadre::CCadre(int x, int y, int width, int height, string symbol)
{
	this->setAnchor(x, y);
	this->setSize(width, height);
	this->setSymbol(symbol);
	this->_count++;
}

CCadre::~CCadre()
{
	this->_count--;
}

// Retourne la surface du carré
int CCadre::getSurface()
{
	return this->width() * this->height();
}

// Retourne le perimetre du carré
int CCadre::getPerimetre()
{
	return 2*(this->width() + this->height());
}

// Retourne vrai si largeur = hauteur
bool CCadre::isCarre()
{
	return this->width() == this->height();
}

// Affiche les différent paramètre composants le cadre
void CCadre::displayCadreSettings()
{
	string carre = this->isCarre() ? "C'est un carre" : "C'est un rectangle";
	system("cls");
	cout << "**Cadre :**************************" << endl;
	cout << "x = " << this->x() << endl;
	cout << "y = " << this->y() << endl;
	cout << "largeur = " << this->width() << "cm" << endl;
	cout << "hauteur = " << this->height() << "cm" << endl;
	cout << "symbole = '" << this->symbol() << "'" << endl;
	cout << carre << endl;
	cout << "Aire = " << this->getSurface() << "cm carre" << endl;
	cout << "Perimetre = " << this->getPerimetre() << "cm" << endl;
	cout << "***********************************" << endl;
}

//Mutateurs
void CCadre::setX(int x)
{
	this->_anchor.x = x;
}

void CCadre::setY(int y)
{
	this->_anchor.y = y;
}

//Initalise le point
void CCadre::setAnchor(int x, int y)
{
	this->_anchor.x = x;
	this->_anchor.y = y;
}

void CCadre::setWidth(int width)
{
	this->_width = width;
}

void CCadre::setHeight(int height)
{
	this->_height = height;
}

// Affecteur l'entier en paramètre à la hauteur ET la largeur
void CCadre::setSize(int size)
{
	this->setWidth(size);
	this->setHeight(size);
}

void CCadre::setSize(int width, int height)
{
	this->setWidth(width);
	this->setHeight(height);
}

void CCadre::setSymbol(string symbol)
{
	this->_symbol = symbol;
}