/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:30 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Spotify/SPTArtistEntityImpl.h>
#import <Spotify/SPTArtistAlbum.h>

@class NSString, NSURL;

@interface SPTArtistAlbumImpl : SPTArtistEntityImpl <SPTArtistAlbum> {

	NSString* _year;
	NSString* _releaseDate;
	unsigned _trackCount;

}

@property (nonatomic,retain) NSString * year;                               //@synthesize year=_year - In the implementation block
@property (nonatomic,retain) NSString * releaseDate;                        //@synthesize releaseDate=_releaseDate - In the implementation block
@property (assign,nonatomic) unsigned trackCount;                           //@synthesize trackCount=_trackCount - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSURL * uri; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) id<SPTArtistImage> image; 
@property (nonatomic,readonly) id<SPTArtistImage> headerImage; 
@property (nonatomic,retain) NSString * fileId; 
-(NSString *)releaseDate;
-(unsigned)trackCount;
-(NSString *)year;
-(void)setYear:(NSString *)arg1 ;
-(void)setTrackCount:(unsigned)arg1 ;
-(void)setReleaseDate:(NSString *)arg1 ;
@end

