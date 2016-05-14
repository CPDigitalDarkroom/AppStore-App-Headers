/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:21:41 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIAlertViewDelegate.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBClassProvidable.h>

@protocol FBProvider;
@class MNThreadParticipantNameFormatter, FBMUser, NSString;

@interface MNMessageSendNotEligibleAlertController : NSObject <UIAlertViewDelegate, FBClassProvidable> {

	MNThreadParticipantNameFormatter* _nameFormatter;
	id<FBProvider> _userBlockerProvider;
	FBMUser* _userToUnblock;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(id)initWithNameFormatter:(id)arg1 userBlockerProvider:(id)arg2 ;
-(void)_showNotReceivingMessagesAlert:(id)arg1 ;
-(void)_showMultipleNotReceivingMessagesAlert;
-(void)_showUnblockMessagesAlertForOtherUser:(id)arg1 ;
-(void)_showUnblockOnFacebookAlertForOtherUser:(id)arg1 ;
-(char)shouldShowSendNotEligibleAlertForViewModel:(id)arg1 ;
-(void)showSendNotEligibleAlertForViewModel:(id)arg1 ;
-(char)shouldShowForNewThreadWithPickedUsers:(id)arg1 experimentManager:(id)arg2 ;
-(void)showSendNotEligibleAlertForNewThreadWithPickedUsers:(id)arg1 ;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2 ;
@end

