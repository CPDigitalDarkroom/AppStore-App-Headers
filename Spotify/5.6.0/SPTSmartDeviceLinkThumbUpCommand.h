/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:46 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Spotify/SPTSmartDeviceLinkCommand.h>

@protocol SPTSmartDeviceLinkCommandDelegate;
@class SPTExternalPlaybackControl, NSString;

@interface SPTSmartDeviceLinkThumbUpCommand : NSObject <SPTSmartDeviceLinkCommand> {

	id<SPTSmartDeviceLinkCommandDelegate> delegate;
	SPTExternalPlaybackControl* _playControl;

}

@property (nonatomic,retain) SPTExternalPlaybackControl * playControl;                           //@synthesize playControl=_playControl - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<SPTSmartDeviceLinkCommandDelegate> delegate; 
@property (nonatomic,readonly) unsigned commandID; 
-(void)triggerCommandWithSmartDeviceLink:(id)arg1 useVoicePrompts:(char)arg2 ;
-(char)availableWithPlaybackStatus:(id)arg1 smartDeviceLink:(id)arg2 ;
-(void)wasAddedToDeviceWithPlaybackStatus:(id)arg1 ;
-(id)localizedTitleWithPlaybackStatus:(id)arg1 ;
-(id)localizedVoiceCommandsWithPlaybackStatus:(id)arg1 ;
-(SPTExternalPlaybackControl *)playControl;
-(id)initWithPlaybackControl:(id)arg1 ;
-(void)setPlayControl:(SPTExternalPlaybackControl *)arg1 ;
-(void)setDelegate:(id<SPTSmartDeviceLinkCommandDelegate>)arg1 ;
-(id<SPTSmartDeviceLinkCommandDelegate>)delegate;
-(unsigned)commandID;
@end

