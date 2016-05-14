/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:23:05 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBRequestConnectionRetryManagerDelegate;
@class FBRequestConnection, FBSession, NSString, NSMutableArray, FBRequestConnectionRetryManagerAlertViewHelper;

@interface FBRequestConnectionRetryManager : NSObject {

	FBRequestConnection*<FBRequestConnectionRetryManagerDelegate> _requestConnection;
	unsigned _state;
	FBSession* _sessionToReconnect;
	NSString* _alertMessage;
	NSMutableArray* _requestMetadatas;
	FBRequestConnectionRetryManagerAlertViewHelper* _alertViewHelper;

}

@property (nonatomic,retain) NSMutableArray * requestMetadatas;                                                            //@synthesize requestMetadatas=_requestMetadatas - In the implementation block
@property (nonatomic,retain) FBRequestConnectionRetryManagerAlertViewHelper * alertViewHelper;                             //@synthesize alertViewHelper=_alertViewHelper - In the implementation block
@property (assign,nonatomic) FBRequestConnection*<FBRequestConnectionRetryManagerDelegate> requestConnection;              //@synthesize requestConnection=_requestConnection - In the implementation block
@property (assign,nonatomic) unsigned state;                                                                               //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) FBSession * sessionToReconnect;                                                               //@synthesize sessionToReconnect=_sessionToReconnect - In the implementation block
@property (nonatomic,copy) NSString * alertMessage;                                                                        //@synthesize alertMessage=_alertMessage - In the implementation block
-(id)initWithFBRequestConnection:(id)arg1 ;
-(void)performRetries;
-(NSMutableArray *)requestMetadatas;
-(FBRequestConnectionRetryManagerAlertViewHelper *)alertViewHelper;
-(void)notifyConnectionWillRetryWithConnection:(id)arg1 ;
-(void)notifyConnectionDidFinishAbortingRetries;
-(FBSession *)sessionToReconnect;
-(void)repairSuccess;
-(void)repairFailed;
-(void)notifyConnectionDidFinishWithNoRetries;
-(void)addRequestMetadata:(id)arg1 ;
-(void)setSessionToReconnect:(FBSession *)arg1 ;
-(void)setRequestMetadatas:(NSMutableArray *)arg1 ;
-(void)setAlertViewHelper:(FBRequestConnectionRetryManagerAlertViewHelper *)arg1 ;
-(FBRequestConnection*<FBRequestConnectionRetryManagerDelegate>)requestConnection;
-(void)setRequestConnection:(FBRequestConnection*<FBRequestConnectionRetryManagerDelegate>)arg1 ;
-(void)dealloc;
-(unsigned)state;
-(void)setState:(unsigned)arg1 ;
-(NSString *)alertMessage;
-(void)setAlertMessage:(NSString *)arg1 ;
@end

