//
//  ConvivaLightSession+Ad.h
//
//  Copyright © 2018 Conviva. All rights reserved.
//
#import "ConvivaPlayerState.h"

@interface ConvivaLightSession ()

/// @brief Set the ad player state
- (void) setAdPlayerState: (ConvivaPlayerState*) playerState;

/// @brief Set the ad player name
- (void) setAdPlayerName: (NSString *) playerName;

/// @brief Set the ad player version
- (void) setAdPlayerVersion: (NSString *) playerVersion;

/// @brief Set the ad player width & height
- (void) setAdVideoResolutionWidth: (NSInteger) width andHeight: (NSInteger) height;

/// @brief Set the current ad player instance buffer length  in milliseconds
- (void) setAdPlayHeadTime: (NSInteger) pht;

/// @brief Set the current ad player instance buffer length  in milliseconds
- (void) setAdBufferLength: (NSInteger) bufferLength;

@end
