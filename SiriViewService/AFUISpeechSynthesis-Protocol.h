//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol AFUISpeechSynthesis <NSObject>
- (void)invalidate;
- (void)skipCurrentSynthesis;
- (void)cancel;
- (void)enqueueText:(NSString *)arg1 completion:(void (^)(long long))arg2;
- (void)enqueueText:(NSString *)arg1 isPhonetic:(_Bool)arg2 provisionally:(_Bool)arg3 preparationIdentifier:(NSString *)arg4 completion:(void (^)(long long))arg5 animationIdentifier:(NSString *)arg6;
@end

