/*a constructor is a special member function in c++ which has a same name as that of class , it is used to initialize the member of the class.
constructors do not have any return type . They are of two types default constructor and parametrized constructor.*/

#include<iostream>
using namespace std;
class number{
 public:
 int n;
 int a[100];
 int count = 0;

 number(){
 cout << "Decimal value: ";
 cin >> n;
 }
 void calc(){
 for(int i =0;n>0;i++){
 a[i] = n%2;
 n = n/2;
 count++;
 }

 cout << "Binary  ";
 for(int j = count - 1;j >= 0;j--){
 cout << a[j];
 }
 }
};
int main(){
 number obj;
 obj.calc();
 return 0;
}


