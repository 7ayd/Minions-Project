#include <iostream>
#include <fstream>
#include"Minion.hpp"
#include"Minion.cpp"
using namespace std;

int main() {
  fstream myfile; 
  myfile.open("minions.txt", ios::in);
  if(!myfile.is_open()){
    cout << "File not found";
    return 0; 
  }
  // while(!myfile.eof()){
  string name;
  double height;
  int eyes;
  int bananas; 
  myfile >> name; 
  myfile >> height;
  myfile >> eyes;
  myfile >> bananas; 
  const Minion minion1 = Minion(eyes,height,bananas,name);

  string name2;
  double height2;
  int eyes2;
  int bananas2; 
  myfile >> name; 
  myfile >> height;
  myfile >> eyes;
  myfile >> bananas; 
  Minion minion2 = Minion(eyes2,height2,bananas2,name2);
  
  string name3;
  double height3;
  int eyes3;
  int bananas3; 
  myfile >> name; 
  myfile >> height;
  myfile >> eyes;
  myfile >> bananas; 
  Minion minion3 = Minion(eyes3,height3,bananas3,name3);
  

  //Find the taller minion
if (minion1 > minion2) {
   cout << minion1.getName() << " is taller than " << minion2.getName();
} 
if (minion2 < minion3) {
   cout << minion3.getName() << " is taller than " << minion2.getName();
}
cout << endl << endl;
}