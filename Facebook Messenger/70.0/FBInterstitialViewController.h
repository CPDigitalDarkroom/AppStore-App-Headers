/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:39 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBInterstitialViewControlling.h>

@class FBInterstitialView, NSString;

@interface FBInterstitialViewController : UIViewController <FBInterstitialViewControlling> {

	char _didHideStatusBar;
	char _showStatusBar;

}

@property (nonatomic,readonly) FBInterstitialView * interstitialView; 
@property (assign,nonatomic) char showStatusBar;                                   //@synthesize showStatusBar=_showStatusBar - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setShowStatusBar:(char)arg1 ;
-(void)loadView;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(FBInterstitialView *)interstitialView;
-(char)showStatusBar;
@end

