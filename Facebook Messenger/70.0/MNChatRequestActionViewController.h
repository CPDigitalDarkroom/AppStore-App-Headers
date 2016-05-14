/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:21:44 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MNChatRequestActionViewDelegate.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBClassProvidable.h>

@class MNChatRequestActionView, MNThreadSummaryUpdateRunningService, FBUserSession, MNNavigationCoordinator, UIAlertController, FBAnalytics, FBMThreadSummary, NSString;

@interface MNChatRequestActionViewController : UIViewController <MNChatRequestActionViewDelegate, FBClassProvidable> {

	MNChatRequestActionView* _requestView;
	MNThreadSummaryUpdateRunningService* _updateRunner;
	char _hideReplyButton;
	FBUserSession* _session;
	MNNavigationCoordinator* _navigationCoordinator;
	UIAlertController* _declineAlertController;
	FBAnalytics* _analytics;
	FBMThreadSummary* _threadSummary;

}

@property (nonatomic,copy) FBMThreadSummary * threadSummary;              //@synthesize threadSummary=_threadSummary - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(FBMThreadSummary *)threadSummary;
-(id)initWithSummaryUpdateRunner:(id)arg1 session:(id)arg2 navigationCoordinator:(id)arg3 analytics:(id)arg4 ;
-(void)_deleteChatRequest;
-(void)_cancelAlertController;
-(void)requestActionViewDidPressAccept:(id)arg1 ;
-(void)requestActionViewDidPressDecline:(id)arg1 ;
-(void)requestActionViewDidPressIgnore:(id)arg1 ;
-(void)setThreadSummary:(FBMThreadSummary *)arg1 ;
-(void)setHidesReplyButton:(char)arg1 ;
-(void)loadView;
@end

