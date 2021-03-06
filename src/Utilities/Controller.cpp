//
// Created by qiayuan on 2/17/20.
//

#include <Utilities/Controller.h>

void Controller::update(const double *qd) {
  for (int wheelID = 0; wheelID < 4; ++wheelID) {
    torque_out_[wheelID] = .5 * (qd_des_ - qd[wheelID]);
  }
}
void Controller::setSpeed(double speed) {
  qd_des_ = -speed;
}