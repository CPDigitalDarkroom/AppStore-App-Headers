/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:38 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Spotify/SPTCollectionEntityListItem.h>

@class NSString, NSURL, NSDate;

@interface SPTNewReleasesJustReleasedAlbumEntityListItem : NSObject <SPTCollectionEntityListItem> {

	NSString* _title;
	NSString* _subtitle;
	NSURL* _imageURL;
	NSURL* _entityURL;
	int _icon;
	unsigned _contentType;
	NSURL* _trackURL;
	NSURL* _previewURL;
	NSURL* _offlineURL;
	NSDate* _releaseDate;
	NSString* _subtitleWithDate;

}

@property (nonatomic,copy) NSString * title;                                //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                             //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,copy) NSURL * imageURL;                                //@synthesize imageURL=_imageURL - In the implementation block
@property (nonatomic,copy) NSURL * entityURL;                               //@synthesize entityURL=_entityURL - In the implementation block
@property (assign,nonatomic) int icon;                                      //@synthesize icon=_icon - In the implementation block
@property (assign,nonatomic) unsigned contentType;                          //@synthesize contentType=_contentType - In the implementation block
@property (nonatomic,copy) NSURL * trackURL;                                //@synthesize trackURL=_trackURL - In the implementation block
@property (nonatomic,retain) NSURL * previewURL;                            //@synthesize previewURL=_previewURL - In the implementation block
@property (nonatomic,retain) NSURL * offlineURL;                            //@synthesize offlineURL=_offlineURL - In the implementation block
@property (nonatomic,retain) NSDate * releaseDate;                          //@synthesize releaseDate=_releaseDate - In the implementation block
@property (nonatomic,retain) NSString * subtitleWithDate;                   //@synthesize subtitleWithDate=_subtitleWithDate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * loggingContext; 
-(void)setOfflineURL:(NSURL *)arg1 ;
-(NSURL *)trackURL;
-(NSURL *)offlineURL;
-(NSURL *)entityURL;
-(NSString *)loggingContext;
-(void)setEntityURL:(NSURL *)arg1 ;
-(void)setTrackURL:(NSURL *)arg1 ;
-(id)sharedDateFormatter;
-(id)initWithCollectionAlbum:(id)arg1 ;
-(NSString *)subtitleWithDate;
-(void)setSubtitleWithDate:(NSString *)arg1 ;
-(void)setContentType:(unsigned)arg1 ;
-(NSDate *)releaseDate;
-(NSURL *)previewURL;
-(void)setTitle:(NSString *)arg1 ;
-(void)action;
-(NSString *)title;
-(unsigned)contentType;
-(NSString *)subtitle;
-(void)setIcon:(int)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(int)icon;
-(void)setPreviewURL:(NSURL *)arg1 ;
-(void)setImageURL:(NSURL *)arg1 ;
-(NSURL *)imageURL;
-(void)setReleaseDate:(NSDate *)arg1 ;
@end

