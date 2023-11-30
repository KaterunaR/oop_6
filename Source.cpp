#include <iostream>
#include <cmath>
using namespace std;

//�������� �������� ������� ��� ����������� ���������� ������������� �������� ������.

template <typename T1, typename T2>
T1 geometric_mean(T1 array[], const T2 size)
{
    T1 product = 1;

    for (T2 i = 0; i < size; i++)
    {
        product *= array[i];
    }

    T1 result = pow(product, 1.0 / size);
    return result;
}

int main()
{
    int arr[] = { 1, 1, 3, 4, 5 };
    int result = geometric_mean(arr, 5);
    cout << "Geometric Mean: " << result <<endl;

    double arr1[] = { 2.5, 4.7, 6.3, 8.1};
    double result1 = geometric_mean(arr1, 4);
    cout << "Geometric Mean: " << result1 << endl;


    return 0;
}