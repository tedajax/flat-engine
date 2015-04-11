#pragma once

#include "ComponentManager.h"
#include "TransformComponent.h"

namespace Flat
{

class TransformComponentManager : ComponentManager<TransformComponent>
{
public:
    TransformComponentManager() : ComponentManager<TransformComponent>() {}
    ~TransformComponentManager() {}
};

}