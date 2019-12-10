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

+ (NSString *)getAdIdentifierWithOldConfiguration:(NSString *)oldFpconf AndNewConfiguration:(NSString *)fpconf;
+ (NSString *)getVendorIdentifierWithOldConfiguration:(NSString *)oldFpconf AndNewConfiguration:(NSString *)fpconf;
+ (NSString *)getOtherIdentifierForTag:(NSString *)tag WithOldConfiguration:(NSString *)oldFpconf AndNewConfiguration:(NSString *)fpconf;

+ (NSString *)getClientId;
+ (void)setClientId:(NSString *)clientId;
+ (void)deleteClientId;
+ (NSString *)getClientIdFromUserDefaults;

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

typedef NS_ENUM(NSInteger, UniqueIdentifier) {
    UNIQUE_IDENTIFIER_NA = 0,   //  No such ID available on device.
    UNIQUE_IDENTIFIER_NULL,     //  API to fetch this ID can't be used under current circumstances.
    UNIQUE_IDENTIFIER_EULA,     //  EULA.
    UNIQUE_IDENTIFIER_PRIVACY_SETTING,  //  End user prevented to track ID from device privacy settings.
    UNIQUE_IDENTIFIER_CONVIVA_CONFIG,   //  Conviva Configuration portal prevented to capture this ID.
    UNIQUE_IDENTIFIER_OPT_OUT   //  End user prevented to track ID & requested to delete all previous data.
};

//commenting ADID feature, as this code may be reused once the new design is frozen
//typedef NS_ENUM(NSInteger, ADID_STATUS) {
//    ADID_API_NOT_SUPPORTED = -1,
//    ADID_DISABLED = 0,
//    ADID_ENABLED = 1
//};

@end
