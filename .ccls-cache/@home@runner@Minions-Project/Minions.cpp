#include"Minion.h"
int Minion::minionCount;
Minion::Minion() {}
Minion::Minion(int e, double h, int b)
{
   eyeCount = e;
   height = h;
   bananasOwned = b;
   minionCount++;
}
int Minion::getBananasOwned()const
{
   return bananasOwned;
}
void Minion::printMinionCount()
{
   cout << minionCount << " minions created." << endl;
}
bool Minion::operator <(const Minion &m)const
{
   return bananasOwned < m.bananasOwned;
}
bool Minion::operator >(const Minion &m)const
{
   return bananasOwned > m.bananasOwned;
}
Minion Minion::operator++()
{
   Minion temp;
   temp.bananasOwned = ++bananasOwned;
   temp.eyeCount = eyeCount;
   temp.height = height;
   return temp;
}
Minion Minion::operator++(int)
{
   Minion temp;
   temp.bananasOwned = bananasOwned++;
   temp.eyeCount = eyeCount;
   temp.height = height;
   return temp;
}
ostream &operator<<(ostream &output, const Minion &m)
{
   output << "The minion has " << m.eyeCount << " eye(s), " << m.height << " inches tall, and own " << m.bananasOwned << " banana(s)." << endl;
   return output;
}