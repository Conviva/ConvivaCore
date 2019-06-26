//
//  MonitorStreamerProxy.h
//  iOSClient
//
//  Created by Saiguang Che on 12/5/11.
//  Copyright (c) 2011 Conviva. All rights reserved.
//

#import "ConvivaStreamerProxy.h"
#import "ConvivaEventQueue.h"
#import "ConvivaContentInfo.h"

@interface MonitorStreamerProxy : IMonitorNotifier

@property(nonatomic, readonly) BOOL externalBitrateReporting;

- (instancetype)init NS_UNAVAILABLE;

- (instancetype)initWithStreamerProxy:(id)streamer
                           eventQueue:(ConvivaEventQueue *)eventQueue
                          contentInfo:(ConvivaContentInfo *)cci
                              options:(NSDictionary *)options
                            sessionId:(NSInteger)sessionId
                   sessionStartTimeMs:(NSTimeInterval)startTimeMs NS_DESIGNATED_INITIALIZER;

- (void)adStart;
- (void)adEnd;

- (void)cleanup;

- (void)updateHb:(NSMutableDictionary *)hb;
- (void)updateEvent:(NSMutableDictionary *)event;
- (void)onError:(ConvivaStreamerError *)newError;

- (void)pauseMonitor;
- (void)attachStreamer:(id)streamer;

- (void)setContentLength:(NSInteger)contentLength;
- (void)setBitrate:(int)bitrateKbps;

- (void)setStream:(int)bitrateKbps cdn:(NSString *)cdn resource:(NSString *)resource;

- (ConvivaStreamerProxy *)streamerProxy;


- (void)setVideoWidth:(NSInteger)newVideoWidth;
- (void)setVideoHeight:(NSInteger)newVideoHeight;
//DE-2572 Remove SSID Support since this is a PII
// - (void)setSSID:(NSString*)newSSID;
- (void)setLinkEncryption:(NSString *)newLinkEncryption;
- (void)setSignalStrength:(double)newSignalStrength;
- (void)setConnectionType:(NSString *)newConnectionType external:(Boolean)isExternal;
- (void)setDroppedFramerate:(NSInteger)dfps;

- (void)setRenderedFramerate:(NSInteger)rfps;
//commenting ADID feature, as this code may be reused once the new design is frozen
//- (void)updateADID;

#ifdef AD_MONITOR_CAPABLE
- (void) setAdPlayerState: (int) playerState;
- (void) setAdPlayerName: (NSString *) playerName;
- (void) setAdPlayerVersion: (NSString *) playerVersion;
- (void) setAdVideoResolutionWidth: (NSInteger) width andHeight: (NSInteger) height;
- (void) setAdPlayHeadTime: (NSInteger) pht;
- (void) setAdBufferLength: (NSInteger) bufferLength;
#endif

// Fix for DE-5328
- (BOOL)isUpdateMetadataCalled;

- (void)updateConnectionType;
- (void)updateMetadata:(ConvivaContentInfo*)newcontentInfo;

-(void)makeLocationSampleEvent:(double)latitude longitude:(double)longitude  permissionStatus:(int)permissionStatus;

#ifdef CDN_CAPABLE
-(BOOL)getStreamerAttachStatus;
#endif

@end
