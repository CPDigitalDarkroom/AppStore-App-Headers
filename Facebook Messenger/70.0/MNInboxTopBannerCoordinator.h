/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:21:42 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MNQuickPromotionBannerToastPresenterDelegate.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBSessionClassProvidable.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MNInboxAppearanceEventListener.h>

@protocol FBQuickPromotionPhotoReminderPreferencesProviding;
@class FBUserSession, MNQuickPromotionBannerToastPresenter, MNSentimentSurveryNuxPresenter, MNRealtimeBannerStore, NSString;

@interface MNInboxTopBannerCoordinator : NSObject <MNQuickPromotionBannerToastPresenterDelegate, FBSessionClassProvidable, MNInboxAppearanceEventListener> {

	FBUserSession* _session;
	MNQuickPromotionBannerToastPresenter* _quickPromotionBannerToastPresenter;
	MNSentimentSurveryNuxPresenter* _sentimentSurveyNuxPresenter;
	MNRealtimeBannerStore* _realtimeBannerStore;
	int _numberOfTimesInboxAppeared;
	unsigned _unseenThreadCount;
	id<FBQuickPromotionPhotoReminderPreferencesProviding> _photoReminderPreferencesProvider;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(id)initWithSession:(id)arg1 sentimentSurveyNuxPresenter:(id)arg2 photoReminderPreferencesProvider:(id)arg3 realtimeBannerStore:(id)arg4 ;
-(void)_showNewBannerIfNeeded;
-(void)_inboxViewDidDisappear;
-(void)_showQPBannerIfNeeded;
-(void)_showSurveyIfNeeded;
-(char)_userReturnedToInbox;
-(void)quickPromotionBannerToastPresenterDidChangeVisibility:(id)arg1 ;
-(void)quickPromotionBannerToastPresenter:(id)arg1 didUnloadPromotion:(id)arg2 ;
-(void)configureWithToastPresenter:(id)arg1 ;
-(void)setUnseenThreadCount:(unsigned)arg1 ;
-(void)inboxDidDisplayThreadList;
-(void)inboxDidLoadThreadListDataModel;
-(void)inboxDidFailToLoadThreadListDataModel;
-(void)inboxViewAppearanceStateDidChangeTo:(unsigned)arg1 ;
-(void)dealloc;
@end

