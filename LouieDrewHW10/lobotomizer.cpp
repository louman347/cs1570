//Programmer: LOUIE BERTONCIN     Date: 11/30/2014
//File: lobotomizer.cpp           Class: CS 1570, Section D
//Purpose: Body file for lobotomizer class

#include <cstdlib>
#include <fstream>
#include "lobotomizer.h"

Lobotomizer::Lobotomizer()
{
  m_num_uses = 0;
  m_cost_per_use = LOB_COST_PER_USE;
}

void Lobotomizer::charge_patient(Patient& patient) const
{
  patient.pay_out(m_cost_per_use);

  return;
}

void Lobotomizer::apply(Patient& patient)
{
  patient.modify_mental_health(LOB_MENTAL_HEALTH_MODIFIER);
  patient.modify_physical_health(LOB_PHYSICAL_HEALTH_MODIFIER);
  if(rand()%100 < LOB_KILL_BRAIN_CHANCE)
    patient.modify_mental_health(-patient.get_mental_health());
  if(rand()%100 < LOB_RENAME_CHANCE)
    patient.add_to_name(get_random_name());

  m_num_uses++;

  return;
}

string Lobotomizer::get_random_name() const
{
  ifstream in;
  string aName;
  int count = 0, pickNum;
  in.open(NAMES_FILE.c_str());
  getline(in, aName);
  while(!in.eof())
  {
    count++;
    in.ignore(500, '"');
    getline(in, aName);
  }
  in.close();
  pickNum = rand()%(count+1);
  in.open(NAMES_FILE.c_str());
  for(int i = 0; i <= pickNum; i++)
  {
    getline(in, aName);
  }
  in.close();

  return aName;
}

ostream& operator << (ostream& out, const Lobotomizer& lobot)
{
  out << "Lobotomizer(Cost Per Use: " << lobot.m_cost_per_use << ", Uses: " <<
    lobot.m_num_uses << ")";

  return out;
}
