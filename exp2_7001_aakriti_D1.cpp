#include <iostream>
using namespace std;
int main (){
	 int num ,count = 0;


	 cout<< "Input the number " << endl;
	 cin>> num ;

	 int sum = 0;
    cout << "Expand: ";
    for (int i = 1; i <= num; ++i) {
        int digit_sum = 0;
        for (int j = 1; j <= i; ++j) {
            digit_sum += j;
            cout << j;
            if (j < i) {
                cout << "+";
            }
        }
        cout << " ";
        sum += digit_sum;
}
	cout <<endl<< "sum of digits " << sum;

return 0;
}
