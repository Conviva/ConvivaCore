//
//  CustomProxyCreator.h
//  iOSClient
//
//  Created by Gaurav on 09/03/18.
//  Copyright © 2018 Conviva. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CustomProxyCreator : NSObject
+ (id)createCustomProxy:(id)streamer;
+ (void)cleanUpCustomProxy:(id)streamer;

@end
