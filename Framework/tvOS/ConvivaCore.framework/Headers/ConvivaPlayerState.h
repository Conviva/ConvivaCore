//
//  PlayerState.h
//  iOSClient
//
//  Created by Saiguang Che on 8/14/12.
//  Copyright (c) 2012 Conviva. All rights reserved.
//
#import <Foundation/Foundation.h>

extern const int CONVIVA_STOPPED;
extern const int CONVIVA_PLAYING;
extern const int CONVIVA_BUFFERING;
extern const int CONVIVA_PAUSED;
extern const int CONVIVA_NOTMONITORED;
extern const int CONVIVA_UNKNOWN;

@interface ConvivaPlayerState : NSObject

+ (NSString *)stateString:(int)state;

@end
