/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:54 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Spotify/Spotify-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SPTSkipToTrack, NSNumber, SPTPlayerOptionOverrides, SPTPlayerSuppressions;

@interface SPTPlayOptions : NSObject <NSCopying> {

	char _initiallyPaused;
	SPTSkipToTrack* _skipTo;
	NSNumber* _seekTo;
	SPTPlayerOptionOverrides* _playerOptionsOverride;
	SPTPlayerSuppressions* _suppressions;

}

@property (nonatomic,readonly) PreparePlayOptions cpp; 
@property (nonatomic,copy) SPTSkipToTrack * skipTo;                                       //@synthesize skipTo=_skipTo - In the implementation block
@property (nonatomic,copy) NSNumber * seekTo;                                             //@synthesize seekTo=_seekTo - In the implementation block
@property (assign,nonatomic) char initiallyPaused;                                        //@synthesize initiallyPaused=_initiallyPaused - In the implementation block
@property (nonatomic,copy) SPTPlayerOptionOverrides * playerOptionsOverride;              //@synthesize playerOptionsOverride=_playerOptionsOverride - In the implementation block
@property (nonatomic,copy) SPTPlayerSuppressions * suppressions;                          //@synthesize suppressions=_suppressions - In the implementation block
-(void)setSuppressions:(SPTPlayerSuppressions *)arg1 ;
-(SPTPlayerOptionOverrides *)playerOptionsOverride;
-(void)setSkipTo:(SPTSkipToTrack *)arg1 ;
-(SPTSkipToTrack *)skipTo;
-(void)setSeekTo:(NSNumber *)arg1 ;
-(void)setPlayerOptionsOverride:(SPTPlayerOptionOverrides *)arg1 ;
-(void)setInitiallyPaused:(char)arg1 ;
-(SPTPlayerSuppressions *)suppressions;
-(PreparePlayOptions)cpp;
-(NSNumber *)seekTo;
-(char)initiallyPaused;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)serializedDictionary;
@end

