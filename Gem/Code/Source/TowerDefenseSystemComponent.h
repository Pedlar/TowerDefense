
#pragma once

#include <AzCore/Component/Component.h>

#include <TowerDefense/TowerDefenseBus.h>

namespace TowerDefense
{
    class TowerDefenseSystemComponent
        : public AZ::Component
        , protected TowerDefenseRequestBus::Handler
    {
    public:
        AZ_COMPONENT(TowerDefenseSystemComponent, "{8657BEAB-54B9-465D-AD52-B4459081AB55}");

        static void Reflect(AZ::ReflectContext* context);

        static void GetProvidedServices(AZ::ComponentDescriptor::DependencyArrayType& provided);
        static void GetIncompatibleServices(AZ::ComponentDescriptor::DependencyArrayType& incompatible);
        static void GetRequiredServices(AZ::ComponentDescriptor::DependencyArrayType& required);
        static void GetDependentServices(AZ::ComponentDescriptor::DependencyArrayType& dependent);

    protected:
        ////////////////////////////////////////////////////////////////////////
        // TowerDefenseRequestBus interface implementation

        ////////////////////////////////////////////////////////////////////////

        ////////////////////////////////////////////////////////////////////////
        // AZ::Component interface implementation
        void Init() override;
        void Activate() override;
        void Deactivate() override;
        ////////////////////////////////////////////////////////////////////////
    };
}
