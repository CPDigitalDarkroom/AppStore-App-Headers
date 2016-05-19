/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:30 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Spotify/Spotify-Structs.h>
#import <Spotify/RAPIEntertainmentAppLinkDelegate.h>
#import <Spotify/AlertControllerDelegate.h>

@protocol ExternalContentProvider, SPTExternalContentProvider;
@class RAPIEntertainmentAppLink, SPTBMWLoggedInSession, NSString;

@interface SPTBMWSession : NSObject <RAPIEntertainmentAppLinkDelegate, AlertControllerDelegate> {

	char _appLinkIsConnected;
	char _userIsLoggedIn;
	RAPIEntertainmentAppLink* _bmwAppLink;
	id<ExternalContentProvider> _externalContentFeature;
	id<SPTExternalContentProvider> _externalContent;
	SPTBMWLoggedInSession* _loggedInSession;
	NSString* _modelNameForAnalytics;
	int _connectedAccessoryId;

}

@property (nonatomic,retain) RAPIEntertainmentAppLink * bmwAppLink;                           //@synthesize bmwAppLink=_bmwAppLink - In the implementation block
@property (nonatomic,retain) id<ExternalContentProvider> externalContentFeature;              //@synthesize externalContentFeature=_externalContentFeature - In the implementation block
@property (nonatomic,retain) id<SPTExternalContentProvider> externalContent;                  //@synthesize externalContent=_externalContent - In the implementation block
@property (nonatomic,retain) SPTBMWLoggedInSession * loggedInSession;                         //@synthesize loggedInSession=_loggedInSession - In the implementation block
@property (assign,nonatomic) char appLinkIsConnected;                                         //@synthesize appLinkIsConnected=_appLinkIsConnected - In the implementation block
@property (assign,nonatomic) char userIsLoggedIn;                                             //@synthesize userIsLoggedIn=_userIsLoggedIn - In the implementation block
@property (nonatomic,copy) NSString * modelNameForAnalytics;                                  //@synthesize modelNameForAnalytics=_modelNameForAnalytics - In the implementation block
@property (assign,nonatomic) int connectedAccessoryId;                                        //@synthesize connectedAccessoryId=_connectedAccessoryId - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedSession;
-(char)alertControllerShouldDisplayAlert:(id)arg1 ;
-(int)getGroupCountForScreen:(int)arg1 ;
-(id)getGroupLabelForGroup:(int)arg1 forScreen:(int)arg2 ;
-(int)getItemCountForGroup:(int)arg1 forScreen:(int)arg2 ;
-(id)getStringForLine:(int)arg1 forRow:(int)arg2 forGroup:(int)arg3 forScreen:(int)arg4 ;
-(int)getTargetScreenForRow:(int)arg1 forGroup:(int)arg2 forScreen:(int)arg3 ;
-(id)getTitleForScreen:(int)arg1 ;
-(void)onScreenChangedFrom:(int)arg1 to:(int)arg2 withClickedItemIndex:(int)arg3 andGroupIndex:(int)arg4 ;
-(id)getMoreLabelForGroup:(int)arg1 forScreen:(int)arg2 ;
-(void)onSearchStringChanged:(id)arg1 forSearchScreen:(int)arg2 ;
-(void)handleOnItemClicked:(id)arg1 ;
-(void)onStartPlayback;
-(void)onPausePlayback;
-(void)onSkipPrev;
-(void)onSkipNext;
-(void)onBeginSeekBackward;
-(void)onBeginSeekForward;
-(void)onEndSeek;
-(void)onConnectedToCar:(id)arg1 ;
-(void)onDisconnectedFromCar;
-(void)onTextLog:(id)arg1 source:(int)arg2 ;
-(int)getCurrentTrackTime;
-(int)getTotalTrackTime;
-(float)getCurrentTrackProgress;
-(void)onCarLanguageChanged:(id)arg1 ;
-(char)canProvideDataImmediately:(int)arg1 ;
-(id)getLoadingLabelForScreen:(int)arg1 ;
-(id)getImageForRow:(int)arg1 forGroup:(int)arg2 withPreferredSize:(CGSize)arg3 forScreen:(int)arg4 ;
-(char)isMasterOptionButtonCheckedForScreen:(int)arg1 ;
-(void)loginWithExternalContentFeature:(id)arg1 ;
-(void)setConnectedAccessoryId:(int)arg1 ;
-(void)handleBMWURLHandledNotification:(id)arg1 ;
-(void)setUserIsLoggedIn:(char)arg1 ;
-(void)setExternalContentFeature:(id<ExternalContentProvider>)arg1 ;
-(void)fetchExternalContentAndSwitchToLoggedInSessionIfNeeded;
-(void)handleLogoutOrDisconnect;
-(SPTBMWLoggedInSession *)loggedInSession;
-(char)userIsLoggedIn;
-(id<ExternalContentProvider>)externalContentFeature;
-(void)setLoggedInSession:(SPTBMWLoggedInSession *)arg1 ;
-(void)applyDisabledUI;
-(void)setModelNameForAnalytics:(NSString *)arg1 ;
-(int)connectedAccessoryId;
-(NSString *)modelNameForAnalytics;
-(id<SPTExternalContentProvider>)externalContent;
-(void)setBmwAppLink:(RAPIEntertainmentAppLink *)arg1 ;
-(void)setExternalContent:(id<SPTExternalContentProvider>)arg1 ;
-(RAPIEntertainmentAppLink *)bmwAppLink;
-(char)appLinkIsConnected;
-(void)setAppLinkIsConnected:(char)arg1 ;
-(void)dealloc;
-(id)init;
-(void)logout;
@end

