/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:21:45 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MNMessagesAppearanceEventListener.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBSessionClassProvidable.h>

@class MNPageResponsivenessUpdater, NSString;

@interface MNPageResponsivenessUpdateTriggeringAdapter : NSObject <MNMessagesAppearanceEventListener, FBSessionClassProvidable> {

	MNPageResponsivenessUpdater* _updater;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)messagesViewWillBindToThreadViewModel:(id)arg1 isReusingViewController:(char)arg2 ;
-(void)messagesViewWillAppearWithThreadViewModel:(id)arg1 ;
-(void)messagesViewReadyToAppearWithThreadViewModel:(id)arg1 composerState:(id)arg2 ;
-(void)messagesViewDidAppearWithThreadViewModel:(id)arg1 ;
-(void)messagesViewDidOpenThreadViewModel:(id)arg1 ;
-(void)messagesViewWillUnbindFromThreadViewModel:(id)arg1 ;
-(void)messagesViewDidDisappear;
-(id)initWithUpdater:(id)arg1 ;
@end

