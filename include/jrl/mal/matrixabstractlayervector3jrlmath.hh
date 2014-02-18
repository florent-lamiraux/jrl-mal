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
 * of a 3D vector class of double.
 *
 */

#ifndef MATRIXABSTRACTLAYER_JRLMATH_VECTOR3_H
# define MATRIXABSTRACTLAYER_JRLMATH_VECTOR3_H
# include <cmath>
# include <Eigen/Core>

typedef Eigen::Matrix<double, 3, 1> vector3d;

# define MAL_S3_VECTOR(name,type)		\
  Eigen::Matrix<type, 3, 1> name

# define MAL_S3_VECTOR_TYPE(type) Eigen::Matrix<type, 3, 1>

# define MAL_S3_VECTOR_SIZE(name)		\
  3

# define MAL_S3_VECTOR_FILL(name,value)		\
  (name).setConstant (value)

# define MAL_S3_VECTOR_CLEAR(name)		\
  (name).setZero ()

# define MAL_S3_VECTOR_NORM(name)		\
  name.norm()

# define MAL_S3_VECTOR_CROSS_PRODUCT(res,v1,v2)	\
  (res) = (v1).cross (v2);

# define MAL_S3_RET_VECTOR_DATABLOCK(name)	\
  "Do not use this macros"

# define MAL_S3_VECTOR_ACCESS(name, i)  	\
  (name)[i]

#endif /* MATRIXABSTRACTLAYER_JRLMATH_VECTOR3_H*/
