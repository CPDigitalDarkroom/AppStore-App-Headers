/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:47 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Spotify/SPTTelcoActivationOrderTokenRequestFactory.h>
#import <Spotify/SPTTelcoActivationOrderTokenRequestDelegate.h>
#import <Spotify/SPTTelcoActivationProductActivationRequestDelegate.h>

@protocol SPTTelcoActivationControllerDelegate, SPTTelcoActivationOrderTokenRequestFactory, SPTTelcoActivationProductActivationRequestFactory;
@class NSArray, SPTTelcoActivationPrerequisites, CTTelephonyNetworkInfo, SPTTelcoActivationLogger, SPTTelcoActivationDelayManager, NSMapTable, NSMutableArray, NSString;

@interface SPTTelcoActivationController : NSObject <SPTTelcoActivationOrderTokenRequestFactory, SPTTelcoActivationOrderTokenRequestDelegate, SPTTelcoActivationProductActivationRequestDelegate> {

	id<SPTTelcoActivationControllerDelegate> _delegate;
	NSArray* _operators;
	SPTTelcoActivationPrerequisites* _prerequisites;
	CTTelephonyNetworkInfo* _telephonyNetworkInfo;
	id<SPTTelcoActivationOrderTokenRequestFactory> _orderTokenRequestFactory;
	id<SPTTelcoActivationProductActivationRequestFactory> _productActivationRequestFactory;
	SPTTelcoActivationLogger* _logger;
	SPTTelcoActivationDelayManager* _delayManager;
	NSMapTable* _tokenRequests;
	NSMutableArray* _productActivationRequests;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<SPTTelcoActivationControllerDelegate> delegate;                                           //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) NSArray * operators;                                                                         //@synthesize operators=_operators - In the implementation block
@property (nonatomic,readonly) SPTTelcoActivationPrerequisites * prerequisites;                                                  //@synthesize prerequisites=_prerequisites - In the implementation block
@property (nonatomic,retain) CTTelephonyNetworkInfo * telephonyNetworkInfo;                                                      //@synthesize telephonyNetworkInfo=_telephonyNetworkInfo - In the implementation block
@property (nonatomic,retain) id<SPTTelcoActivationOrderTokenRequestFactory> orderTokenRequestFactory;                            //@synthesize orderTokenRequestFactory=_orderTokenRequestFactory - In the implementation block
@property (nonatomic,retain) id<SPTTelcoActivationProductActivationRequestFactory> productActivationRequestFactory;              //@synthesize productActivationRequestFactory=_productActivationRequestFactory - In the implementation block
@property (nonatomic,retain) SPTTelcoActivationLogger * logger;                                                                  //@synthesize logger=_logger - In the implementation block
@property (nonatomic,retain) SPTTelcoActivationDelayManager * delayManager;                                                      //@synthesize delayManager=_delayManager - In the implementation block
@property (nonatomic,retain) NSMapTable * tokenRequests;                                                                         //@synthesize tokenRequests=_tokenRequests - In the implementation block
@property (nonatomic,retain) NSMutableArray * productActivationRequests;                                                         //@synthesize productActivationRequests=_productActivationRequests - In the implementation block
-(void)prerequisiteSatisfactionDidUpdate;
-(CTTelephonyNetworkInfo *)telephonyNetworkInfo;
-(NSMapTable *)tokenRequests;
-(NSMutableArray *)productActivationRequests;
-(SPTTelcoActivationPrerequisites *)prerequisites;
-(SPTTelcoActivationDelayManager *)delayManager;
-(char)isBusyProcessingRequests;
-(id)currentOperator;
-(void)startRequestingOrderTokenForOperator:(id)arg1 ;
-(id<SPTTelcoActivationOrderTokenRequestFactory>)orderTokenRequestFactory;
-(id)orderTokenRequestWithOperatorModel:(id)arg1 delegate:(id)arg2 ;
-(id<SPTTelcoActivationProductActivationRequestFactory>)productActivationRequestFactory;
-(id)currentNetworkOperatorIdentifier;
-(id)identifierForCarrier:(id)arg1 ;
-(void)startActivatingProductForOperator:(id)arg1 tokenResponse:(id)arg2 ;
-(void)setTelephonyNetworkInfo:(CTTelephonyNetworkInfo *)arg1 ;
-(void)setOrderTokenRequestFactory:(id<SPTTelcoActivationOrderTokenRequestFactory>)arg1 ;
-(void)setProductActivationRequestFactory:(id<SPTTelcoActivationProductActivationRequestFactory>)arg1 ;
-(void)setDelayManager:(SPTTelcoActivationDelayManager *)arg1 ;
-(void)setTokenRequests:(NSMapTable *)arg1 ;
-(void)setProductActivationRequests:(NSMutableArray *)arg1 ;
-(void)activationRequestDidStart:(id)arg1 ;
-(void)activationRequest:(id)arg1 didFailWithError:(id)arg2 ;
-(void)activationRequestDidFinish:(id)arg1 ;
-(void)orderTokenRequest:(id)arg1 didFinishWithOrderToken:(id)arg2 responseData:(id)arg3 ;
-(void)orderTokenRequest:(id)arg1 didFailWithError:(id)arg2 ;
-(void)orderTokenRequestDidStart:(id)arg1 ;
-(id)initWithOperators:(id)arg1 prerequisites:(id)arg2 telephonyNetworkInfo:(id)arg3 orderTokenRequestFactory:(id)arg4 productActivationRequestFactory:(id)arg5 logger:(id)arg6 delayManager:(id)arg7 ;
-(SPTTelcoActivationLogger *)logger;
-(void)setLogger:(SPTTelcoActivationLogger *)arg1 ;
-(void)cancelAllRequests;
-(void)setDelegate:(id<SPTTelcoActivationControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<SPTTelcoActivationControllerDelegate>)delegate;
-(void)invalidate;
-(NSArray *)operators;
@end

