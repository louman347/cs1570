//Programmer: LOUIE BERTONCIN     Date: 11/30/2014
//File: organ_donor.cpp           Class: CS 1570, Section D
//Purpose: Body file for organ_donor class

#include <cstdlib>
#include "organ_donor.h"

Organ_Donor::Organ_Donor()
{
  m_num_uses = 0;
  m_cost_per_use = OD_COST_PER_USE;
}

void Organ_Donor::charge_patient(Patient& patient) const
{
  patient.pay_out(m_cost_per_use);

  return;
}

void Organ_Donor::apply(Patient& patient)
{
  patient.modify_mental_health(OD_MENTAL_HEALTH_MODIFIER);
  patient.modify_physical_health(rand()%(OD_PHYSICAL_HEALTH_MOD_MAX + 1 -
    OD_PHYSICAL_HEALTH_MOD_MIN) + OD_PHYSICAL_HEALTH_MOD_MIN);
  if(rand()%100 < OD_KILL_CHANCE)
    patient.modify_physical_health(-patient.get_physical_health());
  patient.modify_weight(OD_WEIGHT_MODIFIER);

  m_num_uses++;

  return;
}

ostream& operator << (ostream& out, const Organ_Donor& donor)
{
  out << "Organ Donor(Cost Per Use: " << donor.m_cost_per_use << ", Uses: " <<
    donor.m_num_uses << ")";

  return out;
}
