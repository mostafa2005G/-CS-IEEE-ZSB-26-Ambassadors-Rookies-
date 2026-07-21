#include <iostream>
using namespace std;
int main()
{

const int size = 5;

int number[size] = {10,2,7,5,3};
number[0] = 9;
number[2] *= 3;
number[4]++;
cout <<number[4];

return 0 ;

}