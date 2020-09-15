#import <Foundation/Foundation.h>

@interface ConvivaDataSender : NSObject

+ (void)postString:(NSString *)string
             toURL:(NSURL *)URL
 completionHandler:(void(^)(NSString *responseString, NSString *errorMsg))completionHandler;

+ (void)getStringFromURL:(NSURL *)URL
       completionHandler:(void (^)(NSData *responsedata, NSString *errorMsg))completionHandler;

+ (void)performHEADRequest:(NSArray *)headerKeyArray headerValueArray:(NSArray *)headerValueArray
                     toURL:(NSURL *)URL
         completionHandler:(void (^)(NSData *responsedata, NSError *error,NSURLResponse *urlResp))completionHandler;

+ (void)cleanup;

@end
