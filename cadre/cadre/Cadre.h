#pragma once
#include <iostream>
#include <string>

using namespace std;

// Structure définissant un point sur un plan
typedef struct TPoint
{
	int x, y;
}Point;

class CCadre
{
private:
	TPoint     _anchor;
	int        _width;
	int        _height;
	string     _symbol;
	static int _count;
public:
	CCadre();
	CCadre(int x, int y);
	CCadre(int x, int y, int size);
	CCadre(int x, int y, int width, int height);
	CCadre(int x, int y, int width, int height, string symbol);
	~CCadre();

	int getSurface();
	int getPerimetre();
	bool isCarre();
	void displayCadreSettings();

	//Accesseurs
	int x(void)const { return this->_anchor.x; }
	int y(void)const { return this->_anchor.y; }
	int width(void)const { return this->_width; }
	int height(void)const { return this->_height; }
	string symbol(void)const { return this->_symbol; }
	int getCount(void)const { return this->_count; }

	//Mutateurs
	void setX(int x);
	void setY(int y);
	void setAnchor(int x, int y);
	void setWidth(int width);
	void setHeight(int height);
	void setSize(int size);
	void setSize(int width, int height);
	void setSymbol(string symbol);
};

