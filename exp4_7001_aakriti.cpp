#include <iostream>
using namespace std;

class room{
public:
float length,breadth;

void get(){
cout << "length ";
cin >> length;
cout << "breadth: ";
cin >> breadth;
}

float area(){
float area = length * breadth;
return area;
}

float perimeter(){
float per = 2*(length + breadth);
return per;
}

void display(){
cout << "Length of room: " << length << endl;
cout << "Breadth of room: " << breadth << endl;
float a = area();
cout << "Area of room: " << a << endl;
float b = perimeter();
cout << "Perimeter of room: " << b << endl;
cout << "" << endl;
}
};
int main(){
room r1,r2,r3,r4,r5;
cout << " Room 1_" << endl;
r1.get();
cout << "" << endl;
r1.display();
cout << "_For Room 2_" << endl;
r2.get();
cout << "" << endl;
r2.display();
cout << "_For Room 3_" << endl;
r3.get();
cout << "" << endl;
r3.display();
cout << "_For Room 4_" << endl;
r4.get();
cout << "" << endl;
r4.display();
cout << "_For Room 5_" << endl;
r5.get();
cout << "" << endl;
r5.display();
return 0;
}
