/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:18 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Spotify/SPTLoginWebAuthTokenRequestDelegate.h>

@class SPTLoginWebAuthTokenRequest, SPTCoreTime, NSString;

@interface SPTWebAuthController : NSObject <SPTLoginWebAuthTokenRequestDelegate> {

	SPTLoginWebAuthTokenRequest* _request;
	SPTCoreTime* _coreTime;

}

@property (nonatomic,retain) SPTLoginWebAuthTokenRequest * request;              //@synthesize request=_request - In the implementation block
@property (assign,nonatomic,__weak) SPTCoreTime * coreTime;                      //@synthesize coreTime=_coreTime - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(SPTCoreTime *)coreTime;
-(void)webAuthTokenRequestDidStart:(id)arg1 ;
-(void)webAuthTokenRequest:(id)arg1 didFinishWithURL:(id)arg2 ;
-(void)webAuthTokenRequest:(id)arg1 didFailWithError:(id)arg2 ;
-(id)initWithCoreTime:(id)arg1 ;
-(void)handleWebAuthForURL:(id)arg1 ;
-(void)setCoreTime:(SPTCoreTime *)arg1 ;
-(SPTLoginWebAuthTokenRequest *)request;
-(void)setRequest:(SPTLoginWebAuthTokenRequest *)arg1 ;
@end

