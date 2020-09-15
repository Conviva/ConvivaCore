//
//  ConvivaStreamerProxyStremerCreator.h
//  iOSClient
//
//  Copyright © 2015 Conviva. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ConvivaStreamerProxy.h"

@interface ConvivaPlayerProxyCreator : NSObject
    
+ (ConvivaStreamerProxy *)streamerProxyFromStreamer:(id)streamer;
#ifdef AD_MONITOR_CAPABLE
+ (BOOL) isCustomStreamer: (id) streamer;
#endif

@end
