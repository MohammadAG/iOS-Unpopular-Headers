//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PSSetupController.h"

@class NSString;

@interface COSInternationalLanguageSetupController : PSSetupController
{
    NSString *_languageToSet;
}

@property(copy, nonatomic) NSString *languageToSet; // @synthesize languageToSet=_languageToSet;
- (void).cxx_destruct;
- (void)commit;
- (long long)preferredStatusBarStyle;
- (void)setupController;
- (void)setLanguage:(id)arg1 specifier:(id)arg2;
- (_Bool)useOfficialLanguages;

@end

