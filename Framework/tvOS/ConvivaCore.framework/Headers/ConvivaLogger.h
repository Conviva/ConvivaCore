//
// Copyright (c) 2015 Conviva. All rights reserved.
//

#define CONVIVA_HB_REQUEST_TRACE_PREFIX @"Send HB request"
#define CONVIVA_HB_RESPONSE_TRACE_PREFIX @"Receive HB response"

@interface ConvivaLogger : NSObject

+ (void)cleanup;
+ (NSMutableArray *)getLogBuffer;
+ (void)resetLogBuffer;

+ (void)log:(NSString *)msg forSession:(NSInteger)sessionId;
+ (void)log:(NSString *)msg;
+ (void)err:(NSString *)err forSession:(NSInteger)sessionId;
+ (void)err:(NSString *)err;

+ (NSArray *)collectLog;

@end
