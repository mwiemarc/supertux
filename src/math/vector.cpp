//  SuperTux
//  Copyright (C) 2006 Matthias Braun <matze@braunis.de>
//
//  This program is free software: you can redistribute it and/or modify
//  it under the terms of the GNU General Public License as published by
//  the Free Software Foundation, either version 3 of the License, or
//  (at your option) any later version.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU General Public License for more details.
//
//  You should have received a copy of the GNU General Public License
//  along with this program.  If not, see <http://www.gnu.org/licenses/>.

#include <math.h>
#include <iostream>

#include "math/vector.hpp"

Vector Vector::unit() const
{
  return *this / norm();
}

float Vector::norm() const
{
  return sqrtf(x*x + y*y);
}

std::ostream& operator<<(std::ostream& out, const Vector& vector)
{
  out << "Vector(" << vector.x << ", " << vector.y << ')';
  return out;
}

/* EOF */
