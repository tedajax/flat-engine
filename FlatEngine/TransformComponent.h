#pragma once

#include "Component.h"
#include "Math.h"

namespace Flat
{

struct TransformComponent : public Component<TransformComponent, TransformComponentManager>
{
    Transform m_transform;
};

}