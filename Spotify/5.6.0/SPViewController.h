/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:18 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Spotify/SPViewController.h>
#import <Spotify/SPContentInsetViewController.h>

@class UIViewController, SPTViewLogger, NSString;

@interface SPViewController : UIViewController <SPViewController, SPContentInsetViewController> {

	UIViewController* _spParentViewController;
	SPTViewLogger* _viewLogger;
	char automaticallyAdjustsScrollViewInsets;

}

@property (getter=isVisible,nonatomic,readonly) char visible; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) char automaticallyAdjustsScrollViewInsets; 
-(void)sp_updateContentInsets;
-(char)shouldLogViewEvent;
-(void)childViewControllerViewDidLayoutSubviews;
-(void)childViewControllerViewWillLayoutSubviews;
-(id)viewLogger;
-(char)shouldRemoveAllNotificationObserversInViewWillDisappear;
-(void)viewWillLayoutSubviews;
-(void)viewDidLayoutSubviews;
-(id)navigationController;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(char)automaticallyAdjustsScrollViewInsets;
-(void)setAutomaticallyAdjustsScrollViewInsets:(char)arg1 ;
-(char)isVisible;
-(id)URI;
@end

