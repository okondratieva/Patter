#include "Drawer.h"

void Draw_graphics::DrawBorders(int width, int heght) {
	std::cout << "draw borders" << std::endl;
}
void Draw_graphics::DrawCells(int n) {
	std::cout << "draw cells" << std::endl;
}
void Draw_graphics::DrawValue(int row, int column, int value) {
	std::cout << value << " ";
}

void Draw_console::DrawBorders(int width, int heght) {
	std::cout << "draw borders" << std::endl;
}
void Draw_console::DrawCells(int n) {
	std::cout << "draw cells" << std::endl;
}
void Draw_console::DrawValue(int row, int column, int value) {
	std::cout << value << " ";
}

void Draw_html::DrawBorders(int width, int heght) {
	std::cout << "draw borders" << std::endl;
}
void Draw_html::DrawCells(int n) {
	std::cout << "draw cells" << std::endl;
}
void Draw_html::DrawValue(int row, int column, int value) {
	std::cout << value << " ";
}
