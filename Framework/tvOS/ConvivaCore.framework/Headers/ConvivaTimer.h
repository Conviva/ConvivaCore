#import <Foundation/Foundation.h>

@interface ConvivaTimer : NSObject

@property(nonatomic, assign, readonly) BOOL valid;
@property(nonatomic, strong, readonly) NSDate *fireDate;

- (instancetype)init NS_UNAVAILABLE;

- (instancetype)initWithTimeInterval:(NSTimeInterval)timeInterval
                              leeway:(NSTimeInterval)leeway
                               queue:(dispatch_queue_t)queue
                             handler:(dispatch_block_t)handler NS_DESIGNATED_INITIALIZER;

+ (instancetype)scheduledTimerWithTimeInterval:(NSTimeInterval)timeInterval
                                        leeway:(NSTimeInterval)leeway
                                         queue:(dispatch_queue_t)queue
                                       handler:(dispatch_block_t)handler;

- (void)invalidate;

@end
