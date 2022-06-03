#include <iostream>
#include <conio.h>
#include <clocale>
#include <math.h>

using namespace std;

int main()

{
    setlocale(LC_ALL, "Russian_Russia.1251");

    char c;
    
    cout << "Введите символ = "; cin >> c;

    switch (c) 
    {
        case 'A': cout << "Буквы" << endl; break;
        case 'B': cout << "Буквы" << endl; break;
        case 'C': cout << "Буквы" << endl; break;
        case 'D': cout << "Буквы" << endl; break;
        case 'E': cout << "Буквы" << endl; break;
        case 'F': cout << "Буквы" << endl; break;
        case 'G': cout << "Буквы" << endl; break;
        case 'H': cout << "Буквы" << endl; break;
        case 'I': cout << "Буквы" << endl; break;
        case 'J': cout << "Буквы" << endl; break;
        case 'K': cout << "Буквы" << endl; break;
        case 'L': cout << "Буквы" << endl; break;
        case 'M': cout << "Буквы" << endl; break;
        case 'N': cout << "Буквы" << endl; break;
        case 'O': cout << "Буквы" << endl; break;
        case 'P': cout << "Буквы" << endl; break;
        case 'Q': cout << "Буквы" << endl; break;
        case 'R': cout << "Буквы" << endl; break;
        case 'S': cout << "Буквы" << endl; break;
        case 'T': cout << "Буквы" << endl; break;
        case 'U': cout << "Буквы" << endl; break;
        case 'V': cout << "Буквы" << endl; break;
        case 'W': cout << "Буквы" << endl; break;
        case 'X': cout << "Буквы" << endl; break;
        case 'Y': cout << "Буквы" << endl; break;
        case 'Z': cout << "Буквы" << endl; break;

        case 'a': cout << "Буквы" << endl; break;
        case 'b': cout << "Буквы" << endl; break;
        case 'c': cout << "Буквы" << endl; break;
        case 'd': cout << "Буквы" << endl; break;
        case 'e': cout << "Буквы" << endl; break;
        case 'f': cout << "Буквы" << endl; break;
        case 'g': cout << "Буквы" << endl; break;
        case 'h': cout << "Буквы" << endl; break;
        case 'i': cout << "Буквы" << endl; break;
        case 'j': cout << "Буквы" << endl; break;
        case 'k': cout << "Буквы" << endl; break;
        case 'l': cout << "Буквы" << endl; break;
        case 'm': cout << "Буквы" << endl; break;
        case 'n': cout << "Буквы" << endl; break;
        case 'o': cout << "Буквы" << endl; break;
        case 'p': cout << "Буквы" << endl; break;
        case 'q': cout << "Буквы" << endl; break;
        case 'r': cout << "Буквы" << endl; break;
        case 's': cout << "Буквы" << endl; break;
        case 't': cout << "Буквы" << endl; break;
        case 'u': cout << "Буквы" << endl; break;
        case 'v': cout << "Буквы" << endl; break;
        case 'w': cout << "Буквы" << endl; break;
        case 'x': cout << "Буквы" << endl; break;
        case 'y': cout << "Буквы" << endl; break;
        case 'z': cout << "Буквы" << endl; break;

        case '0': cout << "Цифры" << endl; break;
        case '1': cout << "Цифры" << endl; break;
        case '2': cout << "Цифры" << endl; break;
        case '3': cout << "Цифры" << endl; break;
        case '4': cout << "Цифры" << endl; break;
        case '5': cout << "Цифры" << endl; break;
        case '6': cout << "Цифры" << endl; break;
        case '7': cout << "Цифры" << endl; break;
        case '8': cout << "Цифры" << endl; break;
        case '9': cout << "Цифры" << endl; break;

        case '+': cout << "Арифмет. операции" << endl; break;
        case '-': cout << "Арифмет. операции" << endl; break;
        case '*': cout << "Арифмет. операции" << endl; break;
        case '/': cout << "Арифмет. операции" << endl; break;

        default: cout << "Другие символы" << endl; break;
            
        _getch();
    }

    return (0);

}