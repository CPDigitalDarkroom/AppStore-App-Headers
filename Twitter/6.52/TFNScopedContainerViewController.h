/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:55 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TFNUI/TFNViewController.h>

@protocol TFNScopedContainerViewControllerDelegate;
@class NSMutableArray, UIViewController, NSArray;

@interface TFNScopedContainerViewController : TFNViewController {

	NSMutableArray* _scopeBarItems;
	NSMutableArray* _viewControllers;
	char _scopeBarHidden;
	id<TFNScopedContainerViewControllerDelegate> _delegate;
	UIViewController* _selectedViewController;
	unsigned _selectedViewControllerIndex;

}

@property (assign,nonatomic,__weak) id<TFNScopedContainerViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSArray * viewControllers;                                                   //@synthesize viewControllers=_viewControllers - In the implementation block
@property (nonatomic,retain) UIViewController * selectedViewController;                                 //@synthesize selectedViewController=_selectedViewController - In the implementation block
@property (assign,nonatomic) unsigned selectedViewControllerIndex;                                      //@synthesize selectedViewControllerIndex=_selectedViewControllerIndex - In the implementation block
@property (assign,getter=isScopeBarHidden,nonatomic) char scopeBarHidden;                               //@synthesize scopeBarHidden=_scopeBarHidden - In the implementation block
-(id)scribePage;
-(id)scribeSection;
-(void)setScopeBarHidden:(char)arg1 ;
-(unsigned)selectedViewControllerIndex;
-(void)_updateScopeBarSegmentsAnimated:(char)arg1 ;
-(int)_numberOfSegments;
-(id)_titleForSegmentAtIndex:(int)arg1 ;
-(void)_scopedBarItemTapped:(id)arg1 ;
-(void)_updateScopeBarState;
-(id)_viewControllerForIndex:(int)arg1 ;
-(void)_updateSelectedViewController;
-(char)isScopeBarHidden;
-(void)tfn_addDirectlyOwnedViewControllersToMutableArray:(id)arg1 ;
-(char)tfn_prefersNavigationBarShadowHidden;
-(id)scribe;
-(void)setDelegate:(id<TFNScopedContainerViewControllerDelegate>)arg1 ;
-(id)init;
-(id<TFNScopedContainerViewControllerDelegate>)delegate;
-(void)viewDidLoad;
-(NSArray *)viewControllers;
-(void)setViewControllers:(NSArray *)arg1 ;
-(UIViewController *)selectedViewController;
-(void)setSelectedViewController:(UIViewController *)arg1 ;
-(void)setSelectedViewControllerIndex:(unsigned)arg1 ;
@end

