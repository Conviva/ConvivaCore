//
// Copyright (c) 2015 Conviva. All rights reserved.
//
#import <Foundation/Foundation.h>


#define CLIENT_ID_DEFAULT_VALUE @"0"

#ifdef AD_MONITOR_CAPABLE
static NSString *const CLIENT_ID_AVAILABLE = @"CLIENT_ID_AVAIL";
#endif

@interface ConvivaUtils : NSObject

/* Cleanup Util */
+ (void)cleanup;

/* Extend Util lifetime. Touchstone Driver requires Util alive between previous
 LivePass instance cleanup and next LivePass instance initilization.
 */
+ (void)keepAlive:(BOOL)yes;

+ (NSString *)getClientId;
+ (void)setClientId:(NSString *)clientId;
+ (void)deleteClientId;

+ (int)randInt;

+ (NSString *)device;
+ (NSString *)osVersion;

+ (BOOL)isOSAtLeastMajorVersion:(NSInteger)majorVersion;

+ (int)generateRandomSessionID;

+ (NSString *)describeError:(NSError *)error;

+ (dispatch_queue_t)sharedQueue;
+ (void)dispatchAsyncToSharedQueue:(dispatch_block_t)block;
+ (void)optionalDispatchAsyncToSharedQueue:(dispatch_block_t)block;
+ (BOOL)isSharedQueue;
+ (void)TESTAPI_enableIsSharedQueueAsserts:(BOOL)value;
+ (void)TESTAPI_waitForSharedQueue;

typedef NS_ENUM(NSInteger, SeekActionType) {
    Seek_Start,
    Seek_End
};

//commenting ADID feature, as this code may be reused once the new design is frozen
//typedef NS_ENUM(NSInteger, ADID_STATUS) {
//    ADID_API_NOT_SUPPORTED = -1,
//    ADID_DISABLED = 0,
//    ADID_ENABLED = 1
//};

@end
