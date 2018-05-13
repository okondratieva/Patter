#include "Matrix.h"

void Full_Matrix::Set_matrix(std::vector<int> v) {
	mat = v;
}
void Full_Matrix::Set_Drawer(Drawer *_d) {
	d = _d;
}
int Full_Matrix::GetN() {
	return (int)sqrt(mat.size());
}
int Full_Matrix::Get_value(int row, int column) {
	return mat[row*GetN() + column];
}
void Full_Matrix::Draw() {
	int n = GetN();
	d->DrawBorders(n, n);
	d->DrawCells(n);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			d->DrawValue(i*n, j, mat[i*n + j]);
		std::cout << "" << std::endl;
	}
}