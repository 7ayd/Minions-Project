#ifndef MINION_H
#define MINION_H
#include <iostream>
#include <string>
using namespace std;

class Minion{
private:
  int eyes;
  double height;
  int bananasOwned;
  string name;
  static int minionCount;
public:
  Minion(int _eyes, double _height, int _nanas, string _name);
  Minion();
  int getBananasOwned() const;
  string getName() const;
  static void printMinionCount();
  bool operator <(const Minion& ) const;
  bool operator >(const Minion& ) const;
  Minion& operator++();
  Minion operator++(int);
  friend ostream &operator<<(ostream &output, const Minion&);
};
#endif  //MINION_HPP