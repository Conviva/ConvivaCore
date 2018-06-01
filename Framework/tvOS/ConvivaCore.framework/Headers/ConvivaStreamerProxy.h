//
//  ConvivaStreamerProxy.h
//  iOSClient
//
//  Created by Saiguang Che on 12/5/11.
//  Copyright (c) 2011 Conviva. All rights reserved.
//

#import "IMonitorNotifier.h"
#ifdef AD_MONITOR_CAPABLE
#import "ConvivaAdProtocol.h"
#endif

// Session flags
#define SFLAG_VIDEO 1
#define SFLAG_QUALITY_METRICS 2
#define SFLAG_BITRATE_METRICS 4
// #define SFLAG_PRECISION 8 // Deprecated, was used for Precision Lite.
#define SFLAG_BITRATE_EXTERNAL 16
#define SFLAG_PRECISION_VIDEO 32
#define SFLAG_OFFLINE_VIDEO 64

@class ConvivaStreamerError;

#ifdef AD_MONITOR_CAPABLE
@interface ConvivaStreamerProxy : NSObject <ConvivaAdProtocol>
#else
@interface ConvivaStreamerProxy : NSObject
#endif

// MonitorStreamerProxy registers itself as an observer for below properties.
@property(copy, nonatomic) NSString *streamUrl; // The initial stream URL.
@property(assign, nonatomic) int currentFps;
@property(assign, nonatomic) int playerEncodedFps;
@property(assign, nonatomic) NSInteger contentLengthSec;
@property(assign, nonatomic) int64_t playheadTimeMs; // -1 if unavailable.
@property(assign, nonatomic) int64_t bufferLengthMs; // -1 if unavailable.
@property(copy, nonatomic) NSString *streamerFramework;
@property(readonly, nonatomic) NSString *latestStreamUrl; // The latest stream URL.
@property(readonly, nonatomic) IMonitorNotifier *notifier;

// ADDED NEW VARIABLE FOR VERSION OF STREAMER
@property(copy, nonatomic) NSString *streamerFrameworkVersion;

- (void)setMonitoringNotifier:(IMonitorNotifier *)monitor;
- (void)cleanup;
- (void)updateCurrentPlayerState;

@end

// An instance of ConvivaStreamError should be passed to
// errorCallback with error message and error level when
// an error happens on a stream.

@interface ConvivaStreamerError : NSObject

@property(copy, nonatomic) NSString *errorMsg;
@property(assign, nonatomic) BOOL isFatal;

- (instancetype)init NS_UNAVAILABLE;
- (instancetype)initWithErrorMsg:(NSString *)msg isFatal:(BOOL)isFatal NS_DESIGNATED_INITIALIZER;

@end
