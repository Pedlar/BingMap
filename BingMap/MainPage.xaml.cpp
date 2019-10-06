//
// MainPage.xaml.cpp
// Implementation of the MainPage class.
//

#include "pch.h"
#include "MainPage.xaml.h"

using namespace BingMap;

using namespace Platform;
using namespace Windows::Devices::Geolocation;
using namespace Windows::Foundation;
using namespace Windows::Foundation::Collections;
using namespace Windows::UI::Xaml;
using namespace Windows::UI::Xaml::Controls;
using namespace Windows::UI::Xaml::Controls::Primitives;
using namespace Windows::UI::Xaml::Data;
using namespace Windows::UI::Xaml::Input;
using namespace Windows::UI::Xaml::Media;
using namespace Windows::UI::Xaml::Navigation;

MainPage::MainPage() {
	InitializeComponent();
    mapController = ref new MapController();
}

void MainPage::MapLoaded(Platform::Object ^ sender, Windows::UI::Xaml::RoutedEventArgs ^ e) {
    mapController->SetMapControl(mMap);
    mapController->SetSceneToAustin();
}

void MainPage::MapClick(Windows::UI::Xaml::Controls::Maps::MapControl ^ sender, Windows::UI::Xaml::Controls::Maps::MapInputEventArgs ^ args) {
    BasicGeoposition tappedGeoPosition = args->Location->Position;
    String^ status = "MapTapped at Latitude:" + tappedGeoPosition.Latitude + ", Longitude: " + tappedGeoPosition.Longitude;
    StatusBlock->Text = status;
}