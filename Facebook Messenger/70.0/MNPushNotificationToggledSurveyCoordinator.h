/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:21:47 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBRapidFeedbackSurveyManagerDelegate.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MNServiceControllable.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBSessionClassProvidable.h>

@class FBUserSession, MNNavigationCoordinator, FBRapidFeedbackSurveyManager, FBRapidFeedbackController, NSNotificationCenter, NSString;

@interface MNPushNotificationToggledSurveyCoordinator : NSObject <FBRapidFeedbackSurveyManagerDelegate, MNServiceControllable, FBSessionClassProvidable> {

	FBUserSession* _session;
	MNNavigationCoordinator* _navigationCoordinator;
	FBRapidFeedbackSurveyManager* _surveyManager;
	FBRapidFeedbackController* _rapidFeedbackController;
	NSNotificationCenter* _notificationCenter;
	char _isObservingEligibility;
	char _previousPushStateIsOn;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)_showSurvey;
-(void)surveyManager:(id)arg1 shouldDismiss:(char)arg2 ;
-(id)initWithSession:(id)arg1 navigationCoordinator:(id)arg2 rapidFeedbackController:(id)arg3 notificationCenter:(id)arg4 ;
-(void)_pushTurnedOn;
-(void)_pushTurnedOff;
-(void)dealloc;
-(void)stop;
-(void)start:(id)arg1 ;
-(void)handleIdle;
@end

