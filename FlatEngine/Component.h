#pragma once

#include "Core.h"
#include "Entity.h"
#include <vector>

namespace Flat
{

typedef u64 ComponentId;

template<typename T_COMPONENT, typename T_MANAGER>
class ComponentCommonData
{
public:
    T_MANAGER* getManager() { return m_manager; }

protected:
    T_MANAGER* m_manager;

    template<typename T_ANY_COMPONENT, typename T_ANY_MANAGER> friend class Component;
    template<typename T_ANY_COMPONENT> friend class ComponentManager;
};

template<typename T_SPECIFIC_TYPE, typename T_MANAGER>
class Component
{
public:
    typedef T_MANAGER ManagerType;

    inline ManagerType* getManager() { return m_commonData->getManager(); }

    inline ComponentId getComponentId() { return m_componentId; }

protected:
    ComponentCommonData<T_SPECIFIC_TYPE, T_MANAGER>* m_commonData;

    ComponentId m_componentId;

    template <typename T_COMPONENT> friend class ComponentManager;
};

}