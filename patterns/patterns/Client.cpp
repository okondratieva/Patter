#include "Matrix.h"

int main() {
	Matrix *m = new Full_Matrix();
	Draw_console d;
	std::vector<int> v;

	for (int i = 0; i < 9; i++)
		v.push_back(i + 1);

	m->Set_matrix(v);
	m->Set_Drawer(&d);
	m->Draw();
	std::cout << "n(m): " << m->GetN() << std::endl;

	std::vector<int> k;
	k.push_back(0);
	k.push_back(2);
	m = new Minor(m, k);
	std::cout << "minor(m)" << std::endl;
	std::cout << m->Get_value(0, 0) << " ";
	std::cout << m->Get_value(0, 1) << std::endl;
	std::cout << m->Get_value(1, 0) << " ";
	std::cout << m->Get_value(1, 1) << std::endl;
	std::cout << "n(m): " << m->GetN() << std::endl;

	m = new Transpose(m);
	std::cout << "tr(minor(m))" << std::endl;
	std::cout << m->Get_value(0, 0) << " ";
	std::cout << m->Get_value(0, 1) << std::endl;
	std::cout << m->Get_value(1, 0) << " ";
	std::cout << m->Get_value(1, 1) << std::endl;
	std::cout << "n(m): " << m->GetN() << std::endl;


	m = new Lower_triangular(m);
	std::cout << "lt(tr(minor(m)))" << std::endl;
	std::cout << m->Get_value(0, 0) << " ";
	std::cout << m->Get_value(0, 1) << std::endl;
	std::cout << m->Get_value(1, 0) << " ";
	std::cout << m->Get_value(1, 1) << std::endl;
	std::cout << "n(m): " << m->GetN() << std::endl;

	system("pause");
	return 0;
}