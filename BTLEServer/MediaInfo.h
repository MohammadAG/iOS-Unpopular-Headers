//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@interface MediaInfo : NSObject
{
    id <MediaInfoDelegate> _delegate;
    struct __CFArray *_currentSupportedCommands;
    NSString *_currentIdentifier;
    unsigned int _currentPlaybackState;
    NSDictionary *_currentInfo;
}

@property(retain, nonatomic) NSDictionary *currentInfo; // @synthesize currentInfo=_currentInfo;
@property(retain, nonatomic) NSString *currentIdentifier; // @synthesize currentIdentifier=_currentIdentifier;
@property(nonatomic) id <MediaInfoDelegate> delegate; // @synthesize delegate=_delegate;
- (double)preferredIntervalForCommand:(unsigned int)arg1;
- (float)defaultPlaybackRate;
- (float)playbackRate;
- (void)avServerConnectionDiedNotification;
- (void)avEffectiveVolumeDidChangeNotification:(id)arg1;
- (void)mrInfoDidChangeNotification;
- (void)mrPlaybackStateDidChangeNotification:(id)arg1;
- (void)mrApplicationDidChangeNotification:(id)arg1;
- (void)mrSupportedCommandsDidChangeNotification;
- (void)volumeDidChangeForCategory:(id)arg1;
- (void)infoDidChange:(id)arg1;
- (void)playbackStateDidChange:(unsigned int)arg1;
- (void)applicationDidChange:(int)arg1;
- (void)supportedCommandsDidChange:(struct __CFArray *)arg1;
- (void)unregisterForAVNotifications;
- (void)registerForAVNotifications;
- (void)dealloc;
- (id)trackDuration;
- (id)trackTitle;
- (id)trackAlbum;
- (id)trackArtist;
- (id)queueRepeatMode;
- (id)queueShuffleMode;
- (id)queueCount;
- (id)queueIndex;
- (float)playerPlaybackRate;
- (id)playerElapsedTime;
- (id)playerVolume;
- (id)playerPlaybackState;
- (id)playerName;
- (id)playerBundleID;
- (id)supportedCommands;
- (void)sendCommand:(unsigned char)arg1;
- (id)init;

@end
