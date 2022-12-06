//
//  JMStateTransitionEvent.h
//
//  Copyright © 2021 Jumio Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>

__attribute__((visibility("default"))) @interface JMStateTransitionEvent : NSObject <NSCopying>
@property (nonatomic, strong, readonly) NSString* name;

+ (instancetype)transitionEventWithName:(NSString*)name;

@end
