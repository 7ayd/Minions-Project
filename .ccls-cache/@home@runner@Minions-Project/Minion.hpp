#ifndef MINION_H
#define MINION_H

#include <iostream>
#include <string>
using namespace std;

class Minion{
  string name;
  double height;
  int bananasOwned;
  int eyes;
  static int minionCount;

public:
  Minion();
  Minion(int _eyes, double _height, int _nanas, string _name);
  double getHeight() const;
  string getName() const; 
  static void printMinionCount();
  friend bool operator<(const Minion &a, const Minion &b);
  friend bool operator>(const Minion &a, const Minion &b);
  Minion operator++();
  Minion operator++(int);
  friend ostream &operator<<(ostream &out, const Minion &M);
  friend istream &operator>>(istream &in, Minion &r);
};

#endif