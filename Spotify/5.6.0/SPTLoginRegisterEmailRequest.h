/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:37 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Spotify/SPTDataLoaderDelegate.h>

@protocol SPTLoginRegisterEmailRequestDelegate;
@class NSString, SPTDataLoader;

@interface SPTLoginRegisterEmailRequest : NSObject <SPTDataLoaderDelegate> {

	id<SPTLoginRegisterEmailRequestDelegate> _delegate;
	NSString* _endpointURL;
	NSString* _email;
	NSString* _market;
	NSString* _locale;
	SPTDataLoader* _dataLoader;

}

@property (assign,nonatomic,__weak) id<SPTLoginRegisterEmailRequestDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) NSString * endpointURL;                                         //@synthesize endpointURL=_endpointURL - In the implementation block
@property (nonatomic,copy,readonly) NSString * email;                                               //@synthesize email=_email - In the implementation block
@property (nonatomic,copy,readonly) NSString * market;                                              //@synthesize market=_market - In the implementation block
@property (nonatomic,copy,readonly) NSString * locale;                                              //@synthesize locale=_locale - In the implementation block
@property (nonatomic,readonly) SPTDataLoader * dataLoader;                                          //@synthesize dataLoader=_dataLoader - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(SPTDataLoader *)dataLoader;
-(void)dataLoader:(id)arg1 didReceiveSuccessfulResponse:(id)arg2 ;
-(void)dataLoader:(id)arg1 didReceiveErrorResponse:(id)arg2 ;
-(NSString *)endpointURL;
-(NSString *)market;
-(id)initWithEndpointURL:(id)arg1 email:(id)arg2 market:(id)arg3 locale:(id)arg4 dataLoader:(id)arg5 ;
-(void)setDelegate:(id<SPTLoginRegisterEmailRequestDelegate>)arg1 ;
-(id<SPTLoginRegisterEmailRequestDelegate>)delegate;
-(void)start;
-(NSString *)locale;
-(void)handleResponse:(id)arg1 ;
-(NSString *)email;
@end

