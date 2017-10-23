
#include "StdAfx.h"
#include <platform_impl.h>

#include <AzCore/Memory/SystemAllocator.h>

#include "TowerDefenseSystemComponent.h"

#include <IGem.h>

namespace TowerDefense
{
    class TowerDefenseModule
        : public CryHooksModule
    {
    public:
        AZ_RTTI(TowerDefenseModule, "{644278A9-EBEC-4DA5-909C-7CC8805A9E13}", CryHooksModule);
        AZ_CLASS_ALLOCATOR(TowerDefenseModule, AZ::SystemAllocator, 0);

        TowerDefenseModule()
            : CryHooksModule()
        {
            // Push results of [MyComponent]::CreateDescriptor() into m_descriptors here.
            m_descriptors.insert(m_descriptors.end(), {
                TowerDefenseSystemComponent::CreateDescriptor(),
            });
        }

        /**
         * Add required SystemComponents to the SystemEntity.
         */
        AZ::ComponentTypeList GetRequiredSystemComponents() const override
        {
            return AZ::ComponentTypeList{
                azrtti_typeid<TowerDefenseSystemComponent>(),
            };
        }
    };
}

// DO NOT MODIFY THIS LINE UNLESS YOU RENAME THE GEM
// The first parameter should be GemName_GemIdLower
// The second should be the fully qualified name of the class above
AZ_DECLARE_MODULE_CLASS(TowerDefense_4c1b2a02e8bf44b4b90dd71551bafe95, TowerDefense::TowerDefenseModule)
