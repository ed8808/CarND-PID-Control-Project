#include "PID.h"
#include <iostream>
#include <vector>


using std::cout;
using std::endl;

/**
 * TODO: Complete the PID class. You may add any additional desired functions.
 */

PID::PID() {}

PID::~PID() {}

void PID::Init(double Kp_, double Ki_, double Kd_) {
  /**
   * TODO: Initialize PID coefficients (and errors, if needed)
   */
  Kp = Kp_;
  Ki = Ki_;
  Kd = Kd_;
  
  p_error = 0;
  i_error = 0;
  d_error = 0;
  
  icte = 0;
  xcte = 0;
}

void PID::UpdateError(double cte) {
  /**
   * TODO: Update PID errors based on cte.
   */
  icte += cte;
  
  p_error = Kp * cte;
  i_error = Ki * icte;
  d_error = Kd * (cte-xcte);
  
  xcte = cte;
}

double PID::TotalError() {
  /**
   * TODO: Calculate and return the total error
   */
  return (p_error + i_error + d_error);  // TODO: Add your total error calc here!
}