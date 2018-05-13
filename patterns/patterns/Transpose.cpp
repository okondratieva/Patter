#include "Matrix.h"


Transpose::Transpose(Matrix *_m) :Matrix() {
	m = _m;
}
void Transpose::Set_matrix(std::vector<int> v) {
	mat = v;
}
void Transpose::Set_Drawer(Drawer *_d) {
	d = _d;
}
int Transpose::GetN() {
	return m->GetN();
}
int Transpose::Get_value(int row, int column) {
	return m->Get_value(column, row);
}
void Transpose::Draw() {}



