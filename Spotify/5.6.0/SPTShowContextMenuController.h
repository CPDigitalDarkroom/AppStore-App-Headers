/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:42 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Spotify/SPTShowContextMenuMetadataViewDelegate.h>

@protocol SPContextMenuFeature, SPTPodcastFeature;
@class SPTContextMenuViewController, SPTPopoverController;

@interface SPTShowContextMenuController : NSObject <SPTShowContextMenuMetadataViewDelegate> {

	id<SPContextMenuFeature> _contextMenuFeature;
	id<SPTPodcastFeature> _podcastFeature;
	SPTContextMenuViewController* _contextMenuViewController;
	SPTPopoverController* _popoverController;

}

@property (assign,nonatomic,__weak) id<SPContextMenuFeature> contextMenuFeature;                    //@synthesize contextMenuFeature=_contextMenuFeature - In the implementation block
@property (assign,nonatomic,__weak) id<SPTPodcastFeature> podcastFeature;                           //@synthesize podcastFeature=_podcastFeature - In the implementation block
@property (nonatomic,retain) SPTContextMenuViewController * contextMenuViewController;              //@synthesize contextMenuViewController=_contextMenuViewController - In the implementation block
@property (nonatomic,retain) SPTPopoverController * popoverController;                              //@synthesize popoverController=_popoverController - In the implementation block
-(id<SPContextMenuFeature>)contextMenuFeature;
-(void)setContextMenuFeature:(id<SPContextMenuFeature>)arg1 ;
-(id)logContext;
-(SPTContextMenuViewController *)contextMenuViewController;
-(void)setContextMenuViewController:(SPTContextMenuViewController *)arg1 ;
-(id<SPTPodcastFeature>)podcastFeature;
-(void)setPodcastFeature:(id<SPTPodcastFeature>)arg1 ;
-(void)showProgressViewInView:(id)arg1 followShow:(char)arg2 ;
-(void)presentContexMenuWithMetaDataView:(id)arg1 actions:(id)arg2 entityURL:(id)arg3 inViewController:(id)arg4 senderView:(id)arg5 ;
-(void)showProgressViewInView:(id)arg1 addedToCollection:(char)arg2 ;
-(void)showProgressViewInView:(id)arg1 title:(id)arg2 success:(char)arg3 ;
-(id)initWithContextMenuFeature:(id)arg1 podcastFeature:(id)arg2 ;
-(void)presentContexMenuForEpisode:(id)arg1 contextMenuDelegate:(id)arg2 inViewController:(id)arg3 senderView:(id)arg4 ;
-(void)presentContexMenuForShow:(id)arg1 enableOfflineEditing:(char)arg2 contextMenuDelegate:(id)arg3 inViewController:(id)arg4 senderView:(id)arg5 ;
-(void)showContextMenuMetadataViewShowMore:(id)arg1 ;
-(void)setPopoverController:(SPTPopoverController *)arg1 ;
-(SPTPopoverController *)popoverController;
@end

