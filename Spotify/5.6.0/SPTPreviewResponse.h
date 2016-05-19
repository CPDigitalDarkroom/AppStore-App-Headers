/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:43 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray, NSURL;

@interface SPTPreviewResponse : NSObject {

	NSString* _artistName;
	NSArray* _imagesURL;
	NSArray* _tracks;
	NSString* _albumName;
	NSURL* _URL;

}

@property (nonatomic,retain) NSString * artistName;              //@synthesize artistName=_artistName - In the implementation block
@property (nonatomic,retain) NSArray * imagesURL;                //@synthesize imagesURL=_imagesURL - In the implementation block
@property (nonatomic,retain) NSArray * tracks;                   //@synthesize tracks=_tracks - In the implementation block
@property (nonatomic,retain) NSString * albumName;               //@synthesize albumName=_albumName - In the implementation block
@property (nonatomic,retain) NSURL * URL;                        //@synthesize URL=_URL - In the implementation block
-(char)isArtist;
-(char)isAlbum;
-(NSArray *)imagesURL;
-(void)parseDataFromArtistInfo:(id)arg1 ;
-(void)parseDataFromTopTracks:(id)arg1 ;
-(void)parseDataFromAlbumsInfo:(id)arg1 ;
-(void)setImagesURL:(NSArray *)arg1 ;
-(id)parseTrackNames:(id)arg1 ;
-(id)parseArtistNames:(id)arg1 ;
-(NSString *)albumName;
-(void)setAlbumName:(NSString *)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(NSURL *)URL;
-(void)setURL:(NSURL *)arg1 ;
-(void)setTracks:(NSArray *)arg1 ;
-(NSString *)artistName;
-(void)setArtistName:(NSString *)arg1 ;
-(NSArray *)tracks;
@end

