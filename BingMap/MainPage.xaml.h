//
// MainPage.xaml.h
// Declaration of the MainPage class.
//

#pragma once

#include "MainPage.g.h"
#include "mapcontroller.h"

using namespace Windows::Devices::Geolocation;

namespace BingMap
{
    [Windows::Foundation::Metadata::WebHostHidden]
	public ref class MainPage sealed
	{
	public:
		MainPage();

        void MapLoaded(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
        void MapClick(Windows::UI::Xaml::Controls::Maps::MapControl^ sender, Windows::UI::Xaml::Controls::Maps::MapInputEventArgs^ args);
    private:
        MapController^ mapController;

	};
}
