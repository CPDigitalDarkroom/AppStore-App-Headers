/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:40 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBUserSession, FBGraphQLMutationSecretary;

@interface FBGraphQLMutator : NSObject {

	FBUserSession* _session;
	FBGraphQLMutationSecretary* _secretary;

}
-(void)cancelMutation:(id)arg1 ;
-(void)performMutation:(id)arg1 ;
-(id)requestWithMutation:(id)arg1 ;
-(void)startMutation:(id)arg1 ;
-(id)initWithSession:(id)arg1 ;
@end

