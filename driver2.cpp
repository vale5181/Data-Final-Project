#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include "project.hpp"

using namespace std;

int main(int argc, char* argv[])
{
  HashTable ht (15);
  ifstream fp (argv[1]);
  string s;
  string groupN;
  string memberN;
  string position;
  string bday;
  string height;
  string fact;
  if (fp.is_open())
  {
    while (getline(fp,s))
    {

      stringstream ss(s);
      getline(ss, groupN, ',');
      getline(ss, memberN, ',');
      getline(ss, position, ',');
      getline(ss, bday, ',');
      getline(ss, height, ',');
      getline(ss, fact, ',');
      ht.insertGroup(groupN, memberN, position, bday, height, fact);
    }


  }

  else
  {
    cout << "File does not exist." << endl;
    return 0;
  }
  cout << "---------------------------------------------------------------" << endl;
  ht.printMembers();
  ht.printTable();

}