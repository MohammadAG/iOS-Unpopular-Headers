//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PSLanguageSelector.h"

@class COSInternationalController, NPSDomainAccessor, NPSManager;

@interface COSLanguageSelector : PSLanguageSelector
{
    COSInternationalController *_internationalController;
    NPSDomainAccessor *_gizmoGlobalDomain;
    NPSManager *_syncManager;
}

@property(retain, nonatomic) NPSManager *syncManager; // @synthesize syncManager=_syncManager;
@property(retain, nonatomic) NPSDomainAccessor *gizmoGlobalDomain; // @synthesize gizmoGlobalDomain=_gizmoGlobalDomain;
@property(nonatomic) __weak COSInternationalController *internationalController; // @synthesize internationalController=_internationalController;
- (void).cxx_destruct;
- (id)deviceLanguageIdentifier;
- (id)systemLanguages;
- (void)setLanguage:(id)arg1 fallback:(id)arg2;
- (void)setLanguage:(id)arg1;
- (id)appleLanguages;
- (id)preferredLanguages;
- (id)initWithInternationalController:(id)arg1;

@end

