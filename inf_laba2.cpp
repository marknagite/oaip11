#include <iostream>

int main() {
    setlocale(LC_ALL, "Rus");
    std::cout << "������� ���������� ����� (����� ���������������): ";
    int n;
    if (!(std::cin >> n)) {
        std::cerr << "������ �����. ������� ����� ����� �����.";
        return 1;
    }

    if (n < 0) {
        std::cout << "���������� ����� �� ����� ���� �������������";
        return 1;
    }

    // ����������� ��� ���� int: ��������� �� 12!
    if (n > 12) {
        std::cout << "��������: ��� n > 12 �������� ���������� �� ���������� � int � ����� ��������.";
        std::cout << "������� n �� 0 �� 12 ��� ����������� ���������� � ���� ��������.";
        return 1;
    }

    int nums = 1;
    int i = 1;
    while (i <= n) {
        nums = nums * i;
        ++i;
    }

    std::cout << n << "! = " << nums << '\n';
    return 0;
}