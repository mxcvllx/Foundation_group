#include <iostream>

using namespace std;

int main()
{




int n;
cin >> n;
if(n % 2 == 0){
    cout << "kiritgan soningiz juft, soningizni kvadrati - "<<  n*n << " ga teng";
}
else{
    cout << "sonigiz toq son";
}





















/**
int arr[6] = {2, 4, 5, 2, 5, 3};
///int arr[6] = {3, 4, 5, 6, 6, 4};
///int arr[6] = {4, 5, 6, 7, 5, 7};



int MaxNumber = arr[0];
int MinNumber = arr[0];


for(int i = 0; i < 6; i++){
       MinNumber = min(MinNumber, arr[i]);
}
 cout << MinNumber << "," << arr[1];

*/






/**
int sum = 0;
int arr[4][3] = {
    {4, 5, 6},
    {3, 5, 3},
    {3, 5, 7},
    {9, 5, 3},

};
for(int i = 0; i < 4; i++){
    int maxNumber = arr[i][0];
    for(int j = 0; j < 3; j++){
        maxNumber = max(maxNumber, arr[i][j]);

    }
    sum += maxNumber;
}
    cout << sum;



*/

/**

int a, b, c = 0, sum =0;
  cout << "son kiritng: ";
  cin >> a;
  c = a / 2;
  for(b = 2; b <= c; b++)
  {
      if(a % b == 0)
      {
          cout << "tub son emas" << endl;
          sum = 1;
          break;
      }
  }
  if (sum == 0)
      cout << "tub son."<<endl;
*/


/**
int arr[5] = {4, 2, 4, 10, 5};


int MaxNumber = arr[0];
int MinNumber = arr[0];

for(int i = 0; i < 5; i++){
    MaxNumber = max(MaxNumber, arr[i]);
}
for(int i = 0; i < 5; i++){
    MinNumber = min(MinNumber, arr[i]);
}
cout << MaxNumber / MinNumber << endl;
*/





    return 0;
}




















