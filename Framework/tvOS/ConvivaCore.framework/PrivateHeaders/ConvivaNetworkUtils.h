//
//  ConvivaNetworkUtilss.h
//  Pods
//
//  Created by Sandeep Madineni on 18/06/20.
//

#import <Foundation/Foundation.h>
#import <Network/Network.h>

NS_ASSUME_NONNULL_BEGIN

typedef enum {
    ConvivaNetworkTypeNotConnected = 0,
    ConvivaNetworkTypeWWAN = 1,
    ConvivaNetworkTypeWiFi = 2,
    ConvivaNetworkTypeEthernet = 3
} ConvivaNetworkType;

@interface ConvivaNetworkUtils : NSObject {
    BOOL isMonitoring;
    nw_path_monitor_t monitor;
    nw_path_t currentPath;
}

@property (nonatomic, copy) void (^netStatusChangeHandler)(void);


+(ConvivaNetworkUtils *)sharedInstance;
-(void)startMonioring API_AVAILABLE(ios(12), tvos(12));
-(void)stopMonitoring API_AVAILABLE(ios(12), tvos(12));
-(BOOL)isConnectedToWifiOrEthernet API_AVAILABLE(ios(12), tvos(12));
-(ConvivaNetworkType)currentNetworkType API_AVAILABLE(ios(12), tvos(12));
@end

NS_ASSUME_NONNULL_END
