#include "Matrix.h"

Minor::Minor(Matrix *_m, std::vector<int> _items) :Matrix() {
	m = _m;
	items = _items;
}
void Minor::Set_matrix(std::vector<int> v) {
	mat = v;
}
void Minor::Set_Drawer(Drawer *_d) {
	d = _d;
}
int Minor::GetN() {
	return items.size();
}
int Minor::Get_value(int row, int column) {
	return m->Get_value(items[row], items[column]);
}
void Minor::Draw() {}