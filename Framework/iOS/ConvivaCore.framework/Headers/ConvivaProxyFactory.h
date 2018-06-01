
#import <Foundation/Foundation.h>
#import "ConvivaStreamerProxy.h"

@protocol ConvivaProxyFactory <NSObject>
@optional
- (ConvivaStreamerProxy*)createConvivaproxy:(id)streamer;
@end
