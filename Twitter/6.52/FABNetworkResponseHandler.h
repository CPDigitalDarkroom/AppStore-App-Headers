/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:57 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FABNetworkResponseHandler : NSObject
+(void)clientResponseType:(id)arg1 handler:(/*^block*/id)arg2 ;
+(double)retryValueForResponse:(id)arg1 ;
+(void)handleCompletedResponse:(id)arg1 forOriginalRequest:(id)arg2 error:(id)arg3 block:(/*^block*/id)arg4 ;
+(id)headerForResponse:(id)arg1 withKey:(id)arg2 ;
+(id)requestIdForResponse:(id)arg1 ;
+(id)errorForCode:(int)arg1 userInfo:(id)arg2 ;
+(id)errorForResponse:(id)arg1 ofType:(int)arg2 status:(int)arg3 ;
+(char)contentTypeForResponse:(id)arg1 matchesRequest:(id)arg2 ;
@end

