#pragma once

#include "Core.h"
#include "Component.h"
#include <vector>
#include <unordered_map>

namespace Flat
{

template <typename T_COMPONENT>
class ComponentManager
{
public:
    ComponentManager() {}
    virtual ~ComponentManager() {}

    template<typename... T_PARAMS>
    T_COMPONENT* createComponent(T_PARAMS&&... params);

    T_COMPONENT* getComponentById(ComponentId id);

protected:
    std::vector<T_COMPONENT>                        m_instances;
    std::vector<T_COMPONENT>                        m_addedQueue;
    std::vector<T_COMPONENT*>                       m_deleteQueue;
    std::unordered_map<ComponentId, T_COMPONENT>    m_idToComponents;

    friend Component<T_COMPONENT, ComponentManager<T_COMPONENT>>;
};

}