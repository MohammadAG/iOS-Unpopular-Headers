//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AFUIDialogPhase, AceObject, NSString, NSUUID;

@protocol AFUIConversationItem <NSObject>
- (id <AFUIDataStoring>)associatedDataStore;
- (_Bool)isVirgin;
- (long long)presentationState;
- (NSString *)aceCommandIdentifier;
- (AFUIDialogPhase *)dialogPhase;
- (AceObject *)aceObject;
- (NSUUID *)revisionIdentifier;
- (long long)type;
- (NSUUID *)identifier;
@end

