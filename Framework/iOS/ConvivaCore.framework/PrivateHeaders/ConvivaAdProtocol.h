//
//  ConvivaAdProtocol.h
//  iOSClient
//
//  Created by Gaurav on 11/03/18.
//  Copyright © 2018 Conviva. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol ConvivaAdProtocol <NSObject>

@optional
- (void) setAdCustomPlayerState: (int) playerState;
- (void) setAdCustomPlayerName: (NSString *) playerName;
- (void) setAdCustomPlayerVersion: (NSString *) playerVersion;
- (void) setAdCustomPlayerVideoResolutionWidth: (NSInteger) width andHeight: (NSInteger) height;
- (void) setAdCustomPlayerPlayHeadTime: (NSInteger) pht;
- (void) setAdCustomPlayerBufferLength: (NSInteger) bufferLength;

@end
