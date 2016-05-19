/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:43 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Spotify/SPTWebAPIRequestDelegate.h>

@class NSString, NSDate, NSHashTable, SPTWebAPIRequestFactory, SPTWebAPIRequest;

@interface SPTWebTokenController : NSObject <SPTWebAPIRequestDelegate> {

	NSString* _accessTokenType;
	NSString* _accessToken;
	NSDate* _accessTokenEndTime;
	NSHashTable* _observers;
	SPTWebAPIRequestFactory* _requestFactory;
	SPTWebAPIRequest* _currentRequest;

}

@property (nonatomic,copy) NSString * accessTokenType;                              //@synthesize accessTokenType=_accessTokenType - In the implementation block
@property (nonatomic,copy) NSString * accessToken;                                  //@synthesize accessToken=_accessToken - In the implementation block
@property (nonatomic,copy) NSDate * accessTokenEndTime;                             //@synthesize accessTokenEndTime=_accessTokenEndTime - In the implementation block
@property (nonatomic,retain) NSHashTable * observers;                               //@synthesize observers=_observers - In the implementation block
@property (nonatomic,retain) SPTWebAPIRequestFactory * requestFactory;              //@synthesize requestFactory=_requestFactory - In the implementation block
@property (nonatomic,retain) SPTWebAPIRequest * currentRequest;                     //@synthesize currentRequest=_currentRequest - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(SPTWebAPIRequestFactory *)requestFactory;
-(void)setRequestFactory:(SPTWebAPIRequestFactory *)arg1 ;
-(NSDate *)accessTokenEndTime;
-(NSString *)accessTokenType;
-(void)notifyObserversWithAccessToken:(id)arg1 accessTokenType:(id)arg2 ;
-(void)notifyErrorToObservers:(id)arg1 ;
-(void)setAccessTokenType:(NSString *)arg1 ;
-(void)setAccessTokenEndTime:(NSDate *)arg1 ;
-(void)requestToken;
-(void)request:(id)arg1 didFinishLoadingData:(id)arg2 ;
-(void)request:(id)arg1 didFinishLoadingWithError:(id)arg2 ;
-(void)setCurrentRequest:(SPTWebAPIRequest *)arg1 ;
-(id)init;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)setObservers:(NSHashTable *)arg1 ;
-(NSHashTable *)observers;
-(SPTWebAPIRequest *)currentRequest;
-(NSString *)accessToken;
-(void)setAccessToken:(NSString *)arg1 ;
@end

