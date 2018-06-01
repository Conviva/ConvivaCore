//
//  ConvivaLightSessionTest.h
//  iOSClient
//
//  Created by Ali Lakhia on 11/14/13.
//  Copyright (c) 2013 Conviva. All rights reserved.
//

#import "ConvivaLightSession.h"
#import "MonitorStreamerProxy.h"
#import "ConvivaTimer.h"


@interface ConvivaLightSession (TestAPI)

- (void)TESTAPI_dispatchSyncSendHb;
- (void)TESTAPI_sendAppStateChangeNotification:(NSNotification *)notification;
- (void)TESTAPI_dispatchSyncReceiveResp:(NSString *)response orErrorMsg:(NSString *)errorMsg;

- (dispatch_queue_t)TESTAPI_dispatchQueue;
- (NSDictionary *)TESTAPI_lastHbDict;
- (MonitorStreamerProxy *)TESTAPI_monitor;
- (ConvivaTimer *)TESTAPI_hbTimer;

@end
