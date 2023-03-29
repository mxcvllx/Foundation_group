#include <iostream>
#include <cmath>
#include <string.h>
#include<time.h>
#include<ctype.h>
#include<cmath>
///Standart kutubxonadagi belgili funksiyalar dan foydalanish uchun <ctype.h> sarlavha faylini dasturgaqo’shish kerak.
///void clear() - funksiyasi satrni tozalash (to’liqo’chirish) uchun ishlatiladi
///size uzunligini olchidi
///length uzunligini olchidi
///resize uzunligini ozgartiradi
///assign Satrli o’zgaruvchilarga qiymat berish uchun assign() metodidan foydalaniladi
///append ohiriga qoshadi
///erase Satrning biror qismini o’chirish
///insert Biror satrga boshqa satrning istalgan qismini qo’shishuchun funksiyasidan foydalaniladi.
///replace Satrning biror qismini almashtirish kerak bo’lsa,
///substr Satrning biror qismidan nusxa olish
///find Satrdan izlash funksiyalari
///swap Ikkita satrli yoki sonli o’zgaruvchilarningqiymatlarini almashtirish uchun funksiyasidanfoydalanish mumkin.

using namespace std;
int main(){

/**

float a = 3.7;
float b = 89.3;
float c = 56.9;
float d = 0.3;
float e = 12.7;
float g = 8.4;
float j = 863.89;
float l = 3.6;

cout << a << endl;
cout << b << endl;
cout << c << endl;
cout << d << endl;
cout << e << endl;
cout << g << endl;
cout << j << endl;
cout << l << endl;
*/

/**
bool zero = false;
bool one = true;
bool two = true;
bool third = false;
bool four = true;
bool five = false;
bool six = false;
bool seven = true;

cout << zero << endl;
cout << one << endl;
cout << two << endl;
cout << third << endl;
cout << four << endl;
cout << five << endl;
cout << six << endl;
cout << seven << endl;
*/

/**
string zero = "zero";
string one = "one";
string two = "two";
string third = "third";
string four = "four";
string five = "five";
string six = "six";
string seven = "seven";

cout << zero << endl;
cout << one << endl;
cout << two << endl;
cout << third << endl;
cout << four << endl;
cout << five << endl;
cout << six << endl;
cout << seven << endl;
*/

/**
char zero = 'a';
char one = 'b';
char two = 'c';
char third = 'd';
char four = 'e';
char five = 'g';
char six = 'h';
char seven = 'f';

cout << zero << endl;
cout << one << endl;
cout << two << endl;
cout << third << endl;
cout << four << endl;
cout << five << endl;
cout << six << endl;
cout << seven << endl;
*/

/**
double zero = 4.62;
double one = 1.47;
double two = 6.32;
double third = 5.64;
double four = 5.33;
double five = 7.45;
double six = 6.5;
double seven = 5.24;

cout << zero << endl;
cout << one << endl;
cout << two << endl;
cout << third << endl;
cout << four << endl;
cout << five << endl;
cout << six << endl;
cout << seven << endl;
*/

/**
int a, b;
cout << "a sonini kiriting";
cin >> a;
cout << "b sonini kiriting";
cin >> b;

cout << "yigindisi" << a+b << "ga teng";
cout << "kopaytmasi" << a*b << "ga teng";
cout << "ayirmasi" << a/b << "ga teng";
*/
/**
int a;
cout << "a sonini kiriting";
cin >> a;

cout <<"sonni kubi = "<< a*a*a << "ga teng";


cout << "2 sin kiriting";
cin >> b;
cout << "3 sin kiriting";
cin >> c;

*/
    int a = 5, b = 7, c = 10;

    if (a <= b && a <= c)
        cout << a << " is the smallest";

   if (b <= a && b <= c)
        cout << b << " is the smallest";

    else
        cout << c << " is the smallest";

   return 0;
}


