/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:48 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Spotify/SPTVideoPlayerMessage.h>

@class SPTVideoTrack, NSArray, NSString, SPTPlayerOptions, NSDate;

@interface SPTVideoStartCommand : SPTVideoPlayerMessage {

	char _paused;
	char _systemInitiated;
	SPTVideoTrack* _track;
	NSArray* _future;
	NSString* _startReason;
	SPTPlayerOptions* _playerOptions;
	NSDate* _commandInitiatedAt;
	NSDate* _commandReceivedAt;
	double _position;

}

@property (nonatomic,readonly) double position;                                            //@synthesize position=_position - In the implementation block
@property (nonatomic,readonly) SPTVideoTrack * track;                                      //@synthesize track=_track - In the implementation block
@property (nonatomic,readonly) NSArray * future;                                           //@synthesize future=_future - In the implementation block
@property (getter=isPaused,nonatomic,readonly) char paused;                                //@synthesize paused=_paused - In the implementation block
@property (getter=isSystemInitiated,nonatomic,readonly) char systemInitiated;              //@synthesize systemInitiated=_systemInitiated - In the implementation block
@property (nonatomic,readonly) NSString * startReason;                                     //@synthesize startReason=_startReason - In the implementation block
@property (nonatomic,readonly) SPTPlayerOptions * playerOptions;                           //@synthesize playerOptions=_playerOptions - In the implementation block
@property (nonatomic,readonly) NSDate * commandInitiatedAt;                                //@synthesize commandInitiatedAt=_commandInitiatedAt - In the implementation block
@property (nonatomic,readonly) NSDate * commandReceivedAt;                                 //@synthesize commandReceivedAt=_commandReceivedAt - In the implementation block
-(NSString *)startReason;
-(SPTPlayerOptions *)playerOptions;
-(NSDate *)commandInitiatedAt;
-(char)isSystemInitiated;
-(id)dateFromTimestampMS:(id)arg1 ;
-(NSDate *)commandReceivedAt;
-(id)initWithPosition:(double)arg1 track:(id)arg2 future:(id)arg3 paused:(char)arg4 systemInitiated:(char)arg5 startReason:(id)arg6 playerOptions:(id)arg7 commandInitiatedAt:(id)arg8 commandReceivedAt:(id)arg9 ;
-(SPTVideoTrack *)track;
-(NSArray *)future;
-(char)isPaused;
-(id)initWithDictionary:(id)arg1 ;
-(double)position;
-(id)serializedDictionary;
@end

