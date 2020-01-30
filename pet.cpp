#include "pet.h" //include .h file to read first

Pet::Pet(){ //default constructor
  m_name = "NoName";
  m_age = 0;
  m_type = "NoType";
  m_weight = 0;
}

//overloaded constructor
Pet::Pet(string name, int age, string type, double weight){
  m_name = name;
  m_age = age;
  m_type = type;
  m_weight = weight;
}

//print function to write output to screen
void Pet::Print(){
  cout<< "Name: " << m_name << endl;
  cout<< "Age: " << m_age << endl;
  cout<< "Type: " << m_type << endl;
  cout<< "Weight: " << m_weight << endl;

}

//getters
string Pet::getName(){
  return m_name;
}

int Pet::getAge(){
  return m_age;
}

string Pet::getType(){
  return m_type;
}

double Pet::getWeight(){
  return m_weight;
}

//setters

void Pet::setName(string name){
  m_name = name;
}

void Pet::setAge(int age){
  m_age = age;
}

void Pet::setType(string type){
  m_type = type;
}

void Pet::setWeight(double weight){
  m_weight = weight;
}
