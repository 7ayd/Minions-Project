#include "Minion.hpp"

int Minion::minionCount = 0;

Minion::Minion(){
    name = "";
    height = -1;
    bananasOwned = -1;
    ++minionCount;
}
Minion::Minion(int _eyes, double _height, int _nanas, string _name){
  eyes = _eyes;
  height = _height;
  bananasOwned = _nanas;
  name = _name;
  minionCount++;
}

double Minion::getHeight() const{
    return height;
}
string Minion::getName() const{
  return this->name; 
}
void Minion::printMinionCount(){
    cout << minionCount << " minions created"
         << "\n";
}
bool operator<(const Minion &a, const Minion &b){
    if (a.height < b.height)
        return true;
    return false;
}
bool operator>(const Minion &a, const Minion &b)
{
    if (a.height > b.height)
        return true;
    return false;
}
Minion Minion::operator++(){ //prefix increment operator
    Minion temp;

    temp.name = name;
    temp.height = ++height;
    temp.bananasOwned = bananasOwned;
    Minion::minionCount--;

    return temp;
}
Minion Minion::operator++(int){ 
    Minion temp;

    temp.name = name;
    temp.height = height++;
    temp.bananasOwned = bananasOwned;
    Minion::minionCount--;

    return temp;
}
ostream &operator<<(ostream &out, const Minion &M)
{
    out << "The minion " << M.name << " is " << M.height << " inches tall, and owns " << M.bananasOwned << " banana(s)\n";
    return out;
}
istream &operator>>(istream &in, Minion &r)
{
    in >> r.name >> r.height >> r.bananasOwned;
    return in;
}