//
//  JSONSerialization.h
//  iOSClient
//
//  Created by Saiguang Che on 7/2/12. Originally written by George Necula (necula@conviva.com).
//  Copyright (c) 2012 Conviva. All rights reserved.
//
#import <Foundation/Foundation.h>


@interface ConvivaJSONParser : NSObject

+ (NSDictionary *)jsonDictionaryFromString:(NSString *)str;

@end

@interface ConvivaJSONEncoder : NSObject

+ (NSString *)jsonStringFromDictionary:(NSDictionary *)obj;

@end
