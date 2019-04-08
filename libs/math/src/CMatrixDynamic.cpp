/* +------------------------------------------------------------------------+
|                     Mobile Robot Programming Toolkit (MRPT)            |
|                          https://www.mrpt.org/                         |
|                                                                        |
| Copyright (c) 2005-2019, Individual contributors, see AUTHORS file     |
| See: https://www.mrpt.org/Authors - All rights reserved.               |
| Released under BSD License. See: https://www.mrpt.org/License          |
+------------------------------------------------------------------------+ */

#include "math-precomp.h"  // Precompiled headers

#include <mrpt/math/CMatrixDynamic.h>
#include <Eigen/Dense>

using namespace mrpt::math;

template <typename T>
template <typename T2>
CMatrixDynamic<T2> CMatrixDynamic<T>::cast() const
{
	CMatrixDynamic<T2> r(rows(), cols());
	r.asEigen() = asEigen().template cast<T2>();
	return r;
}

// Template instantiation:
#define DO_MATDYN_INSTANTIATION(T_) \
	template class mrpt::math::CMatrixDynamic<T_>;

DO_MATDYN_INSTANTIATION(float)
DO_MATDYN_INSTANTIATION(double)