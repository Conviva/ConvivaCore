// automatically updated by set_version.pl
#import <Foundation/Foundation.h>


#define BUILD_SVN_REVISION @"2.135.0.34990"

#if CDN_CAPABLE
#define CWS_PROTOCOL_VERSION @"2.5"
#else
// DE-5235 - From ConvivaCore 3.0.6 we are supporting CWS 2.5 Changes (only strMetadata not CDN capability).
#define CWS_PROTOCOL_VERSION @"2.5"
#endif

#define PRODUCTION_SERVICE_HOST @"https://cws.conviva.com"
#define REQUIRED_SERVICE_HOST_SUFFIX @".conviva.com"

#define PRODUCTION_SERVICE_PATH @"0/wsg"

#define DEFAULT_HEARTBEAT_INTERVAL_SEC 20
#define MINIMUM_HEARTBEAT_INTERVAL_SEC 2

#define DEFAULT_JOIN_TIMEOUT_SEC 15

#define DEFAULT_MAX_HEARTBEAT_INFOS 2
#define MAXIMUM_MAX_HEARTBEAT_INFOS 20

#define DEFAULT_HEARTBEAT_TIMEOUT_SEC 20


FOUNDATION_EXPORT NSString *const CDN_KEY;
FOUNDATION_EXPORT NSString *const ENABLED_KEY;
FOUNDATION_EXPORT NSString *const TYPE_KEY;
FOUNDATION_EXPORT NSString *const LABEL_KEY;
FOUNDATION_EXPORT NSString *const LABEL_VALUE_KEY;
FOUNDATION_EXPORT NSString *const HEADER_KEY;


@interface ConvivaSettings : NSObject

@property(nonatomic, copy) NSString *customerKey; // corresponding to customer name
@property(nonatomic, assign) int clientInstanceId;

@property(nonatomic, copy, readonly) NSString *gatewayURL;  // CWS gateway URL host name
- (void)updateGatewayURL:(NSString *)newValue;

@property(nonatomic, assign, readonly) BOOL enableLogging; // If logging to console is enabled
- (void)updateEnableLogging:(NSNumber *)newValue;

@property(nonatomic, assign, readonly) BOOL sendLogs; // If logging to HB is enabled
- (void)updateSendLogs:(NSNumber *)newValue;

@property(nonatomic, assign, readonly) NSTimeInterval heartbeatInterval; // the interval between heartbeats
- (void)updateHeartbeatIntervalSec:(NSNumber *)newValue;
- (void)updateHeartbeatIntervalMs:(NSNumber *)newValue;

@property(nonatomic, assign, readonly) NSTimeInterval joinTimeout; // player state becomes error state if session doesn't join within this time
- (void)updateJoinTimeoutMs:(NSNumber *)newValue;

@property(nonatomic, assign, readonly) NSUInteger maxHeartbeatInfos; // maximum length of the hbinfos array
- (void)updateMaxHeartbeatInfos:(NSNumber *)newValue;
-(void)setDefaultGatewayUrlUsingCustomerKey:(NSString *)customerKey; // This method used to set default gateway url when no gateway url provided by application.
- (void)changeSettings:(NSDictionary *)settings; // Change the settings based on given dictionary.
- (void)reset; // Reset settings to default values.

+ (ConvivaSettings *)sharedInstance;

#ifdef CDN_CAPABLE
-(void)updateCDNInterval:(NSNumber *)interval;

-(void)updateCDNFetchingStatus:(NSNumber *)newValue;

-(void)addUpdateCDNConfig:(NSArray *)configCDNArray;

-(BOOL)getCDNFetchingStatus;

-(NSTimeInterval)getCDNInterval;

-(NSDictionary *)getEnabledCDNValues:(NSString *)type;

-(NSDictionary *)getParsedCDNInfo:(NSDictionary *)cdnDict;
#endif
@end
