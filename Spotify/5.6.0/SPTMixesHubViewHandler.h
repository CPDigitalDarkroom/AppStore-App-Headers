/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:44 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Spotify/Spotify-Structs.h>
#import <Spotify/SPTHubViewHandler.h>

@protocol SPTHubViewHandlerDelegate;
@class NSString;

@interface SPTMixesHubViewHandler : NSObject <SPTHubViewHandler> {

	id<SPTHubViewHandlerDelegate> _delegate;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<SPTHubViewHandlerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)prefixViewForHubItemAtIndexPath:(SPTHubIndexPath)arg1 ;
-(id)metaDataPrefixViewForHubItemAtIndexPath:(SPTHubIndexPath)arg1 viewURI:(id)arg2 ;
-(id)overlayViewForHubItem:(id)arg1 atIndexPath:(SPTHubIndexPath)arg2 itemViewSize:(CGSize)arg3 ;
-(char)handleSelectionForHubItem:(id)arg1 atIndexPath:(SPTHubIndexPath)arg2 viewController:(id)arg3 ;
-(void)handleHubDidFinishLoadingContentForViewURI:(id)arg1 ;
-(id)infoViewForEmptyHubWithViewURI:(id)arg1 viewController:(id)arg2 ;
-(char)handleHubHeaderButtonPressWithTargetURL:(id)arg1 viewController:(id)arg2 ;
-(char)handleHubBlockHeaderAccessoryButtonPress:(id)arg1 withTargetURL:(id)arg2 viewController:(id)arg3 ;
-(id)rightNavigationBarButtonItemViewForHubWithViewURI:(id)arg1 ;
-(char)voiceCommandButtonWantedForViewURI:(id)arg1 ;
-(int)stackedNavigationPageSizeForHubWithViewURI:(id)arg1 isRootView:(char)arg2 ;
-(UIEdgeInsets)insetsForHubBlockAtIndex:(unsigned)arg1 ;
-(void)setDelegate:(id<SPTHubViewHandlerDelegate>)arg1 ;
-(id<SPTHubViewHandlerDelegate>)delegate;
@end

