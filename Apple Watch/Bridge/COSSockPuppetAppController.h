//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "COSNotificationAppController.h"

@class PSSystemPolicyManager;

@interface COSSockPuppetAppController : COSNotificationAppController
{
    PSSystemPolicyManager *_policyManager;
}

@property(retain, nonatomic) PSSystemPolicyManager *policyManager; // @synthesize policyManager=_policyManager;
- (void).cxx_destruct;
- (id)sockPuppetSpecifiersForIdentifier:(id)arg1;
- (id)puppetAppShows:(id)arg1;
- (void)setPuppetAppShows:(id)arg1 specifier:(id)arg2;
- (id)specifiers;

@end

