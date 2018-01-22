#include <iostream>

using namespace std;

int main () {

  // เขียนโปรแกรมเพื่อรับค่าตัวเลข 5 จำนวน และหาค่าเฉลี่ย
  int n = 0;
  int sum = 0;
  float avg = 0 ;
  for (int i=0; i < 5; i++)
  {
        cin >> n;
        sum += n;
  }

   //cout << sum;
   avg = (float) sum / 5;
   cout << avg << endl;

  return 0;
}
