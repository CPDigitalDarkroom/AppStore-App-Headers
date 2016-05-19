/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:30 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSURLSessionTaskDelegate.h>
#import <libobjc.A.dylib/NSURLSessionDataDelegate.h>

@class SPTAuthAccountsRequest, NSHTTPCookie, NSMutableData, NSString;

@interface SPTAuthAccountsPreFlightRequest : NSObject <NSURLSessionTaskDelegate, NSURLSessionDataDelegate> {

	SPTAuthAccountsRequest* _request;
	/*^block*/id _callback;
	NSHTTPCookie* _cookie;
	NSMutableData* _responseData;

}

@property (nonatomic,readonly) SPTAuthAccountsRequest * request;              //@synthesize request=_request - In the implementation block
@property (nonatomic,copy,readonly) id callback;                              //@synthesize callback=_callback - In the implementation block
@property (nonatomic,retain) NSHTTPCookie * cookie;                           //@synthesize cookie=_cookie - In the implementation block
@property (nonatomic,retain) NSMutableData * responseData;                    //@synthesize responseData=_responseData - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithRequest:(id)arg1 withCookie:(id)arg2 withCallback:(/*^block*/id)arg3 ;
-(void)parseRedirectRequestAndCallback:(id)arg1 ;
-(id)getErrorUrl:(id)arg1 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3 ;
-(void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(void)setCookie:(NSHTTPCookie *)arg1 ;
-(SPTAuthAccountsRequest *)request;
-(void)performRequest;
-(NSMutableData *)responseData;
-(void)setResponseData:(NSMutableData *)arg1 ;
-(id)callback;
-(NSHTTPCookie *)cookie;
@end

