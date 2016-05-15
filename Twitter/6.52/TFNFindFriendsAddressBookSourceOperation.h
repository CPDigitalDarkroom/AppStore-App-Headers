/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:49 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Twitter/TFNFindFriendsSourceOperation.h>
#import <Twitter/TFNRetryableConcurrentOperationDelegate.h>

@class NSString, NSDate, NSMutableArray;

@interface TFNFindFriendsAddressBookSourceOperation : TFNFindFriendsSourceOperation <TFNRetryableConcurrentOperationDelegate> {

	char _phoneNumberInviteMode;
	NSString* _scribePage;
	NSDate* _launchOperationStartDate;
	NSMutableArray* _forwardLookupOperationsInProgress;
	NSMutableArray* _successfulForwardLookupOperations;
	NSMutableArray* _failedRetryableOperations;

}

@property (assign,nonatomic) char phoneNumberInviteMode;                                      //@synthesize phoneNumberInviteMode=_phoneNumberInviteMode - In the implementation block
@property (nonatomic,retain) NSDate * launchOperationStartDate;                               //@synthesize launchOperationStartDate=_launchOperationStartDate - In the implementation block
@property (nonatomic,retain) NSMutableArray * forwardLookupOperationsInProgress;              //@synthesize forwardLookupOperationsInProgress=_forwardLookupOperationsInProgress - In the implementation block
@property (nonatomic,retain) NSMutableArray * successfulForwardLookupOperations;              //@synthesize successfulForwardLookupOperations=_successfulForwardLookupOperations - In the implementation block
@property (nonatomic,retain) NSMutableArray * failedRetryableOperations;                      //@synthesize failedRetryableOperations=_failedRetryableOperations - In the implementation block
@property (nonatomic,copy) NSString * scribePage;                                             //@synthesize scribePage=_scribePage - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)startAddressBookOperationWithDelegate:(id)arg1 account:(id)arg2 onQueue:(id)arg3 scribePage:(id)arg4 ;
-(NSString *)scribePage;
-(void)setScribePage:(NSString *)arg1 ;
-(id)twitterUsersSoFar;
-(void)retryFailedOperations;
-(id)initWithDelegate:(id)arg1 account:(id)arg2 queue:(id)arg3 ;
-(NSMutableArray *)failedRetryableOperations;
-(void)setFailedRetryableOperations:(NSMutableArray *)arg1 ;
-(id)initWithDelegate:(id)arg1 account:(id)arg2 queue:(id)arg3 scribePage:(id)arg4 ;
-(void)setLaunchOperationStartDate:(NSDate *)arg1 ;
-(NSMutableArray *)successfulForwardLookupOperations;
-(NSMutableArray *)forwardLookupOperationsInProgress;
-(void)_forwardContactsLookupOperationsDidComplete;
-(NSDate *)launchOperationStartDate;
-(void)_forwardContactsLookupOperationsDidStartWithConatctsCount:(unsigned)arg1 ;
-(void)_forwardContactsLookupOperationComplete:(id)arg1 ;
-(char)phoneNumberInviteMode;
-(void)setPhoneNumberInviteMode:(char)arg1 ;
-(void)setForwardLookupOperationsInProgress:(NSMutableArray *)arg1 ;
-(void)setSuccessfulForwardLookupOperations:(NSMutableArray *)arg1 ;
-(void)retryableConcurrentOperation:(id)arg1 failedWithError:(id)arg2 ;
-(float)progress;
-(void)main;
-(float)weight;
@end

