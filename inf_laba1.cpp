#include <iostream>
int main() {
	setlocale(LC_ALL, "RU");
	double a;
	std::cin >> a;
	if (a < 60.0) {
		std::cout << "�������� � �������� �����" << std::endl;
	}
	else if (a >= 60.0 && a <= 80.0) {
		std::cout << "�� ������������� � ���������� ��������" << std::endl;
	}
	else if (a > 80.0) {
		std::cout << "���������� ��������!" << std::endl;
	}
}