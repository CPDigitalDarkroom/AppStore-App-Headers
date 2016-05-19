/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:42 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Spotify/SPAction.h>

@protocol PlaylistFeature;
@class NSArray, NSURL, NSString;

@interface SPTAddToPlaylistAction : SPAction {

	NSArray* _trackURLs;
	NSURL* _entityURL;
	NSURL* _sourceURL;
	NSString* _defaultPlaylistName;
	id<PlaylistFeature> _playlistFeature;

}

@property (nonatomic,retain) NSArray * trackURLs;                                     //@synthesize trackURLs=_trackURLs - In the implementation block
@property (nonatomic,retain) NSURL * entityURL;                                       //@synthesize entityURL=_entityURL - In the implementation block
@property (nonatomic,retain) NSURL * sourceURL;                                       //@synthesize sourceURL=_sourceURL - In the implementation block
@property (nonatomic,copy) NSString * defaultPlaylistName;                            //@synthesize defaultPlaylistName=_defaultPlaylistName - In the implementation block
@property (assign,nonatomic,__weak) id<PlaylistFeature> playlistFeature;              //@synthesize playlistFeature=_playlistFeature - In the implementation block
-(NSArray *)trackURLs;
-(NSURL *)entityURL;
-(void)setPlaylistFeature:(id<PlaylistFeature>)arg1 ;
-(id<PlaylistFeature>)playlistFeature;
-(void)setEntityURL:(NSURL *)arg1 ;
-(void)setTrackURLs:(NSArray *)arg1 ;
-(id)logEventName;
-(char)executeBeforeDismiss;
-(id)initWithTrackURLs:(id)arg1 addEntityURL:(id)arg2 defaultPlaylistName:(id)arg3 playlistFeature:(id)arg4 logContext:(id)arg5 sourceURL:(id)arg6 ;
-(NSString *)defaultPlaylistName;
-(void)setDefaultPlaylistName:(NSString *)arg1 ;
-(id)title;
-(id)image;
-(int)style;
-(void)setSourceURL:(NSURL *)arg1 ;
-(NSURL *)sourceURL;
-(id)execute:(id)arg1 ;
@end

