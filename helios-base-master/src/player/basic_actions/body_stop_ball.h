// -*-c++-*-

/*!
  \file body_stop_ball.h
  \brief kick the ball to keep a current positional relation.
*/

/*
 *Copyright:

 Copyright (C) Hidehisa AKIYAMA

 This code is free software; you can redistribute it and/or
 modify it under the terms of the GNU Lesser General Public
 License as published by the Free Software Foundation; either
 version 3 of the License, or (at your option) any later version.

 This library is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 Lesser General Public License for more details.

 You should have received a copy of the GNU Lesser General Public
 License along with this library; if not, write to the Free Software
 Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA

 *EndCopyright:
 */

/////////////////////////////////////////////////////////////////////

#ifndef RCSC_ACTION_BODY_STOP_BALL_H
#define RCSC_ACTION_BODY_STOP_BALL_H

#include <rcsc/player/soccer_action.h>

namespace rcsc {
class AngleDeg;
}

/*!
  \class Body_StopBall
  \brief stop the ball, as possible as.
*/
class Body_StopBall
    : public rcsc::BodyAction {
private:

public:
    /*!
      \brief accessible from global.
    */
    Body_StopBall()
      { }

    /*!
      \brief execute action
      \param agent pointer to the agent itself
      \return true if action is performed
    */
    bool execute( rcsc::PlayerAgent * agent );

private:

    void calcAccel( rcsc::PlayerAgent * agent,
                    double * accel_radius,
                    rcsc::AngleDeg * accel_angle );
};

#endif
