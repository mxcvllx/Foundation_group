#include <iostream>
#include <string>
#include <string.h>
#include<cmath>
#include<math.h>
#include<time.h>
#include<stdlib.h>
#include<ctype.h>
#include<time.h>
#include<stdlib.h>

using namespace std;

void romb(int a);
int addRightDigit(int a, int b);
int addLeft(int k, int r);
int sumArr(int a, int b);
int digitN(int k, int n);
int fact(int a);
int orta3(int a, int b, int c);
int ekub(int a, int b);
int ekub2(int a, int b);
int ekuk(int a, int b);
void display(int a, int n);
void talla(int a);
int check(string s1, string s2);
bool checkPass(string pass);
int top(string s1, string s2);
int sum(int, int, int[]);
bool isPali(string str);

int main()
{

return 0;
}


























bool isPali(string str){
    int right = str.length()-1;
    int left = 0;
    while(right>left){
        if(str[left]!=str[right]){
            return false;
        }
        left++;
        right--;
    }
    return true;

}





int sum(int k, int l, int arr[]){
    int sum = 0;
    for(int i = k+1; i < l; i++){
        sum+=arr[i];
    }
    return sum;


}




int top(string s1, string s2){
    int sum = 0;
int ind = s1.find(s2);
while(0<=ind&&ind<s1.length()){
    sum++;
    ind = s1.find(s2, ind+1);

    }
    return sum                                                                                                      ;
}



bool checkPass(string pass){
    if(pass.length() < 8){
        return false;
    }
    int katta = 0;
    int kichik = 0;
    int raqam = 0;
    int belgi = 0;

    for(int i = 0; i < pass.length();i++){
        if(isalnum(pass[i])){
            if(isupper(pass[i])){
                katta ++;
            }
            else if(islower(pass[i])){
                kichik++;
            }
            else{
                raqam++;
        }
    }
        else if(pass[i]!='.'||pass[i]!='_'){
                belgi++;
            }

    }
    if(katta>0&&kichik>0&&raqam>0&&belgi==0){
        return true;
    }
    return false;
}




int check(string s1, string s2){
    int l = 0;
    int sum = 0;

    for(int i = 0; i < s1.length(); i++){
        if(s1[i]== s2[l]){
            l++;
        }
        else{
            i = i-l+1;
            l = 0;
        }
        if(l==s2.length()){
            sum++;
        }
    }
    return sum;

        }



void talla(int a){
    int d;
    cin >> d;
    if(d == a){
        return;
    }
    talla(a);
}



void display(int a, int n){

    cout << a <<endl;
    if(a==n)return;
    display(a+1, n);
}



int ekuk(int a, int b){
    if(a < b){
        int c = a;
        a = b;
        b = c;
    }
    for(int i = a; i<=a*b; i++){
        if(i % a == 0 && i % b == 0){
            return i;
        }
    }
    return 0;
}




int ekub2(int a, int b){
    while(a!=b){
        if(a > b){
            a = a-b;
        }
        else{
            b = b-a;
        }
    }
    return a;

}



int ekub(int a, int b){
    if(a > b){
        int c = a;
        a = b;
        b = c;
    }
    for(int i = a; i > 0; i--){
        if(b % i == 0&& a % i == 0){
            return i;
        }
    }
    return 0;

}


int fact(int a){
    int kop = 1;
    for(int i = 1; i < a; i++){
        kop*=i;
    }
    return kop;

}


int digitN(int k, int n){
    int xona = log10(k)+1;
    if(n > xona) return - 1;
    n = xona-n;
    for(int i = 0; i < n; i++){
        k/=10;
    }
    int nat = k%10;
    return nat;
}



int sumArr(int a, int b){
    if(a > b){

        return 0;
    }
    int sum = 0;
    for(int i = a+1; i < b; i++){
        sum+=i;
    }
    return sum;

}


int addLeft(int k, int r){
    int xona = log10(k)+1;
    int kop = 1;
    for(int i = 0; i < xona; i++){
        kop*=10;
    }
    int natija = r*kop+k;
    return natija;
}




 int addRightDigit(int a, int b){

    int xona = log10(a)+1;

    int nat = a*pow(10, xona)+ a;
    return nat;

 }






void romb(int a){

for(int i = 1; i <= a; i++){
    for(int j = 1; j <= a+1-i; j++){
        cout << "  ";
    }
    for(int j = 1; j <= i; j++){
        cout << "* ";
    }
    for(int j = 1; j < i; j++){
        cout << "* ";
    }
    cout << endl;

}
a--;
for(int i = 1; i <= a; i++){
    for(int j = 1; j <= i+1; j++){
        cout << "  ";
    }
    for(int j = 1; j <= a+1-i; j++){
        cout << "* ";
    }
    for(int j = 1; j <= a-i; j++){
        cout << "* ";
    }
    cout << endl;
}

}

string salom(string ism, int yosh, float vazn, double boy){
}






