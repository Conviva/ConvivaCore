//
// Copyright (c) 2015 Conviva. All rights reserved.
//
#import <Foundation/Foundation.h>


@interface ConvivaPersistentStorage : NSObject

+ (void)saveValue:(NSString *)value forKey:(NSString *)key;

+ (NSString *)loadValueForKey:(NSString *)key;

+ (void)deleteValueForKey:(NSString *)key;

@end
