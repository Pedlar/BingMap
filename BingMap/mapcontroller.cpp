
#include "pch.h"
#include "mapcontroller.h"

using namespace BingMap;

using namespace Windows::Devices::Geolocation;
using namespace Windows::UI::Xaml::Controls::Maps;

void MapController::SetMapControl(MapControl^ mapControl) {
    CurrentMap = mapControl;
}

void MapController::SetSceneToAustin() {
    CurrentMap->Center = AustinLatLong;

    MapScene^ mapScene = MapScene::CreateFromLocationAndRadius(CurrentMap->Center, RADIUS_METERS);
    CurrentMap->TrySetSceneAsync(mapScene);
}

void MapController::SetSceneToEugeneFriendly() {
    CurrentMap->Center = EugeneFriendlyLatLong;

    MapScene^ mapScene = MapScene::CreateFromLocationAndRadius(CurrentMap->Center, RADIUS_METERS);
    CurrentMap->TrySetSceneAsync(mapScene);
}