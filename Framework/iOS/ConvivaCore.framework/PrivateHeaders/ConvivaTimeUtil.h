//
// Copyright (c) 2015 Conviva. All rights reserved.
//
#import <Foundation/Foundation.h>


@interface ConvivaTimeUtil : NSObject

+ (NSTimeInterval)getEpochTimeMs;

+ (NSTimeInterval)getEpochTimeSec;

+ (NSTimeInterval)timeBetweenTimeEarlier:(NSTimeInterval)timeEarlier andTimeLater:(NSTimeInterval)timeLater;

+ (void)TESTAPI_setNextEpochTimeMs:(NSTimeInterval)epochTimeMs;

@end
