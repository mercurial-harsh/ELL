////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Project:  Embedded Learning Library (ELL)
//  File:     DataVector.cpp (data)
//  Authors:  Ofer Dekel
//
////////////////////////////////////////////////////////////////////////////////////////////////////

#include "DataVector.h"

namespace ell
{
namespace data
{
    void operator+=(math::RowVectorReference<double> vector, const IDataVector& dataVector)
    {
        dataVector.AddTo(vector);
    }
} // namespace data
} // namespace ell