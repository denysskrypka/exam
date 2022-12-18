#include <iostream>

using namespace std;

int main() {

 int number, divisors_count = 0;

 cout << "Введіть число: ";

 cin >> number;

 for (int i = 1; i <= number; i++) {

   if (number % i == 0) {

     divisors_count++;

   }

 }

 cout << "Кількість дільників: " << divisors_count << endl;

 return 0;

}
