#pragma once

#ifndef FLATENGINE_MATH_H
#error Only Math.h should be directly included.
#endif

#include "Types.h"
#include "Vector2.h"

namespace Flat
{

struct Transform
{
    Vector2 m_position;
    Vector2 m_scale;
    f32 m_rotation;
};

}