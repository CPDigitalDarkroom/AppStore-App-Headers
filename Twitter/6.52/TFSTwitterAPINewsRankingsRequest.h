/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:56 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Twitter/TFSTwitterAPIEndpointRequest.h>

@interface TFSTwitterAPINewsRankingsRequest : TFSTwitterAPIEndpointRequest
+(id)endpointPath;
-(id)initWithType:(id)arg1 granularity:(id)arg2 countryCode:(id)arg3 lang:(id)arg4 fromDateInMSec:(id)arg5 toDateInMSec:(id)arg6 polling:(char)arg7 configuration:(id)arg8 responseModelBuilder:(id)arg9 ;
-(id)initWithEndpointPath:(id)arg1 parameters:(id)arg2 multipartFormData:(id)arg3 bodyData:(id)arg4 bodyFilePath:(id)arg5 polling:(char)arg6 headerFields:(id)arg7 configuration:(id)arg8 responseModelBuilder:(id)arg9 emptyResponseDataExpected:(char)arg10 ;
@end

