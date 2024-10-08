// ����������� ������ � 5.5
#include <iostream>
#include <vector>
#include <cstdlib> // ��� ������� rand()

// ������� ��� ��������� ��������������� �����������
std::vector<int> generate_sequence(int V1, int V2, int a, int b, int c, int m, int n) {
    std::vector<int> sequence;
    sequence.push_back(V1);
    sequence.push_back(V2);

    for (int i = 2; i < n; ++i) {
        int next_value = (a * sequence[i - 1] + b * sequence[i - 2] + c) % m;
        sequence.push_back(next_value);
    }

    return sequence;
}

int main() {
    // �������� ��������
    int V1 = rand() % 100;  // ��������� �������� V1
    int V2 = rand() % 100;  // ��������� �������� V2
    int a = 3, b = 5, c = 7, m = 100;  // ���������, �� ����� ��������
    int n = 20;  // ʳ������ �������� � �����������

    // ��������� �����������
    std::vector<int> sequence = generate_sequence(V1, V2, a, b, c, m, n);

    // ��������� ����������
    std::cout << "����������� �����������:\n";
    for (int i = 0; i < n; ++i) {
        std::cout << sequence[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}


