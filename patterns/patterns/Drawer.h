#pragma once
#include <iostream>

class Drawer {
public:
	virtual void DrawBorders(int width, int heght) = 0;
	virtual void DrawValue(int row, int column, int value) = 0;
	virtual void DrawCells(int n) = 0;
};

class Draw_graphics : public Drawer{
public:
	void DrawBorders(int width, int heght);
	void DrawCells(int n);
	void DrawValue(int row, int column, int value);
};

class Draw_console : public Drawer{
public:
	void DrawBorders(int width, int heght);
	void DrawCells(int n);
	void DrawValue(int row, int column, int value);
};

class Draw_html : public Drawer {
public:
	void DrawBorders(int width, int heght);
	void DrawCells(int n);
	void DrawValue(int row, int column, int value);
};
