/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:53 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Spotify/Spotify-Structs.h>
@class SPTAlbum, NSArray;

@interface SPTDecoratedAlbum : NSObject {

	SPTAlbum* _album;
	NSArray* _trackURLs;

}

@property (nonatomic,retain) SPTAlbum * album;                 //@synthesize album=_album - In the implementation block
@property (nonatomic,retain) NSArray * trackURLs;              //@synthesize trackURLs=_trackURLs - In the implementation block
+(id)decoratedAlbumWithMetadata:(const AlbumMetadata*)arg1 ;
+(id)decoratedAlbumWithAlbum:(id)arg1 ;
-(NSArray *)trackURLs;
-(void)setTrackURLs:(NSArray *)arg1 ;
-(id)initWithAlbum:(id)arg1 trackURLs:(id)arg2 ;
-(SPTAlbum *)album;
-(void)setAlbum:(SPTAlbum *)arg1 ;
@end

