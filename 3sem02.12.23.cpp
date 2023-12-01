#include <cstdio>
#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    int* a;
    int n, sum;
    cout << "введите количесвто элементов массива n=";
    cin >> n;
    a = new int[n];
    cout << "введите элементы массива по возрастанию" << endl;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cout << "введите искомую сумму sum=";
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
            cout << "индексы: " << first << " " << last << endl;
            cout << "элементы массива: " << a[first] << " " << a[last] << endl;
            return 0;
        }
    }
    cout << "пара чисел не найдена" << endl;
    return 0;
}