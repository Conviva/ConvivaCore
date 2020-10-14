//
//  ConvivaConnectionType.h
//  iOSClient
//
//  Created by Senthilkumar Powthiram on 02/06/16.
//  Copyright © 2016 Conviva. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MonitorStreamerProxy.h"

@interface ConvivaConnectionType : NSObject

+ (ConvivaConnectionType *)sharedInstance;
- (void)updateInterfaceWithReachability;
- (Boolean)isWifiOrEthernetConnAvailable;
- (void)cleanup;

@end
