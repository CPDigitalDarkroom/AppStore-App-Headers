/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:29 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TFNHybridRetryPolicyProvider <TFNHTTPRequestRetryPolicyProvider,TNLRequestRetryPolicyProvider>
@optional
-(double)idleTimeoutOfRetryForHTTPRequest:(id)arg1 orRequestOperation:(id)arg2 withResponse:(id)arg3;

@required
-(char)shouldRetryHTTPRequest:(id)arg1 orRequestOperation:(id)arg2 withResponse:(id)arg3;
-(double)delayBeforeRetryForHTTPRequest:(id)arg1 orRequestOperation:(id)arg2 withResponse:(id)arg3;
-(void)willBeginRetryForHTTPRequest:(id)arg1 orRequestOperation:(id)arg2 withResponse:(id)arg3 afterDelay:(double)arg4;
-(void)didBeginRetryForHTTPRequest:(id)arg1 orRequestOperation:(id)arg2 withResponse:(id)arg3;

@end

