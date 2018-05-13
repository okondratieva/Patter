#include "Matrix.h"
int max_el(std::vector<int> v) {
	int max = v[0];
	for (int i = 0; i < v.size(); i++)
		if (v[i] > max)
			max = v[i];
}
void Sparce_Matrix::Set_pos(std::vector<int> _rows, std::vector<int> _colls) {
	rows = _rows;
	colls = _colls;
}
void Sparce_Matrix::Set_matrix(std::vector<int> v) {
	mat = v;
}
void Sparce_Matrix::Set_Drawer(Drawer *_d) {
	d = _d;
}
int Sparce_Matrix::GetN() {
	int r = max_el(rows);
	int c = max_el(colls);
	if (r > c)
		return r;
	else
		return c;
}
int Sparce_Matrix::Get_value(int row, int column) {
	//поискать в столбцах и строках необходимые номера, если их нет, вывести 0
	return 0;
}
void Sparce_Matrix::Draw() {
	int n = GetN();
	d->DrawBorders(n, n);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			d->DrawValue(i*n, j, mat[i*n + j]);
		std::cout << "" << std::endl;
	}
}