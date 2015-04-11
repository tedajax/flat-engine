#pragma once

#include "Core.h"

namespace Flat
{

struct Entity
{
    const i32 cInvalidId = 0;

    i32     m_id = cInvalidId;
};

const Entity cDefaultEntity;

}