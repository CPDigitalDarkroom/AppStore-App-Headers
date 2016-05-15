/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:57 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Twitter/TFSAPIRequest.h>

@protocol TFSModelBuilder;
@interface TFSTwitterAPIEndpointRequest : TFSAPIRequest {

	id<TFSModelBuilder> _responseModelBuilder;

}

@property (nonatomic,readonly) id<TFSModelBuilder> responseModelBuilder;              //@synthesize responseModelBuilder=_responseModelBuilder - In the implementation block
+(char)isMultipartFormPostRequest;
+(int)expectedRequestAnatomy;
+(unsigned)baseURLType;
+(id)endpointPath;
+(unsigned)responseHydrationFlags;
+(unsigned)supportedAuthenticationTypes;
+(id)_hydratedHeaderFields:(id)arg1 withPolling:(char)arg2 ;
+(id)_hydratedRequestConfiguration;
+(id)_hydratedParameters:(id)arg1 withConfiguration:(id)arg2 ;
+(id)configuration;
+(id)HTTPMethod;
+(Class)responseClass;
-(id)initWithEndpointPath:(id)arg1 parameters:(id)arg2 multipartFormData:(id)arg3 bodyData:(id)arg4 bodyFilePath:(id)arg5 polling:(char)arg6 headerFields:(id)arg7 configuration:(id)arg8 responseModelBuilder:(id)arg9 emptyResponseDataExpected:(char)arg10 ;
-(id<TFSModelBuilder>)responseModelBuilder;
-(id)initWithHTTPMethod:(id)arg1 endpointURLString:(id)arg2 parameters:(id)arg3 multipartFormData:(id)arg4 bodyData:(id)arg5 bodyFilePath:(id)arg6 headerFields:(id)arg7 requestConfiguration:(id)arg8 emptyResponseDataExpected:(char)arg9 ;
-(id)objectWithResponseData:(id)arg1 headerFields:(id)arg2 error:(out id*)arg3 ;
-(id)HTTPMethod;
@end

