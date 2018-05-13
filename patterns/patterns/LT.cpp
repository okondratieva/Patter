#include "Matrix.h"

Lower_triangular::Lower_triangular(Matrix *_m) : Matrix() {
	m = _m;
}
int Lower_triangular::GetN() {
	return m->GetN();
}
void Lower_triangular::Set_matrix(std::vector<int> v) {
	mat = v;
}
void Lower_triangular::Set_Drawer(Drawer *_d) {
	d = _d;
}
int Lower_triangular::Get_value(int row, int column) {
	if (row < column)
		return 0;
	else
		return m->Get_value(row, column);
}
void Lower_triangular::Draw() {}