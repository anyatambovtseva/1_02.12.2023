#include <cstdio>
#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    int* a;
    int n, sum;
    cout << "������� ���������� ��������� ������� n=";
    cin >> n;
    a = new int[n];
    cout << "������� �������� ������� �� �����������" << endl;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cout << "������� ������� ����� sum=";
    cin >> sum;
    int first = 0;
    int last = n - 1;
    while (first != last)
    {
        int summa = a[first] + a[last];
        if (summa < sum)
            first++;
        else if (summa > sum)
            last--;
        else
        {
            cout << "�������: " << first << " " << last << endl;
            cout << "�������� �������: " << a[first] << " " << a[last] << endl;
            return 0;
        }
    }
    cout << "���� ����� �� �������" << endl;
    return 0;
}