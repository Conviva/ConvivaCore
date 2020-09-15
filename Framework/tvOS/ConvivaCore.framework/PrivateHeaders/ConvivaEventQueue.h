//
// Copyright (c) 2015 Conviva. All rights reserved.
//
#import <Foundation/Foundation.h>


@interface ConvivaEventQueue : NSObject

/* enqueue an event of type NSMutableDictionary */
- (void)enqueueCwsEvent:(NSMutableDictionary *)event;

/* return an event list and then reset the queue */
- (NSArray *)flushCwsEvents;

@end
