/*
This program is part of Netmodeler, a library for graph and network
modeling and simulation.
Copyright (C) 2005  P. Oscar Boykin <boykin@pobox.com>, University of Florida

This program is free software; you can redistribute it and/or
modify it under the terms of the GNU General Public License
as published by the Free Software Foundation; either version 2
of the License, or (at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
*/

#ifndef starsky__uniformdrv_h
#define starsky__uniformdrv_h

#include <random.h>
#include <discreterandvar.h>

#include <exception>

namespace Starsky {

  /**
   * A Uniform discrete random variable
   */
	
class UniformDRV : public DiscreteRandVar {

    public:
	/**
	 * @param r the Random to use
	 * @param max the maximum value this can take.
	 * @param min the minimum value this can take
	 */
	UniformDRV(Random& r, int min, int max);
	/**
	 * @return the probability that the distribution takes a particular value
	 */
        double getProbabilityOf(int degree) const;
	/**
	 * @return a sample from this random variable
	 */
	int sample();
	/**
	 * @return minimum value with p > 0
	 */
	int getMin() const;
	/**
	 * @return maximum value with p > 0
	 */
	int getMax() const;
    protected:
	Random& _rand;
	int _min;
	int _max;
	
};
	
}

#endif
