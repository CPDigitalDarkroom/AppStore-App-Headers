/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:39 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Spotify/Spotify-Structs.h>
#import <UIKit/UIViewController.h>
#import <Spotify/SPTNowPlayingNavigationBarModelObserver.h>
#import <Spotify/SPTNowPlayingContainedViewController.h>

@protocol SPTNowPlayingTitleViewPresenterRegistry;
@class SPTNowPlayingNavigationBarView, SPTNowPlayingNavigationBarModel, SPTTheme, SPTLogCenter, NSString;

@interface SPTNowPlayingNavigationBarViewController : UIViewController <SPTNowPlayingNavigationBarModelObserver, SPTNowPlayingContainedViewController> {

	SPTNowPlayingNavigationBarView* _navigationBarView;
	SPTNowPlayingNavigationBarModel* _navigationBarModel;
	SPTTheme* _theme;
	SPTLogCenter* _logCenter;
	id<SPTNowPlayingTitleViewPresenterRegistry> _titleViewPresenterRegistry;

}

@property (nonatomic,retain) SPTNowPlayingNavigationBarView * navigationBarView;                                     //@synthesize navigationBarView=_navigationBarView - In the implementation block
@property (nonatomic,retain) SPTNowPlayingNavigationBarModel * navigationBarModel;                                   //@synthesize navigationBarModel=_navigationBarModel - In the implementation block
@property (nonatomic,retain) SPTTheme * theme;                                                                       //@synthesize theme=_theme - In the implementation block
@property (assign,nonatomic,__weak) SPTLogCenter * logCenter;                                                        //@synthesize logCenter=_logCenter - In the implementation block
@property (nonatomic,retain) id<SPTNowPlayingTitleViewPresenterRegistry> titleViewPresenterRegistry;                 //@synthesize titleViewPresenterRegistry=_titleViewPresenterRegistry - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) UIViewController*<SPTNowPlayingContainingViewController> container; 
-(SPTLogCenter *)logCenter;
-(void)setLogCenter:(SPTLogCenter *)arg1 ;
-(unsigned)leadingEdge;
-(float)viewControllerPriority;
-(id<SPTNowPlayingTitleViewPresenterRegistry>)titleViewPresenterRegistry;
-(void)setNavigationBarView:(SPTNowPlayingNavigationBarView *)arg1 ;
-(SPTNowPlayingNavigationBarView *)navigationBarView;
-(void)contextButtonClicked:(id)arg1 ;
-(void)updateNavigationBarTitle;
-(SPTNowPlayingNavigationBarModel *)navigationBarModel;
-(id)defaultFadeTransition;
-(void)modelStateDidChanged;
-(id)initWithNavigationBarModel:(id)arg1 theme:(id)arg2 logCenter:(id)arg3 titleViewPresenterRegistry:(id)arg4 ;
-(void)setNavigationBarModel:(SPTNowPlayingNavigationBarModel *)arg1 ;
-(void)setTitleViewPresenterRegistry:(id<SPTNowPlayingTitleViewPresenterRegistry>)arg1 ;
-(void)dealloc;
-(void)loadView;
-(CGSize)preferredContentSize;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(SPTTheme *)theme;
-(void)setTheme:(SPTTheme *)arg1 ;
@end

