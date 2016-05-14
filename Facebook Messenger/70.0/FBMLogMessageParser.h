/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:02 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBClassProvidable.h>

@protocol MNAuthenticationManager;
@class NSString;

@interface FBMLogMessageParser : NSObject <FBClassProvidable> {

	id<MNAuthenticationManager> _authManager;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned)_callLogTypeForName:(id)arg1 ;
-(id)initWithProviderMapData:(id)arg1 ;
-(id)callLogForMessage:(id)arg1 ;
-(unsigned)paymentAdminTextTypeForMessage:(id)arg1 ;
-(id)threadNameForMessage:(id)arg1 ;
-(id)targetParticipantsForMessage:(id)arg1 ;
-(id)_phoneCallLogFromRegularMessage:(id)arg1 ;
-(id)_videoCallLogFromRegularMessage:(id)arg1 ;
-(id)_callLogFromMercuryMessage:(id)arg1 ;
-(id)_targetParticipantsFromActionMessage:(id)arg1 ;
-(id)_targetParticipantsFromMercuryMessage:(id)arg1 ;
-(unsigned)_paymentTypeFromRegularMessage:(id)arg1 ;
-(unsigned)_callLogTypeForCallerId:(id)arg1 answered:(char)arg2 ;
-(id)_fbidFromMercury:(id)arg1 ;
@end

