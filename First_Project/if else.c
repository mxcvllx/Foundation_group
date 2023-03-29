#include <stdlib>

using namespace std;

string salom_ber(string name){
    string salom = "salom" + name;
    return salom;

}
int main()
{


    string greeting = salom_ber(" Javlon ");
    cout << greeting;
    return 0;
}
