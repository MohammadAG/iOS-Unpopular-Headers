//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ANCAlert;

@protocol ANCAlertSourceDelegate <NSObject>
- (void)alertRemoved:(ANCAlert *)arg1 isSilent:(_Bool)arg2;
- (void)alertModified:(ANCAlert *)arg1 isSilent:(_Bool)arg2;
- (void)alertAdded:(ANCAlert *)arg1 isSilent:(_Bool)arg2 isPreExisting:(_Bool)arg3;
@end

