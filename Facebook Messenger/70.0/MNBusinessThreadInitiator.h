/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:21:53 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MNMessagesAppearanceEventListener.h>

@class FBUserSession, MNBusinessNavigationHandler, NSString;

@interface MNBusinessThreadInitiator : NSObject <MNMessagesAppearanceEventListener> {

	FBUserSession* _session;
	char _isInitiating;
	MNBusinessNavigationHandler* _navigationHandler;

}

@property (assign,nonatomic,__weak) MNBusinessNavigationHandler * navigationHandler;              //@synthesize navigationHandler=_navigationHandler - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)messagesViewWillBindToThreadViewModel:(id)arg1 isReusingViewController:(char)arg2 ;
-(void)messagesViewWillAppearWithThreadViewModel:(id)arg1 ;
-(void)messagesViewReadyToAppearWithThreadViewModel:(id)arg1 composerState:(id)arg2 ;
-(void)messagesViewDidAppearWithThreadViewModel:(id)arg1 ;
-(void)messagesViewDidOpenThreadViewModel:(id)arg1 ;
-(void)messagesViewWillUnbindFromThreadViewModel:(id)arg1 ;
-(void)messagesViewDidDisappear;
-(void)_applyServiceConfiguration:(id)arg1 ;
-(MNBusinessNavigationHandler *)navigationHandler;
-(void)setNavigationHandler:(MNBusinessNavigationHandler *)arg1 ;
-(void)_startThreadInitiationWithTermsWithAgentID:(id)arg1 ;
-(void)_startThreadInitiationWithBusinessPageID:(id)arg1 ;
-(void)_mutateLinkWithBusinessPageId:(id)arg1 isAgent:(char)arg2 ;
-(char)_hasAgreedTermsLocally;
-(void)_fetchLinkToPageID:(id)arg1 ;
-(void)_showTermsAlertWithAgentID:(id)arg1 ;
-(void)_buttonClickHandler:(unsigned)arg1 agentID:(id)arg2 ;
-(void)_processLinkCheckResults:(char)arg1 agentID:(id)arg2 ;
-(id)initWithSession:(id)arg1 ;
@end

