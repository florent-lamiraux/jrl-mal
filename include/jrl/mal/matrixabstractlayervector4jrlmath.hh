/*
 * Copyright 2007, 2008, 2009, 2010,
 *
 * Francois Keith,
 * Florent Lamiraux,
 * Olivier Stasse,
 *
 * CNRS/AIST
 *
 * This file is part of MatrixAbstractLayer.
 * MatrixAbstractLayer is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * MatrixAbstractLayer is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 * You should have received a copy of the GNU Lesser General Public License
 * along with MatrixAbstractLayer.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

/*! This is a very fast and simple implementation
 * of a 4D vector class of double.
 *
 * 01/02/2007
 *
 * (c) Olivier Stasse and Florent Lamiraux, JRL, CNRS-AIST, ISRI, 2007
 */

#ifndef MATRIXABSTRACTLAYER_JRLMATH_VECTOR4_H
# define MATRIXABSTRACTLAYER_JRLMATH_VECTOR4_H

# include <Eigen/Core>

typedef Eigen::Matrix<double, 4, 1> vector4d;

#define MAL_S4_VECTOR(name,type)		\
  Eigen::Matrix<type, 4, 1> name

#define MAL_S4_VECTOR_TYPE(name)		\
  Eigen::Matrix<type, 4, 1>

#define MAL_S4_VECTOR_SIZE(name)		\
  4

#define MAL_S4_VECTOR_FILL(name,value)		\
  (name).setConstant (value)

#define MAL_S4_VECTOR_NORM(name)		\
  (name).norm()

#define MAL_S4_RET_VECTOR_DATABLOCK(name)	\
  "Do not use this macros"

#define MAL_S4_VECTOR_ACCESS(name, i)  		\
  (name) [i]

# endif /* MATRIXABSTRACTLAYER_JRLMATH_VECTOR3_H */
