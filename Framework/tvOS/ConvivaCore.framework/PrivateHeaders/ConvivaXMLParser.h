//
//  ConvivaXMLParser.h
//  iOSClient
//
//  Copyright © 2016 Conviva. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface ConvivaXMLParser : NSObject<NSXMLParserDelegate>

-(instancetype)init;
-(void)parseData:(NSData *)data findString:(NSString *)toFindString completionHandler:(void (^)(NSString *responseString, BOOL finished))completionHandler;
-(void)cleanup;
@end
