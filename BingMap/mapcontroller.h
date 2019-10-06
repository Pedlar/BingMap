
#pragma once

constexpr auto RADIUS_METERS = 9001;

namespace BingMap {
    public ref class MapController sealed {
    public:
        void SetMapControl(Windows::UI::Xaml::Controls::Maps::MapControl^ mapControl);

        void SetSceneToAustin();
        void SetSceneToEugeneFriendly();
    private:
        Windows::UI::Xaml::Controls::Maps::MapControl^ CurrentMap;
        Windows::Devices::Geolocation::Geopoint^ AustinLatLong = ref new Windows::Devices::Geolocation::Geopoint({ 30.2642, -97.7476 });
        Windows::Devices::Geolocation::Geopoint^ EugeneFriendlyLatLong = ref new Windows::Devices::Geolocation::Geopoint({ 44.033, -123.111 });

    };
}