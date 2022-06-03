#include <iostream>
int  array_max(const int* a, const int* b);
int* array_remove(int* a, int* b, int v);

using namespace std;

int main(void) {

    setlocale(LC_ALL, "Russian_Russia.1251");
    const int n = 10;
    cout << "Ввод [" << n << ']' << std::endl;

    int a[n];
    for (int i = 0; i < n; ++i) {
        cout << '[' << i << "] = ";
        cin >> a[i];
    }
    cin.sync();

    int* e = array_remove(a, a + n, array_max(a, a + n));
    for (int* p = a; p != e; ++p)
        cout << *p << ' ';
        cin.get();

    return 0;
}

int array_max(const int* a, const int* b) {
    const int* p = a;
    for (++a; a < b; ++a) {
        if (*a > *p)
            p = a;
    }
    return (p != b) ? *p : 0;
}

int* array_remove(int* a, int* b, int v) {
    while ((a < b) && (*a != v))
        ++a;

    int* p = a;
    for (; a < b; ++a) {
        if (*a != v)
            *p++ = *a;
    }
    return p;
}