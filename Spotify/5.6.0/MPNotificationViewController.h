/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:37 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@protocol MPNotificationViewControllerDelegate;
@class MPNotification;

@interface MPNotificationViewController : UIViewController {

	MPNotification* _notification;
	id<MPNotificationViewControllerDelegate> _delegate;

}

@property (nonatomic,retain) MPNotification * notification;                                         //@synthesize notification=_notification - In the implementation block
@property (assign,nonatomic,__weak) id<MPNotificationViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)hideWithAnimation:(char)arg1 completion:(/*^block*/id)arg2 ;
-(void)setDelegate:(id<MPNotificationViewControllerDelegate>)arg1 ;
-(id<MPNotificationViewControllerDelegate>)delegate;
-(MPNotification *)notification;
-(void)setNotification:(MPNotification *)arg1 ;
@end

