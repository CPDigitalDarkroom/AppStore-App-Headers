/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:43 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Spotify/ProfileBaseVC.h>
#import <Spotify/SocialRelationsViewModelDelegate.h>
#import <Spotify/SPTImageLoaderDelegate.h>
#import <Spotify/SPObjectRepresentation.h>
#import <Spotify/SPTThemableViewLayoutDelegate.h>

@protocol SPTImageLoader;
@class NSString;

@interface SocialRelationsVC : ProfileBaseVC <SocialRelationsViewModelDelegate, SPTImageLoaderDelegate, SPObjectRepresentation, SPTThemableViewLayoutDelegate> {

	id<SPTImageLoader> _imageLoader;

}

@property (nonatomic,retain) id<SPTImageLoader> imageLoader;              //@synthesize imageLoader=_imageLoader - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SPTImageLoader>)imageLoader;
-(void)imageLoader:(id)arg1 didLoadImage:(id)arg2 forURL:(id)arg3 loadTime:(double)arg4 context:(id)arg5 ;
-(void)imageLoader:(id)arg1 didFailToLoadImageForURL:(id)arg2 error:(id)arg3 context:(id)arg4 ;
-(void)setImageLoader:(id<SPTImageLoader>)arg1 ;
-(void)themableViewWillUpdateLayout:(id)arg1 ;
-(void)viewModelDidFinishAllRequests:(id)arg1 ;
-(void)setupTableView;
-(void)followButtonTapped:(id)arg1 ;
-(id)initWithViewModel:(id)arg1 viewLogger:(id)arg2 logger:(id)arg3 style:(int)arg4 profileFeature:(id)arg5 findFriendsFeature:(id)arg6 metaViewController:(id)arg7 imageLoaderFactory:(id)arg8 contextMenuFeature:(id)arg9 bottomTabBarSettings:(id)arg10 ;
-(void)configureCell:(id)arg1 socialRelation:(id)arg2 atIndexPath:(id)arg3 ;
-(void)viewModel:(id)arg1 didUpdateSocialRelationsEntity:(id)arg2 index:(int)arg3 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(id)URI;
@end

