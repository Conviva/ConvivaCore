//
//  IMonitorNotifier.h
//  iOSClient
//
//  Created by Ali Lakhia on 1/22/14.
//  Copyright (c) 2014 Conviva. All rights reserved.
//
#import "ConvivaUtils.h"
@class ConvivaStreamerError;

@interface IMonitorNotifier : NSObject

/// @brief Signal a change in the bitrate, resource or CDN
///
/// \param bitrateKbps New bitrate
/// \param cdn New CDN
/// \param resource New resource
/// \note Use -1 or null to keep previous value
- (void)setStream:(int)bitrateKbps cdn:(NSString *)cdn resource:(NSString *)resource;

/// @brief Signal change in average bitrate
///
/// \param avgbitrateKbps New bitrate
- (void)setAverageBitrate:(int)avgbitrateKbps;


/// @brief Signal change in playing state
///
/// \param newState the new playing state (one of the constants in PlayerStates)
- (void)setPlayingState:(int)newState;

/// @brief Signal an error
///
/// \param err Error Message
- (void)onError:(ConvivaStreamerError *)err;

/// @brief Signal an error
///
/// \param videoWidth Video Width
/// \param videoHeight Video Height
- (void)setVideoDimensionChages:(NSInteger)videoWidth videoHeight:(NSInteger)videoHeight;

/// @brief Signal an player seeking
-(BOOL)isPlayerSeeking;

-(void)setSeekEvent:(SeekActionType)type seekPosition:(NSInteger)seekToPosition;

/// @brief sets the module version
///
/// \param moduleVersion module version
-(void)setModuleVersion:(NSString*)moduleVersion;

/// @brief sets the module name
///
/// \param moduleName module version
-(void)setModuleName:(NSString*)moduleName;
@end
