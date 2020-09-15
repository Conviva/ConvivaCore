//
// Copyright (c) 2015 Conviva. All rights reserved.
//

#import "ConvivaLightSession.h"
#import "MonitorStreamerProxy.h"

@interface ConvivaLightSession (Private)

#ifdef AD_MONITOR_CAPABLE
+ (ConvivaLightSession *)sessionWithStreamer:(id)streamer contentInfo:(ConvivaContentInfo *)contentInfo options:(NSDictionary *)options isGlobalSession:(BOOL)isGlobalSession contentSession:(ConvivaLightSession *) contentSession isAd:(BOOL)isAd holdHB: (BOOL) holdHB;
#else
+ (ConvivaLightSession *)sessionWithStreamer:(id)streamer
                                 contentInfo:(ConvivaContentInfo *)contentInfo
                                     options:(NSDictionary *)options
                             isGlobalSession:(BOOL)isGlobalSession;
    
#endif

@end
