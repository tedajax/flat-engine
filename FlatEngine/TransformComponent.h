#pragma once

#include "Component.h"
#include "Math.h"

namespace Flat
{

class TransformComponentManager;

class TransformComponent : public Component<TransformComponent, TransformComponentManager>
{
public:
    TransformComponent() 
        : Component<TransformComponent, TransformComponentManager>() {}

    TransformComponent(const Vector2& position, const f32 rotation)
        : Component<TransformComponent, TransformComponentManager>() 
    {
        m_transform.m_position = position;
        m_transform.m_rotation = rotation;
        m_transform.m_scale.x = 1.f;
        m_transform.m_scale.y = 1.f;
    }

private:
    Transform m_transform;
};

}