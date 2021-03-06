//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AceObject<SAAceCommand>, NSArray, NSBundle, NSIndexPath, NSString, NSURL, NSUUID, SASSpeechRecognized, SVSTranscriptStackViewController, UIView, UIViewController;

@protocol SVSTranscriptStackViewControllerDelegate <NSObject>
- (void)transcriptStackViewController:(SVSTranscriptStackViewController *)arg1 didShowSnippetWithIdentifier:(NSUUID *)arg2 forInterval:(double)arg3;
- (void)transcriptStackViewController:(SVSTranscriptStackViewController *)arg1 didScrollForInterval:(double)arg2;
- (void)transcriptStackViewController:(SVSTranscriptStackViewController *)arg1 didEditSpeechRecognized:(SASSpeechRecognized *)arg2 forInterval:(double)arg3;
- (void)transcriptStackViewController:(SVSTranscriptStackViewController *)arg1 shouldPresentPicker:(UIViewController *)arg2 completion:(void (^)(_Bool))arg3;
- (void)transcriptStackViewController:(SVSTranscriptStackViewController *)arg1 setStatusBarHidden:(_Bool)arg2;
- (void)transcriptStackViewController:(SVSTranscriptStackViewController *)arg1 willDismissViewController:(UIViewController *)arg2;
- (void)transcriptStackViewController:(SVSTranscriptStackViewController *)arg1 willPresentViewController:(UIViewController *)arg2;
- (void)transcriptStackViewController:(SVSTranscriptStackViewController *)arg1 setStatusViewHidden:(_Bool)arg2;
- (_Bool)transcriptStackViewControllerShouldPreventUserInteraction:(SVSTranscriptStackViewController *)arg1;
- (void)transcriptStackViewController:(SVSTranscriptStackViewController *)arg1 openURL:(NSURL *)arg2 conversationItemIdentifier:(NSUUID *)arg3 completion:(void (^)(_Bool))arg4;
- (NSBundle *)effectiveCoreLocationBundleForTranscriptStackViewController:(SVSTranscriptStackViewController *)arg1;
- (void)transcriptStackViewController:(SVSTranscriptStackViewController *)arg1 synthesizeSpeechWithPhoneticText:(NSString *)arg2 completion:(void (^)(void))arg3;
- (void)stopSpeakingForTranscriptStackViewController:(SVSTranscriptStackViewController *)arg1;
- (void)transcriptStackViewController:(SVSTranscriptStackViewController *)arg1 speakText:(NSString *)arg2 isPhonetic:(_Bool)arg3 completion:(void (^)(void))arg4;
- (void)cancelRequestForTranscriptStackViewController:(SVSTranscriptStackViewController *)arg1;
- (void)transcriptStackViewController:(SVSTranscriptStackViewController *)arg1 performAceCommand:(AceObject<SAAceCommand> *)arg2 conversationItemIdentifier:(NSUUID *)arg3 completion:(void (^)(_Bool))arg4;
- (void)transcriptStackViewController:(SVSTranscriptStackViewController *)arg1 didCorrectRecognition:(NSString *)arg2 correctionIdentifier:(id)arg3 forItemAtIndexPath:(NSIndexPath *)arg4;
- (void)transcriptStackViewControllerWillBeginEditing:(SVSTranscriptStackViewController *)arg1;
- (void)transcriptStackViewController:(SVSTranscriptStackViewController *)arg1 didPresentConversationItemsWithIdentifiers:(NSArray *)arg2;
- (void)transcriptStackViewController:(SVSTranscriptStackViewController *)arg1 didHideVibrantView:(UIView *)arg2;
- (void)transcriptStackViewControllerDidShowSuggestions:(SVSTranscriptStackViewController *)arg1;
- (_Bool)transcriptStackViewControllerWillShowSuggestions:(SVSTranscriptStackViewController *)arg1;
- (long long)initialDisplayTypeForTranscriptStackViewController:(SVSTranscriptStackViewController *)arg1;
- (struct CGRect)statusBarFrameForTranscriptStackViewController:(SVSTranscriptStackViewController *)arg1;
- (void)transcriptStackViewControllerDidExitSiriland:(SVSTranscriptStackViewController *)arg1;
- (void)transcriptStackViewControllerWillEnterSiriland:(SVSTranscriptStackViewController *)arg1;
@end

