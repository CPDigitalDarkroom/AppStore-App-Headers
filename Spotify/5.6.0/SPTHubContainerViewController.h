/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:36 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Spotify/SPViewController.h>
#import <Spotify/HUBViewControllerDelegate.h>
#import <Spotify/SPTNavigationControllerNavigationBarState.h>

@protocol HUBViewController, HUBViewModel;
@class UIViewController, NSURL, NSString;

@interface SPTHubContainerViewController : SPViewController <HUBViewControllerDelegate, SPTNavigationControllerNavigationBarState> {

	UIViewController*<HUBViewController> _contentViewController;
	NSURL* _viewURI;
	id<HUBViewModel> _viewModel;

}

@property (nonatomic,readonly) UIViewController*<HUBViewController> contentViewController;              //@synthesize contentViewController=_contentViewController - In the implementation block
@property (nonatomic,copy,readonly) NSURL * viewURI;                                                    //@synthesize viewURI=_viewURI - In the implementation block
@property (nonatomic,retain) id<HUBViewModel> viewModel;                                                //@synthesize viewModel=_viewModel - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)sp_updateContentInsets;
-(unsigned)preferredNavigationBarState;
-(NSURL *)viewURI;
-(id)initWithContentViewController:(id)arg1 viewURI:(id)arg2 ;
-(void)viewController:(id)arg1 didUpdateWithViewModel:(id)arg2 ;
-(id<HUBViewModel>)viewModel;
-(void)setViewModel:(id<HUBViewModel>)arg1 ;
-(void)viewWillLayoutSubviews;
-(UIViewController*<HUBViewController>)contentViewController;
-(void)viewDidLoad;
-(id)URI;
@end

