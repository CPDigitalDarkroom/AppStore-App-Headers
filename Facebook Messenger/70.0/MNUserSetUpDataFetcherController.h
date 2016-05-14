/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:21:49 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MNUserSetUpDataFetcherDelegate.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBClassProvidable.h>

@protocol MNUserSetUpDataFetcherControllerDelegate, FBProvider;
@class FBUserSession, FBMLoggedInUserInfoManager, MNCDNProfileImageDownloader, MNUserSetUpDataFetcher, NSString;

@interface MNUserSetUpDataFetcherController : NSObject <MNUserSetUpDataFetcherDelegate, FBClassProvidable> {

	id<MNUserSetUpDataFetcherControllerDelegate> _delegate;
	FBUserSession* _session;
	FBMLoggedInUserInfoManager* _loggedInUserInfoManager;
	id<FBProvider> _loggedInUserFetcherProvider;
	id<FBProvider> _userSetUpFlowConfiguratorProvider;
	MNCDNProfileImageDownloader* _profileImageDownloader;
	MNUserSetUpDataFetcher* _userDataFetcher;

}

@property (nonatomic,retain) FBUserSession * session;                                                   //@synthesize session=_session - In the implementation block
@property (nonatomic,retain) FBMLoggedInUserInfoManager * loggedInUserInfoManager;                      //@synthesize loggedInUserInfoManager=_loggedInUserInfoManager - In the implementation block
@property (nonatomic,retain) id<FBProvider> loggedInUserFetcherProvider;                                //@synthesize loggedInUserFetcherProvider=_loggedInUserFetcherProvider - In the implementation block
@property (nonatomic,retain) id<FBProvider> userSetUpFlowConfiguratorProvider;                          //@synthesize userSetUpFlowConfiguratorProvider=_userSetUpFlowConfiguratorProvider - In the implementation block
@property (nonatomic,retain) MNCDNProfileImageDownloader * profileImageDownloader;                      //@synthesize profileImageDownloader=_profileImageDownloader - In the implementation block
@property (nonatomic,retain) MNUserSetUpDataFetcher * userDataFetcher;                                  //@synthesize userDataFetcher=_userDataFetcher - In the implementation block
@property (assign,nonatomic,__weak) id<MNUserSetUpDataFetcherControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(FBMLoggedInUserInfoManager *)loggedInUserInfoManager;
-(void)setLoggedInUserInfoManager:(FBMLoggedInUserInfoManager *)arg1 ;
-(void)startUserDataFetching;
-(void)userSetUpDataFetcher:(id)arg1 didFailWithError:(id)arg2 ;
-(void)userSetUpDataFetcher:(id)arg1 didFetchUserData:(id)arg2 ;
-(id)initWithSession:(id)arg1 profileImageDownloader:(id)arg2 loggedInUserInfoManager:(id)arg3 loggedInUserFetcherProvider:(id)arg4 ;
-(void)setUserDataFetcher:(MNUserSetUpDataFetcher *)arg1 ;
-(id<FBProvider>)loggedInUserFetcherProvider;
-(void)setLoggedInUserFetcherProvider:(id<FBProvider>)arg1 ;
-(id<FBProvider>)userSetUpFlowConfiguratorProvider;
-(void)setUserSetUpFlowConfiguratorProvider:(id<FBProvider>)arg1 ;
-(MNUserSetUpDataFetcher *)userDataFetcher;
-(MNCDNProfileImageDownloader *)profileImageDownloader;
-(void)setProfileImageDownloader:(MNCDNProfileImageDownloader *)arg1 ;
-(FBUserSession *)session;
-(void)setDelegate:(id<MNUserSetUpDataFetcherControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<MNUserSetUpDataFetcherControllerDelegate>)delegate;
-(void)setSession:(FBUserSession *)arg1 ;
@end

