/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:58 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBAudioSessionManagerClient.h>

@class NSNotificationCenter, FBSystemAudioSessionManager, NSString;

@interface FBSystemMoviePlayerAudioSessionAdaptor : NSObject <FBAudioSessionManagerClient> {

	NSNotificationCenter* _notificationCenter;
	FBSystemAudioSessionManager* _audioSessionManager;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned audioDirection; 
@property (nonatomic,readonly) unsigned outputCoordinationMode; 
@property (nonatomic,readonly) unsigned outputOptions; 
@property (nonatomic,readonly) unsigned inputOptions; 
@property (nonatomic,readonly) unsigned clientPriority; 
-(void)finishInterruptionAndResume:(char)arg1 ;
-(unsigned)outputCoordinationMode;
-(unsigned)outputOptions;
-(id)initWithNotificationCenter:(id)arg1 audioSessionManager:(id)arg2 ;
-(void)_didStartPlayingFullScreenVideo:(id)arg1 ;
-(void)_willEndPlayingFullScreenVideo:(id)arg1 ;
-(void)beginInterruption;
-(void)dealloc;
-(void)stop;
-(void)start;
@end

