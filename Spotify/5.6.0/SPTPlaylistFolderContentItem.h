/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:34 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Spotify/Spotify-Structs.h>
#import <Spotify/SPTContentItemChangeNotificationImplementation.h>
#import <Spotify/SPTExternalContentItem.h>

@protocol SPTImageLoaderFactory;
@class NSArray, SPPlaylistContainer, SPSession, NSString;

@interface SPTPlaylistFolderContentItem : SPTContentItemChangeNotificationImplementation <SPTExternalContentItem> {

	NSArray* children;
	SPPlaylistContainer* _container;
	SPSession* _session;
	id<SPTImageLoaderFactory> _imageLoaderFactory;

}

@property (nonatomic,retain) SPPlaylistContainer * container;                           //@synthesize container=_container - In the implementation block
@property (assign,nonatomic,__weak) SPSession * session;                                //@synthesize session=_session - In the implementation block
@property (nonatomic,copy) NSArray * children; 
@property (nonatomic,retain) id<SPTImageLoaderFactory> imageLoaderFactory;              //@synthesize imageLoaderFactory=_imageLoaderFactory - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * subTitle; 
@property (nonatomic,copy,readonly) NSString * identifier; 
@property (nonatomic,copy,readonly) NSString * URI; 
@property (nonatomic,readonly) char playable; 
@property (nonatomic,readonly) char isItemContainer; 
@property (nonatomic,readonly) char shouldPlayParent; 
@property (nonatomic,readonly) id<SPTExternalContentItem> parent; 
@property (nonatomic,copy,readonly) NSArray * headers; 
@property (nonatomic,readonly) unsigned childStructureHint; 
-(id<SPTImageLoaderFactory>)imageLoaderFactory;
-(void)setImageLoaderFactory:(id<SPTImageLoaderFactory>)arg1 ;
-(char)isItemContainer;
-(id)generateImageWithSize:(CGSize)arg1 foregroundColor:(id)arg2 backgroundColor:(id)arg3 ;
-(char)shouldPlayParent;
-(id)initWithSession:(id)arg1 playlistContainer:(id)arg2 withParent:(id)arg3 imageLoaderFactory:(id)arg4 ;
-(void)updateChildren;
-(NSString *)subTitle;
-(SPSession *)session;
-(void)dealloc;
-(NSString *)title;
-(SPPlaylistContainer *)container;
-(void)setContainer:(SPPlaylistContainer *)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setSession:(SPSession *)arg1 ;
-(void)setChildren:(NSArray *)arg1 ;
-(NSArray *)children;
-(NSString *)URI;
-(char)playable;
@end

