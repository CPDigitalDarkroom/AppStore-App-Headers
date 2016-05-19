/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:31 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Spotify/SPTLocalFileTrackInfo.h>

@class NSString, NSURL;

@interface SPTLocalFileCosmosTrackInfo : NSObject <SPTLocalFileTrackInfo> {

	NSString* _title;
	NSURL* _imageURL;
	NSString* _artist;
	NSString* _albumTitle;
	NSURL* _URL;
	int _playbackDuration;

}

@property (nonatomic,retain) NSString * title;                   //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSURL * imageURL;                   //@synthesize imageURL=_imageURL - In the implementation block
@property (nonatomic,retain) NSString * artist;                  //@synthesize artist=_artist - In the implementation block
@property (nonatomic,retain) NSString * albumTitle;              //@synthesize albumTitle=_albumTitle - In the implementation block
@property (nonatomic,retain) NSURL * URL;                        //@synthesize URL=_URL - In the implementation block
@property (assign,nonatomic) int playbackDuration;               //@synthesize playbackDuration=_playbackDuration - In the implementation block
@property (nonatomic,readonly) NSString * UUID; 
-(id)initWithLocalFileInfo:(id)arg1 imageURL:(id)arg2 ;
-(NSString *)artist;
-(void)setArtist:(NSString *)arg1 ;
-(void)setAlbumTitle:(NSString *)arg1 ;
-(NSString *)albumTitle;
-(int)playbackDuration;
-(void)setPlaybackDuration:(int)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)title;
-(NSString *)UUID;
-(NSURL *)URL;
-(void)setURL:(NSURL *)arg1 ;
-(void)setImageURL:(NSURL *)arg1 ;
-(NSURL *)imageURL;
@end

