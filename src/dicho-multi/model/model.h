/*
 * model.h
 *
 *  Created on: 13/04/2016
 *      Author: Milder
 */

#ifndef DICHOMULTI_MODEL_MODEL_H_
#define DICHOMULTI_MODEL_MODEL_H_

#include <vector>
#include <cmath>
#include <cassert>

#include "../../util/constants.h"

//including optimization files from dlib library
#include <dlib/optimization.h>

namespace irtpp {

namespace dichomulti {

typedef dlib::matrix<double,0,1> item_parameter; /**< data type from dlib library*/

/**
 * Model class
 * It represents what is the model approach to use
 * Might be 1PL, 2PL, 3PL.
 */
class model {

public:
	int parameters; /**< Number of parameters of the model*/

	/**
	 * Default constructor for model class. It's empty, don't use.
	 */
	model();

	/**
	 * Constructor that receives 1, 2 or 3. Depending on the model to use.
	 * @param parameters number of parameters according model to use.
	 */
	model(int);

	/**
	 * Destructor for model class.
	 */
	virtual ~model();

	/**
	 * Function to calculate the probability according model to use and
	 * equation 13 from IRT_engineers document.
	 * @param theta a std vector double template with theta values.
	 * @param parameters a typedef item_parameter to extract eta values.
	 * @return the probability given the model. It can be 1PL, 2PL or 3PL
	 */
	double P(std::vector<double>&, const item_parameter&);
};

}

} /* namespace irtpp */

#endif /* MODEL_MODEL_H_ */
