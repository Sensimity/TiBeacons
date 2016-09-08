#import "TiModule.h"

@import CoreLocation;
@import CoreBluetooth;

#if __IPHONE_OS_VERSION_MAX_ALLOWED <= __IPHONE_9_3
#define CBManagerState CBCentralManagerState
#define CBManagerStateUnknown CBCentralManagerStateUnknown
#define CBManagerStateResetting CBCentralManagerStateResetting
#define CBManagerStateUnsupported CBCentralManagerStateUnsupported
#define CBManagerStateUnauthorized CBCentralManagerStateUnauthorized
#define CBManagerStatePoweredOff CBCentralManagerStatePoweredOff
#define CBManagerStatePoweredOn CBCentralManagerStatePoweredOn
#endif

@interface OrgBeuckmanTibeaconsModule : TiModule <CLLocationManagerDelegate, CBPeripheralManagerDelegate, CBCentralManagerDelegate>
{
    CBPeripheralManager *peripheralManager;
    CLBeaconRegion *beaconRegion;
    
    NSMutableDictionary *beaconProximities;
    CLLocationManager *_locationManager;
    CBCentralManager *bluetoothManager;
}

@end
