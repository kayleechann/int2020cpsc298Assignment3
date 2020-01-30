#include "pet.h" //include .h file
#include <iostream>
using namespace std;

int main(int argc, char**argv){ //main method

  Pet *pet1 = new Pet(); //pet1 calling default constructor
  Pet *pet2 = new Pet("luna", 2, "cat", 15); //creating object of class Pet
  Pet *pet3 = new Pet("rocket", 4, "dog", 30); //creating another object of class Pet

  pet1->Print(); //print pet to screen
  cout<< endl;

  pet2->Print();
  cout << endl;
  pet2->setName("Dakota"); //set name to Dakota
  pet2->Print();
  cout << endl;

  pet3->Print();
  pet3->setType("zebra"); //set type as zebra
  cout << endl;
  pet3->Print();
  cout << endl;

  //delete objects to frees up memory
  delete pet1;
  delete pet2;
  delete pet3;

  return 0;
}
