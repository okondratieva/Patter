#pragma once
#include "Drawer.h"
#include <vector>
#include<math.h>

class Matrix {
	
protected: 
	Drawer *d;
	std::vector<int> mat;

public:
	Matrix() {}
	virtual void Set_matrix(std::vector<int> v) = 0;
	virtual void Set_Drawer(Drawer *_d) = 0;
	virtual int GetN() = 0;
	virtual int Get_value(int row, int column) = 0;
	virtual void Draw()=0;
};

class Full_Matrix : public Matrix {
public:

	void Set_matrix(std::vector<int> v);
	void Set_Drawer(Drawer *_d);
	int GetN();
	int Get_value(int row, int column);
	void Draw();
};

class Sparce_Matrix : public Matrix {
	std::vector<int> rows;
	std::vector<int> colls;

public:
	void Set_pos(std::vector<int> _rows, std::vector<int> _colls);
	int GetN();
	void Set_matrix(std::vector<int> v);
	void Set_Drawer(Drawer *_d);
	int Get_value(int row, int column);
	void Draw();
};


class Transpose : public Matrix {
	Matrix *m;
public:
	Transpose(Matrix *_m);
	void Set_matrix(std::vector<int> v);
	void Set_Drawer(Drawer *_d);
	int GetN();
	int Get_value(int row, int column);
	void Draw();
};

class Minor : public Matrix {
	std::vector<int> items;
	Matrix *m;
public:
	Minor(Matrix *_m, std::vector<int> _items);
	void Set_matrix(std::vector<int> v);
	void Set_Drawer(Drawer *_d);
	int GetN();
	int Get_value(int row, int column);
	void Draw();
};

class Lower_triangular : public Matrix {
	Matrix *m;
public:
	Lower_triangular(Matrix *_m);
	int GetN();
	void Set_matrix(std::vector<int> v);
	void Set_Drawer(Drawer *_d);
	int Get_value(int row, int column);
	void Draw();
};